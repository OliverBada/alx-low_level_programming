#include <stdio.h>
#include <stdlib.h>
#include "arithmatic.h"
 
void connect()
{
    printf("Connected to C extension...\n");
}
 
//return random value in range of 0-50
int randNum()
{
    int nRand = rand() % 50; 
    return nRand;
}
 
//add two numbers and return value
int addNum(int a, int b)
{
    int nAdd = a + b;
    return nAdd;
}

// subtract two numbers and return value
int subNum(int a, int b)
{
	int nSub = (a - b);
	return nSub;
}

// divide two numbers and return value
int divNum(int a, int b)
{
    int nDiv = a / b;
    return nDiv;
}

 // multiply two numbers and return value
int mulNum(int a, int b)
{
    int nMul = a * b;
    return nMul;
}

// modulus two numbers and return value
int modNum(int a, int b)
{
    int nMod = a % b;
    return nMod;
}
