# pseudocode-generator

Written in lex/yacc, turns simple C code to pseudocode.

`make && ./translator test/in6_for.c` will print

```
FUNCTION main
    Factorial=0
    i=1 
    WHILE i<=MAX
        Factorial=f i 
        i++
    END WHILE
    main=Factorial 
END FUNCTION main

FUNCTION f x
    x=x + 1 
    f=x 
END FUNCTION f
```
