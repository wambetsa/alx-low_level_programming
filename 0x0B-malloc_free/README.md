0x0B. C - malloc, free
C
Memory allocation
 By: Julien Barbier
 Weight: 1
 Project will start Oct 2, 2023 6:00 AM, must end by Oct 4, 2023 6:00 AM
 Checker was released at Oct 2, 2023 6:00 AM
 An auto review will be launched at the deadline
Concepts
For this project, we expect you to look at this concept:

Automatic and dynamic allocation, malloc and free
Resources
Read or watch:

0x0a - malloc & free - quick overview.pdf
Dynamic memory allocation in C - malloc calloc realloc free (stop at 6:50)
man or help:

malloc
free
Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
What is the difference between automatic and dynamic allocation
What is malloc and free and how to use them
Why and when use malloc
How to use valgrind to check for memory leak
Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
Requirements
General
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file
More Info
You do not have to learn about calloc and realloc.

Quiz questions
Great! You've completed the quiz successfully! Keep going! (Hide quiz)
Question #0
How many bytes will this statement allocate?

malloc(sizeof(unsigned int) * 2)


2


4


8

Question #1
How many bytes will this statement allocate?

malloc(sizeof(char) * 10)


10


20


40

Question #2
How many bytes will this statement allocate?

malloc(sizeof(int) * 10)


40


32


10

Question #3
How many bytes will this statement allocate?

malloc(10)


2


10


4


40

Question #4
What is Valgrind?


A container service


It’s a program to validate memory allocation


It’s a new step when I compile with gcc


It’s a program to test a C program in a specific environment

Question #5
How many bytes will this statement allocate?

malloc((sizeof(char) * 10) + 1)


10


11


1


21


20

Question #6
How many bytes will this statement allocate?

malloc(sizeof(int) * 4)


4


8


16


32
