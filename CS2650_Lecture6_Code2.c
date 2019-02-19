/*
 ============================================================================
 Name        : CS2650_Lecture6_Code2.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>  //standard input output built into c library
typedef int number;
 int main() {
   number c;
   printf( "Enter a value :");
   fflush(stdout);  //ECLIPSE BUG
   c = getchar( );
   printf( "\nYou entered: ");
   putchar( c );
   return 0;
}
