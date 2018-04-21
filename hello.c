/*
 * Filename: hello.c
 * Purpose: Simple hello world program
 * 
 * This is a comment. Everything within the
 * slashes and stars are commented out of the
 * source file (this file) and the compiler 
 * does not read it as computer code. Programmers
 * use comments to describe the functionality and
 * purpose of components of a program as well as the
 * program as a whole. 
 *
 * Above, I wrote the name of the file as well 
 * as a general description of what it is
 * supposed to do. In a large program which may have
 * many files, it is good practice to have each file
 * to fulfill some specific underlying purpose, each one 
 * contributing the program at large in a specific manner 
 * like wheels in a cog.
 *
 * I will now go over each specific part of this small
 * file, itself being one program. 
 */

/*
 * Each C program is broken up into subroutines 
 * or functions which are called sequentially to
 * form a procedure, which is ordered list of instructions
 * that do a specific task. Below is a header file. A 
 * header file is a file that contains constant variables,
 * functions, and other items which other files call. 
 * This header file, stdio.h, contains functions that 
 * handle input and output. More specifically, stdio.h is
 * part of the C Standard Library, a collection of header
 * files whose specifications are written by the International
 * Organization for Standardization (ISO), whereby stdio
 * means Standard Input/Output and contains the functions
 * necessary to read and write data to the I/O devices connected
 * to the CPU.
 */
#include <stdio.h>

/*
 * This is the main function. The compiler seeks out this
 * function to process all variables and to compile and run
 * any functions called in this function. The main function
 * is what you would call the brains of the program. It 
 * is where the primary procedure that calls all other procedures 
 * is written. 

 * All functions have the ability to receive 
 * parameters (which are variables or values
 * passed by another function or the command prompt)  
 * unless told by the compiler
 * not to by writing 'void' in the paranthesis section () where
 * the parameters are stored, and all functions have the ability
 * to return variables unless told not to by writing 'void' before
 * the name of the function, in this case 'main'.
 *
 * Therefore, this function is called 'main', it receives no 
 * parameters, and returns an 'int' which is an integer number.
 * 
 * All functions contain their procedures within curly braces {}. 
 * The first brace is called the opening curly brace, and the 
 * last brace is called the closing brace. When the compiler reaches
 * the closing brace, it knows it has finished reading the function.
 */
int main(void)
{
    /*
     * printf() is a function called from the header file stdio.h.
     * It receives a string (a series of characters) in quotes
     * and outputs it to the console. Historically, input came
     * from a teleprinter, and whenever printf() or similar functions
     * were called, the teleprinter would print out the resulting
     * message. In this case, printf() also interprets short codes
     * which tell the compiler to format the message in a particular
     * way according to what the code asks for. In this case, '\n'
     * means 'go to the next line', so that when the function 
     * executes, once it gets to '\n' it ends the line and starts
     * a new one.
     */
    printf("Hello, NCC Programming Club!\n");

    /*
     * The return statement sends data out to be received either
     * by the function which called it or the console. This may
     * be useful if a function calls another function to receive
     * a particular value after its procedure has executed to be
     * used by the former function for ITS procedure. In otherwords,
     * a return statement may be used to return the square root of 
     * a parameter, or a decoded message, or anything that another
     * function will use to carry on with its procedure.
     *
     * In this case, the main function returns the value 0, which
     * is sent to the console. On Linux/UNIX, after the user has
     * compiled and executed this program they may type:
     *
     * $ echo $?
     *
     * in order to print the value that was returned by the 
     * previously running program, in this case being this one.
     */
    return 0;
}
