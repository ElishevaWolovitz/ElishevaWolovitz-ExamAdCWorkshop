#include "GetNextPrime.h"
#include <stdio.h>
#include <stdbool.h>

//utility function
static bool IsPrime(ull number)
{
    bool result = true;
    if (number < 1)
    {
        printf("overflow error; program can not determin if this number is a prime");
        exit(1); 
    } 
    else
    {
        for (size_t i = 2; (i < number) && (result); i++)
        {
            if ((number % i) == 0)
            {
                result = false;  
            }
        }
    }
    return result;
}
static ull s_previousePrimeNumber = 0; 

ull GetNextPrime(void)
{
    ull result = 0; 
    if (s_previousePrimeNumber == 0)
    {
        result = 2; 
        s_previousePrimeNumber = 2; 
    }
    else
    {
        for (ull i = s_previousePrimeNumber + 1; result < s_previousePrimeNumber; i++)
        {
            if (IsPrime(i))
            {
                result = i;
            }
        }
    }
    s_previousePrimeNumber = result; 
    return result; 
}
