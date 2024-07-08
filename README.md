# Compiler-for-a-toy-language
I have built a compiler for a toy language using lex(flex) and yacc(bison)

To compile and run the program:
1. lex cucu.l (if lex does not work use flex)
2. yacc -d cucu.y (if yacc doesnt work use bison)
3. cc lex.yy.c cucu.tab.c -o cucu (it can either be y.tab.c or cucu.tab.c depending on the system)
4. ./cucu

The code prompts the user to input the name of the file upon.The zip contains 2 sample files sample1.cu and sample2.cu. Ensure that these files are in the same directory.
It writes the lexer output in lexer.txt and the parsed output in parser.txt. 

The compiler for this toy language CUCU accepts:
1. variable declaration and assignment statements
2. function declaration, definition and call statements
3. while and if statements
4. return statements inside a function
5. recognises and avoids comments
6. while and if statements accept boolean expressions that use the logical operators ==, != , <=, >= , < , > or any
   arithmetic expression or identifier or constant number or a string
7. the data types allowed are int and char *
8. function body can be empty or contain a list of statements
9. function arguments can be many or none
10. char * variable declaration only assigns a string or func_call or another identifier to the identifier
11. int variable declaration only assigns a number or integer expression or func_call or another identifier to the identifier
