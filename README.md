# pseudocode-generator

Written in lex/yacc, turns simple C code to pseudocode.

`make && ./translator test/in7_nested.c` will print

```
FUNCTION main
    first
    second=3 
    third=f 
    Factorial=1 
    str='d'
    i
    MAX
    READ MAX
    i=1 
    WHILE i<=first
        IF first<0 THEN
            Factorial=-1 
            IF second<0 THEN
                Factorial=-2 
                j=1 
                WHILE j<=MAX
                    PRINT FACTORIAL
                    j++
                END WHILE
            ENDIF
        ELSEIF MAX>10 THEN
            Factorial=-1 
            i=MAX + 1 
        ELSEIF MAX<=10 THEN
            Factorial=-1 
            i=MAX + 1 
        ELSE
            Factorial=-1 
            i=MAX + 1 
        ENDIF
        i++
    END WHILE
    PRINT FACTORIAL
    a=multFunc a b 
END FUNCTION main

FUNCTION multFunc x y
    x=x * y 
    multFunc=x 

```
