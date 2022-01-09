#ifndef GETNEXTPRIME_H
#define GETNEXTPRIME_H
/**@file GetNextPrime.h
 *program that returns the next prime number starting from 2 everytime it is called 
 */

typedef unsigned long long int ull; 

/**
 * @brief returns the nth prime number (n being the number of times it has been called).
 * @param    void
 * @return returns a ull (unsigned long long int)
 * @note the function can not get called a negative amount of times.
 * Therefore if n is negative there has been an over flow error and program with exit with exit code 1.
 */

ull GetNextPrime(void); 



#endif //GETNEXTPRIME_H

