/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdio_ext.h>

/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/
int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
int divide(int operand1, int operand2);

/**
* raises power of the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 ^ operand2
* @note returns 1 for power of 0 
*/
int power(int operand1, int operand2);

/**
* finds nth of the operand1 where n is operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 ^ (1/ operand2)
* @note returns 1 for power of 0 
*/
int squareroot(int operand1);

/**
* finds factorial of operand1 returns the result 
* @param[in] operand1 
* @return integer value of the operand1!
*/
int factorial(int operand1);

/**
* finds log of operand1 returns the result 
* @param[in] operand1 
* @return integer value of the operand1!
*/
int logarithm(int operand1);

/**
* finds log of operand1 to base 10 returns the result 
* @param[in] operand1 
* @return integer value of the operand1!
*/
int logarithm10(int operand1);

/**
* finds temperature of operand1 in celsius returns the result 
* @param[in] operand1 
* @return integer value of the operand1!
*/
int temp(int operand1);

/**
* generates a random number and returns the result 
* @return integer !
*/
int randomize();



/**
* converts $ to INR returns the result 
* @return integer !
*/
int dollartoinr(int operand1);

/**
* checks prime returns the 1 or 0 
* @return integer !
*/
int prime(int operand1);
#endif  /* #define __CALCULATOR_OPERATIONS_H__ */
