%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COUNT 4
#define FUNCTIONS_LABEL "functions"
#define PROGRAM_LABEL "program"
#define FUNCTION_PARAM_LABEL "functionParam"
#define FUNCTION_PARAM_LIST "functionParamList"
#define FUNCTION_ID_PARAM_LIST "id_param_list"
#define FUNCTION_BODY_RETURN "bodyreturn"
#define FUNCTION "function"
#define ELSE_BLOCK "else"
#define COMPOUND_STATEMENT "compound statement"
#define IFBODY_ELSE "ifbody_else"
#define FOR_CONDITION_STATEMENT "FOR_CONDITION_STATEMENT"
#define FOR_STATEMENT_CONDITIONSTATEMENT "for_tatement_conditionstatement"
#define DECLARATION "declaration"
#define ASSIGNMENT_LIST "assignment_list"
#define ITERATOR "iterator"
#define FUNCTIONCALL_ID_VALUELIST "functioncall_id_valuelist"
#define VALUE_LIST "value_list"
#define DECLARATION_ASSIGNMENT_LIST "declaration_assignment_list"
#define RETURN_LABEL "return_label"
#define ASSIGNMENT "assignment"
#define VAL "value"
#define IFCONDITION "ifcondition"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s) {
    fprintf(stderr, "%s\n", s);
}
char* concat(char *s1, char *s2);
char* intToStr(int num);

struct node *head;


struct node {
  struct node *left;
  struct node *right;
  char *token;     
};
struct node* mknode(struct node *left, struct node *right, char *token);


%}

%union{ struct var_name { 
			char name[100]; 
			struct node* nd;
		} nd_obj;
}




%token <nd_obj> PRINTF SCANF INT FLOAT CHAR VOID ID RETURN STR NUMBER INCLUDE EQ GE GT LE LT NE IF ELSE FOR UNARY ADD SUBTRACT DIVIDE MULTIPLY CHARLITERAL
%type <nd_obj> program body return datatype headers condition else value relop statement init expression arithmetic declaration assignment assignment_list functions function function_param_list value_list function_call
 

%%

program: headers functions { 
    head = mknode($1.nd, $2.nd, PROGRAM_LABEL); 

} 
;

functions: |
functions function {$$.nd = mknode($1.nd, $2.nd, FUNCTIONS_LABEL);}
;



function_param_list:  {$$.nd = mknode(NULL, NULL, "");}
| datatype ID {
struct node* temp = mknode(NULL, NULL, $1.name);
struct node* temp2 = mknode(NULL, NULL, $2.name);
$$.nd = mknode(temp, temp2, FUNCTION_PARAM_LABEL);
}
| datatype ID ',' function_param_list {
struct node* temp = mknode(NULL, NULL, $1.name);
struct node* temp2 = mknode(NULL, NULL, $2.name);
struct node* temp3 = mknode(temp, temp2, FUNCTION_PARAM_LABEL);
$$.nd = mknode(temp3, $4.nd, FUNCTION_PARAM_LIST);
 }
;


function: datatype ID '(' function_param_list ')' '{' body return '}' 
{
struct node* id = mknode(NULL, NULL, $2.name);
struct node* temp = mknode(id, $4.nd, FUNCTION_ID_PARAM_LIST);
struct node* temp2 = mknode($7.nd, $8.nd, FUNCTION_BODY_RETURN);
$$.nd = mknode(temp, temp2, FUNCTION);

}
;



headers: 
| headers INCLUDE {$$.nd = mknode($1.nd, NULL, $2.name); }
| INCLUDE {$$.nd = mknode(NULL, NULL, $1.name); }
;




datatype: INT 
| FLOAT 
| CHAR
| VOID
;

else: ELSE '{' body '}' {$$.nd = mknode($3.nd, NULL, ELSE_BLOCK);}
| ELSE  body {$$.nd = mknode($2.nd, NULL, ELSE_BLOCK);}
| {$$.nd = mknode(NULL, NULL, "");}
;

