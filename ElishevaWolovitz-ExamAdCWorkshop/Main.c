#include <stdio.h>
#include <stdbool.h>
#include "GetNextPrime.h"


int main(void)
{
	ull test1, test2, test3; 

	//test case 1: test if program returns correct first prime number: 
	test1 = GetNextPrime(); 
	if (test1 != 2)
	{
		printf("error\n");
	}

	//test case 2: test if program returns correct (n+1)th prime number: 
	ull n = 100, temp;
	for (ull i = 0; i < n; i++)
	{
		temp = GetNextPrime();
	}
	if (temp != 547)
	{
		printf("error\n"); 
	}
	return 0; 
}
