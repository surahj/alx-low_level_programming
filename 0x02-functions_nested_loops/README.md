# C - Functions, nested loops
In this project, I learned:
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89
- What are header files and how to to use them with #include

## Tasks

#### 0. Write a program that prints _putchar, followed by a new line.

- The program should return 0
- File: [0-putchar.c](0-putchar.c)

#### 1. Write a function that prints the alphabet, in lowercase, followed by a new line.

- Prototype: void print_alphabet(void);
- You can only use _putchar twice in your code
- File: [1-alphabet.c](1-alphabet.c)

#### 2. Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

- Prototype: void print_alphabet_x10(void);
- You can only use _putchar twice in your code
- File: [2-print_alphabet_x10.c](2-print_alphabet_x10.c)

#### 3. Write a function that checks for lowercase character.

- Prototype: int _islower(int c);
- Returns 1 if c is lowercase
- Returns 0 otherwise
- FYI: The standard library provides a similar function: islower. Run man islower to learn more.
- File: [3-islower.c](3-islower.c)

### 4. Write a function that checks for alphabetic character.

- Prototype: int _isalpha(int c);
- Returns 1 if c is a letter, lowercase or uppercase
- Returns 0 otherwise
- FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.
- File: [4-isalpha.c](4-isalpha)

#### 5. Write a function that prints the sign of a number.

- Prototype: int print_sign(int n);
- Returns 1 and prints + if n is greater than zero
- Returns 0 and prints 0 if n is zero
- Returns -1 and prints - if n is less than zero
- File: [5-sign.c](5-sign.c)

#### 6. Write a function that computes the absolute value of an integer.

- Prototype: int _abs(int);
- FYI: The standard library provides a similar function: abs. Run man abs to learn more.
- File: [6-abs.c](6-abs.c)







