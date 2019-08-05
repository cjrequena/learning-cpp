//
// Created by Carlos José Requena Jiménez on 2019-08-05.
//
// see https://www.programarya.com/Cursos/C++/Sistema-de-Tipos
// see https://www.gribblelab.org/CBootCamp/3_Basic_Types_Operators_And_Expressions.html

#include <stdio.h>
#include <iostream>
#include "DataTypes.h"


/**
 *  Here is a small C program that will print out the size of some basic C types on your machine.
 */
void DataTypes::printDataTypes() {
  printf("\n");
  printf("================================\n");
  printf("print out the size of some basic C types on your machine\n");
  printf("================================\n");

  printf("a char is %ld bytes\n", sizeof(char));
  printf("an int is %ld bytes\n", sizeof(int));
  printf("an float is %ld bytes\n", sizeof(float));
  printf("a double is %ld bytes\n", sizeof(double));
  printf("a short int is %ld bytes\n", sizeof(short int));
  printf("a long int is %ld bytes\n", sizeof(long int));
  printf("a long double is %ld bytes\n", sizeof(long double));
}

/**
 * Here is some code to show how to print integers in various representations.
 */
void DataTypes::printIntegerRepresentations() {
  printf("\n");
  printf("================================\n");
  printf("print integers in various representations.\n");
  printf("================================\n");

  printf("1984 in decimal is %d\n", 1984);
  printf("1984 in octal is 0%o\n", 1984);
  printf("1984 in hexadecimal is 0x%x\n", 1984);
  printf("0123 is octal for %d\n", 0123);
  printf("0x12f is hexadecimal for %d\n", 0x12f);
}