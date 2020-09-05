//
//  C Practice
//
//  Created by Levitannin on 9/5/20.
//  Copyright © 2020 Levitannin. All rights reserved.
//      Notes and code from Effective C by No Starch
//
//  To create an executable of a .c program, in a unix-based terminal
//      type:
//          cc NameofFile.c
//      This will create an a.out in that location for this file.

#include <stdio.h>  //  Input/Output
#include <stdlib.h> //  Exit codes

//  C has two possible exe environments: freestanding & hosted
//      Freestanding is typical in embedded programming.
int main(int argc, const char * argv[]) {
    // can use printf or puts to print.
    //  puts is a standard library function and writes a str to stdout with newline.
    printf("Hello, World!\n");
    //  There can be errors with prints or any keyword call. To verify, try:
    if ( puts("Hello, sub-world!") == EOF ){
        return EXIT_FAILURE;
        //  Or could be return 1, these are equivilant.
    }
    return EXIT_SUCCESS;
    //  Or 0, these are equivilant
}
