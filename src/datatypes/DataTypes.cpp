//
// Created by Carlos José Requena Jiménez on 2019-08-05.
//
// see https://www.programarya.com/Cursos/C++/Sistema-de-Tipos
// see https://www.gribblelab.org/CBootCamp/3_Basic_Types_Operators_And_Expressions.html

#include <stdio.h>
#include <iostream>
#include <bits/shared_ptr.h>
#include "DataTypes.hpp"
using namespace std; // this is a using directive telling the compiler to check the std namespace when resolving identifiers with no prefix



// Here is a small C program that will print out the size of some basic C types on your machine.
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


// Here is some code to show how to print integers in various representations.
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

//Enumeration Constants:
//An enumeration constant is a list of constant integer values, that you can assign to arbitrary labels. They provide a
//convenient way to associate constant values with names. For example you could store the months of the year like this:
void DataTypes::printEnumerationConstants() {
    printf("\n");
    printf("================================\n");
    printf("print enumeration constants\n");
    printf("================================\n");

    enum months {
        JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
    };
    months theMonth = JAN;
    printf("JAN %d\n", theMonth);

    theMonth = FEB;
    printf("FEB %d\n", theMonth);

    theMonth = MAR;
    printf("MAR %d\n", theMonth);

    theMonth = APR;
    printf("APR %d\n", theMonth);

    theMonth = MAY;
    printf("MAY %d\n", theMonth);

    theMonth = JUN;
    printf("JUN %d\n", theMonth);

    theMonth = JUL;
    printf("JUL %d\n", theMonth);

    theMonth = AUG;
    printf("AUG %d\n", theMonth);

    theMonth = SEP;
    printf("SEP %d\n", theMonth);

    theMonth = OCT;
    printf("OCT %d\n", theMonth);

    theMonth = NOV;
    printf("NOV %d\n", theMonth);

    theMonth = DEC;
    printf("DEC %d\n", theMonth);
}


// Unlike in languages like Python, R, Octave/Matlab, etc, which are dynamically typed languages, the C language is a
// statically typed language. From a practical point of view, this means in C, we have to declare, up front, the type of
// every variable we use. In languages like Python we can do crazy stuff like this:
void DataTypes::printDeclarations() {
    printf("\n");
    printf("================================\n");
    printf("print declarations\n");
    printf("================================\n");
    double a = 123.456;
    double b = 50.2;
    double c = 100.0;
    double d[] = {a, b, c};
    printf("a=%.3f, b=%.3f, c=%.3f, d=[%.3f, %.3f, %.3f]\n",a, b, c, d[0], d[1], d[2]);
}



//Expressions:
//Like in any other programming language, in C, there are a number of arithmetic relational and logical operators we can
//use to write expressions that are made up of simpler basic types.

// Arithmetic Operators:
// The following binary arithmetic operators can be used in C: +, -, *, / and the modulus operator %. When writing arithmetic
// expressions we must always be aware of operator precedence, which is the order in which operators are applied when evaluating
// an expression.
void::DataTypes::arithmeticOperatorsExample() {
    printf("\n");
    printf("================================\n");
    printf("arithmetic operators example\n");
    printf("================================\n");
    int a=100, b=2, c=25, d=4;
    int result1, result2, result3;
    result1 = a * b + c * d;
    result2 = (a * b) + (c * d);
    result3 = a * (b + c) * d;
    printf("result1=%d, result2=%d, result3=%d\n", result1, result2, result3);
}