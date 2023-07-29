make:
	lex translator.l
	yacc -d -v translator.y
	gcc lex.yy.c y.tab.c -ll -o translator

