#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include "GetNextPrime.h"


int main(void)
{
	ull test1; 

	//test case 1: test if program returns correct first prime number: 
	test1 = GetNextPrime(); 
	if (test1 != 2)
	{
		printf("error\n");
	}

	//test case 2: test if program returns correct (n+1)th prime number: 
	ull n2 = 100, temp2;
	for (ull i = 0; i < n2; i++)
	{
		temp2 = GetNextPrime();
	}
	if (temp2 != 547)
	{
		printf("error\n"); 
	}

	return 0; 
}
