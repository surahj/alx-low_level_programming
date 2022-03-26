# C - Hello, World

In this project, I learned
- How to print text using printf, puts and putchar
- How to get the size of a specific type using the unary operator sizeof
- How to compile using gcc
- What is the default program name when compiling with gcc
- What is the official C coding style and how to check your code with betty-style
- How to find the right header to include in your source code when using a standard library function
- How does the main function influence the return value of the program

## TASK

### 0. Write a script that runs a C file through the preprocessor and save the result into another file.
The C file name will be saved in the variable $CFILE
The output should be saved in the file c
- File: 0-preprocessor

### 1. Write a script that compiles a C file but does not link.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c.
Example: if the C file is main.c, the output file should be main.o
-File: 1-compiler

### 2. Write a script that generates the assembly code of a C code and save it in an output file.
The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .s instead of .c.
Example: if the C file is main.c, the output file should be main.s
- File: 2-assembler

### 3. Write a script that compiles a C file and creates an executable named cisfun.
The C file name will be saved in the variable $CFILE
- File: 3-name

### 4. Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
Use the function puts
You are not allowed to use printf
Your program should end with the value 0
- File: 4-puts.c

### 5. Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
Use the function printf
You are not allowed to use the function puts
Your program should return 0
Your program should compile without warning when using the -Wall gcc option
- File: 5-printf.c

### 6. Write a C program that prints the size of various types on the computer it is compiled and run on.
You should produce the exact same output as in the example
Warnings are allowed
Your program should return 0
You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option
-File: 6-size.c
