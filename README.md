# printf project
***
![printf](https://user-images.githubusercontent.com/98335124/160219522-1e97e727-4926-42f6-8e48-3835835c0dec.jpg)
***

## Table of Contents
1. ### Requirements for this project
2. ### General-info
3. ### Secrets of “printf”
4. ### Conclusion
5. ### Collaboration
***

## Requirements for this project
### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project
***

## General-info
"printf" is the name of one of the main C output functions, and stands for "print formatted". printf format strings are complementary to scanf format strings, which provide formatted input (parsing).
![Printf svg](https://user-images.githubusercontent.com/98335124/160220929-da2f5afd-c60b-4a68-9eef-53a07af6e796.png)
***

## Secrets of “printf”
### Professor Don Colton - Brigham Young University Hawaii
#### Background
In the early days, computer programmers would write their own subroutines to read in and print out numbers. It is not terribly difficult, actually. Just allocate a character array to hold the result, divide the number by ten, keep the remainder, add x30 to it, and store it at the end of the array. Repeat the process until all the digits are found. Then print it. Too easy, right? But even though it was easy (for Einstein), it still took some effort. And what about error checking, and negative numbers? So the computer programmers brought forth libraries of prerecorded functions. And it was good. Eventually the most popular of these functions were canonized into membership in the “standard” libraries. Number printing was popular enough to gain this hallowed honor. This meant that programmers did not have to reinvent the number-printing subroutine again and again. It also meant that everybody’s favorite options tried to make it into the standard. Thus was printf born.
#### Simple Printing
In the most simple case, printf takes one argument: a string of characters to be printed. This string is composed of characters, each of which is printed exactly as it appears. So printf("xyz"); would simply print an x, then a y, and finally a z. This is not exactly “formatted” printing, but it is still the basis of what printf does.
#### Format Specifications
The real power of printf is when we are printing the contents of variables. Let’s take the format specifier %.
##### Formatters
![image](https://user-images.githubusercontent.com/98335124/160221678-d6473c9c-f6a6-4068-940a-9425d96e793f.png)
#### Designing The Perfect Spec
If you are designing a printf format specifier, thefirst step is to decide what kind of a thing you are printing. If it is an integer, a float, a string, or a character, you will make different choices about which basic format to use.
***

## Conclusion
The printf function is a powerful device for printing numbers and other things stored in variables. With this power there is a certain amount of complexity. Taken all at once, the complexity makes printf seem almost impossible to understand. But the complexity can be easily unfolded into simple features, including width, precision, signage, justification, and fill. By recognizing and understanding these features, printf will become a useful and friendly servant in your printing endeavors.
***

## Collaboration
* Leidy Yasmin Girlado Castaño - > 4537@holbertonschool.com
* Jhoan David Vargas Velandia - > 4523@holbertonschool.com
