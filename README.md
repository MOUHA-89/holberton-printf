Name of project: _printf

Description: This repo contains all our code custom function called _printf() it's a fonction of language C from stdio.h and our function _printf() replicates the same process as the the C function printf(). This is done as a part our training for a software development program.

Command of compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

Requirements : Allowed editors: vi, vim, emacs All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 All your files should end with a new line A README.md file, at the root of the folder of the project is mandatory Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Authorized functions and macros write (man 2 write) malloc (man 3 malloc) free (man 3 free) va_start (man 3 va_start) va_end (man 3 va_end) va_copy (man 3 va_copy) va_arg (man 3 va_arg)

Example:_printf(printf(const char *[format], ...) here Format refers to a string with any number of specifiers "Hello, %s! You are %d years.old\n" stdout Hello Keita! You are 30 years old.

MAN PAGE Name : _printf (it's the same that the printf function in C it's a simple recreation) Synopsis: To use this function the #include "main.h" header is needed. Description:The _printf() function produces output according to a format which is describedbelow. This function write its output to the stdout, the standard output stream. To be use to print strings,a number in binary form, integers,Characters.

RETURN VALUES The _printf() function returns an integer representing the number of symbols printed not counting \0 for the string.

Flowchart: Design sans titre (1)
