# 0x11. C - printf

This is a TEAM Project done during **Full Stack Software Engineering studies** at **ALX School**. It aims to learn about What are macros and how to use them, What are the most common predefined macros & How to include guard in your header files in **C language**.

## Technologies
* C files are compiled using `gcc 4.8.4`
* C files are written according to the C90 standard
* Tested on Ubuntu 14.04 LTS
* Team Member: Lawrence Maduabuchi & Abdullahi Ngui.
* Date: April 21st 2023

## General Instructions

Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
Don’t forget to push your header file
All your header files should be include guarded
Note that we will not provide the _putchar function for this project

##GitHub Memo
There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

#Authorized functions and Macros to be used
write (man 2 write)
malloc (man 3 malloc)
free (man 3 free)
va_start (man 3 va_start)
va_end (man 3 va_end)
va_copy (man 3 va_copy)
va_arg (man 3 va_arg

## Compilation
Use the below to compile code after project completion
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

## Files
All of the following files are programs written in C:

| Filengthame | Description |
| -------- | ----------- |
| ` binary_fill.c` | Printf function.|
| ` ev_print_func.c` | Prints a char.|
| ` fill_hex_array.c` | Prints an unsigned number|
| ` Print_oarray.c` | Prints the value of a pointer variable|
| ` get_print_func.c` | Write a function calculate active flags.|
| ` handle_buff.c ` | Calculates the precision for printing |
| ` long_octal_array.c` | Calculates the size to cast the argument |
| ` print_add.c` | Calculates the width for printing |
| ` print_binary.c` | Prints an argument based on its type |
| ` main.h` | source file for all executable prototypes for program|
| ` print_buf.c` | A function that evaluates if a char is printable|
| ` print_chr.c` | A function that explicitly prints a string |


## Tasks
All of the following files are programs written in C:

| Task | Question |
| -------- | ----------- |
| ` 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life ` | Write a function that produces output according to a format.|
| ` 1. Education is when you read the fine print. Experience is what you get if you don't
 | Handle the following conversion specifiers: d , i.|
| ` 2. With a face like mine, I do better in print` | Handle the following custom conversion specifiers: b|
| ` 3. What one has not experienced, one will never understand in print
` | Handle the following conversion specifiers: u, o, x, X|
| ` 4. Nothing in fine print is ever good news
` | Use a local buffer of 1024 chars in order to call write as little as possible. |
| ` 5. My weakness is wearing too much leopard print
` | Handle the following custom conversion specifier: s – prints the string|
| ` 6. How is the world ruled and led to war? Diplomats lie to journalists and believe these lies when they see them in print
` | Handle the following conversion specifier: p|
| ` 7. The big print gives and the small print takes away
` | Handle the following flag characters for non-custom conversion specifiers: +, space, #|
| ` 8. Sarcasm is lost in print
` | Handle the following lengthgth modifiers for non-custom conversion specifiers: I, h|
| ` 9. Print some money and give it to us for the rain forests
` | Handle the field width for non-custom conversion specifiers.|
| ` 10. The negative is the equivalengtht of the composer's score, and the print the performance
` | Handle the precision for non-custom conversion specifiers.|
| ` 11. It's depressing when you're still around and your albums are out of print
` | Handle the 0 flag character for non-custom conversion specifiers.|
 
| ` 12. Every time that I wanted to give up, if I saw an interesting textile, print what ever, suddenly I would see a collection
` | Handle the - flag character for non-custom conversion specifiers. |
| ` 13. Print is the sharpest and the strongest weapon of our party
` | Handle the following custom conversion specifier: r|
| ` 14. The flood of print has turned reading into a process of gulping rather than savoring
` | Handle the following custom conversion specifier: R|
| ` 15. All the above options work well together. ` | 