body: body body {$$.nd = mknode($1.nd, $2.nd, COMPOUND_STATEMENT);}
| statement ';' { $$.nd = $1.nd; }
| PRINTF '(' STR ',' ID ')' ';' {$$.nd = mknode(mknode(NULL, NULL, $5.name), NULL, $1.name);}
| SCANF '(' STR ',' '&' ID ')' ';' {$$.nd = mknode( mknode(NULL, NULL, $3.name), mknode(NULL, NULL, $6.name), $1.name);}
| IF '(' condition ')' '{' body '}' else {$$.nd = mknode($3.nd, mknode($6.nd, $8.nd, IFBODY_ELSE), $1.name);}
| FOR '(' statement ';' condition ';' statement ')'	 '{' body '}' {
    struct node *temp = mknode($5.nd, $7.nd, FOR_CONDITION_STATEMENT); 
    struct node *temp2 = mknode($3.nd, temp, FOR_STATEMENT_CONDITIONSTATEMENT); 
    $$.nd = mknode(temp2, $10.nd, $1.name); }
;





condition: value relop value {$$.nd = mknode(mknode(NULL, NULL, concat(concat($1.nd->left->token,$2.name), $3.nd->left->token)), NULL, IFCONDITION);}
;



return: {$$.nd = NULL;}
| RETURN value ';'  {$$.nd = mknode($2.nd, NULL, RETURN_LABEL);}
;

value: NUMBER {$$.nd = mknode(mknode(NULL, NULL, $1.name), NULL, VAL);}
| ID {$$.nd = mknode(mknode(NULL, NULL, $1.name), NULL, VAL);}
| CHARLITERAL {$$.nd = mknode(mknode(NULL, NULL, $1.name), NULL, VAL);}
;

relop: LT
| GT
| LE
| GE
| EQ
| NE
;


declaration:datatype ID init { 
    $2.nd = mknode(NULL, NULL, $2.name); 
    $$.nd = mknode($2.nd, $3.nd, DECLARATION); 
};

assignment: ID '=' expression { 
    $1.nd = mknode(NULL, NULL, $1.name); 
    $$.nd = mknode($1.nd, $3.nd, ASSIGNMENT);} 
| ID { $$.nd = mknode(NULL, NULL, "");} 
;

assignment_list: assignment_list ',' assignment {$$.nd = mknode($1.nd, $3.nd, ASSIGNMENT_LIST);}
| assignment {$$.nd = $1.nd;}
;	

statement: 	declaration {$$.nd = $1.nd;}
| declaration ',' assignment_list {$$.nd = mknode($1.nd, $3.nd, DECLARATION_ASSIGNMENT_LIST);}
| assignment_list {$$.nd = $1.nd;}
| ID relop expression { 
    $1.nd = mknode(NULL, NULL, $1.name); 
    $$.nd = mknode($1.nd, $3.nd, $2.name); 
}
| ID UNARY { 
    $1.nd = mknode(NULL, NULL, $1.name); 
    $2.nd = mknode(NULL, NULL, $2.name); 
    $$.nd = mknode($1.nd, $2.nd, ITERATOR); 
}
| UNARY ID { 
    $1.nd = mknode(NULL, NULL, $1.name); 
    $2.nd = mknode(NULL, NULL, $2.name); 
    $$.nd = mknode($1.nd, $2.nd, ITERATOR); 
}
;

expression: expression arithmetic expression { 
    $$.nd = mknode($1.nd, $3.nd, $2.name); 
}
| value { $$.nd = $1.nd; }
| function_call {$$.nd = $1.nd;}
;


function_call:
ID '(' value_list ')' {
struct node* temp =mknode(NULL, NULL, $1.name);
$$.nd = mknode(temp, $3.nd, FUNCTIONCALL_ID_VALUELIST);
}
;

value_list: 
| value_list ',' value {$$.nd = mknode($1.nd, $3.nd, VALUE_LIST);}
| value {$$.nd = $1.nd;}
;

arithmetic: ADD 
| SUBTRACT 
| MULTIPLY
| DIVIDE
;

init: '=' value { $$.nd = $2.nd; }
| { $$.nd = mknode(NULL, NULL, ""); }
;


%%


struct node* mknode(struct node *left, struct node *right, char *token) {	
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->left = left;
	newnode->right = right;
	newnode->token = newstr;
	return(newnode);
}

void printSpaces(int n){
	for(int i = 0 ; i < n; i++)
		printf(" ");
}

