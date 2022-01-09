#include <stdio.h>
#include <stdbool.h>
#include "GetNextPrime.h"

/*
    Using static to make "private"
*/
static ull s_previousePrimeNumber = 0;

/*utility function*/
static bool IsPrime(ull number)
{
    bool result = true;

    /*starts from 2 as every prime number is divisible by 1*/
    for (size_t i = 2; (i < number) && (result); i++)
    {
        if ((number % i) == 0)
        {
            result = false;  
        }
    }

    return result;
}

ull GetNextPrime(void)
{
    ull result = 0; 
    /*first call to function*/
    if (s_previousePrimeNumber == 0)
    {
        result = 2; 
        s_previousePrimeNumber = 2; 
    }
    /*every call after first*/
    else
    {
        /*if result is bigger then s_previousePrimeNumber it means i is next prime number and so bigger then s_previousePrimeNumber. */
        for (ull i = s_previousePrimeNumber + 1; result < s_previousePrimeNumber; i++)
        {
            if (i < 1) /*if i gets to big for type unsigned long long there is an overflow error with exit code 1*/
            {
                printf("exit error code 1: overflow error\n");
                exit(1); 
            }
            if (IsPrime(i))
            {
                result = i;
            }
        }
    }
    s_previousePrimeNumber = result; /*update s_previousePrimeNumber for next function call*/
    return result; 
}