void printTree(struct node* root, int space){
	if (root == NULL){
		return;
	}
	char *current = root->token;
	if (!strcmp(current, FUNCTIONS_LABEL)){
		printTree(root->left, space);
		printf("FUNCTION %s", root->right->left->left->token);

		printTree(root->right, space);
		printf("END FUNCTION %s\n\n", root->right->left->left->token);

	}
	else if (!strcmp(current, FUNCTION)){
		printTree(root->left->right, space);
		printf("\n");
		printTree(root->right->left, space + COUNT);
		if (root->right->right){
			printSpaces(space + COUNT);
			printf("%s=", root->left->left->token);
			printTree(root->right->right, space);
			printf("\n");
		}

	}
	else if (!strcmp(current, FUNCTION_PARAM_LABEL)){
		printf(" %s",root->right->token);
	}
	else if (!strcmp(current, "printf")){
		printSpaces(space);
		printf("PRINT %s", root->left->token);
		printf("\n");
	}
	else if (!strcmp(current, "scanf")){
		printSpaces(space);
		printf("READ %s\n", root->right->token);
	}
	else if (!strcmp(current, DECLARATION)){
		if (strcmp(root->right->token, "")){
			printSpaces(space);
			printf("%s=%s",  root->left->token, root->right->left->token);
			printf("\n");
		}else{
			printSpaces(space);
			printf("%s", root->left->token);
			printf("\n");
		}
	}
	else if (!strcmp(current, ASSIGNMENT)){
		printSpaces(space);
		printf("%s=", root->left->token);
		printTree(root->right, space);
		printf("\n");
	}
	else if (!strcmp(current, VAL)){
		printf("%s ", root->left->token);
	}
	else if (!strcmp(current, FUNCTION_PARAM_LIST)){
		printTree(root->left, space);
		printTree(root->right, space);
	}
	else if (!strcmp(current, FUNCTIONCALL_ID_VALUELIST)){
		printf("%s ", root->left->token);
		printTree(root->right, space);
	}
	else if (!strcmp(current, "+") || !strcmp(current, "-") ||!strcmp(current, "*") || !strcmp(current, "/")){
		printTree(root->left, space);
		printf("%s ", current);
		printTree(root->right, space);
	}
	else if (!strcmp(current, "for")){
		printTree(root->left->left, space);
		printSpaces(space);
		printf("WHILE ");
		printf("%s", root->left->right->left->left->token);
		printf("\n");
		printTree(root->right, space + COUNT);
		printTree(root->left->right->right, space+ COUNT);
		printSpaces(space);
		printf("END WHILE\n");

	}
	else if (!strcmp(current, "if")){
		printSpaces(space);
		printf("IF %s THEN\n", root->left->left->token);
		printTree(root->right->left, space + COUNT);
		printTree(root->right->right, space);
		printSpaces(space);
		printf("ENDIF\n");
	}
	else if (!strcmp(current, ITERATOR)){
		printSpaces(space);
		printf("%s%s\n", root->left->token, root->right->token);
	}
	else if (!strcmp(current, ELSE_BLOCK)){
		printSpaces(space);
		if (!strcmp(root->left->token, "if")){
			printf("ELSEIF %s THEN\n", root->left->left->left->token);	
			printTree(root->left->right->left, space + COUNT);
			printTree(root->left->right->right, space);
		}else{
			printf("ELSE\n");
			printTree(root->left, space + COUNT);
		}

	}
	else {
		printTree(root->left, space);
		printTree(root->right, space);
	}
}


void print2DUtil(struct node* root, int space)
{
    if (root == NULL)
        return;

    space += COUNT;
    print2DUtil(root->right, space);
 
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%s\n", root->token);
 
    print2DUtil(root->left, space);
}
 
void print2D(struct node* root)
{
    print2DUtil(root, 0);
}

char* concat(char *s1, char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1); // +1 for the null-terminator
    strcpy(result, s1);
    strcat(result, s2);
    return result;
}


int main(int argc, char** argv) {
    if (argc > 1) {
        yyin = fopen(argv[1], "r");
        if (!yyin) {
            fprintf(stderr, "Error opening file.\n");
            return 1;
        }
    }
    yyparse();
	printTree(head, 0);
	//print2D(head);
    return 0;
}

