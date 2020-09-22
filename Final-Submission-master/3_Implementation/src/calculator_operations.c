
#include <calculator_operations.h>
#include <math.h>

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}

int power(int operand1, int operand2)
{
    if(0 == operand2)
        return 1;
    if(1 == operand2)
        return operand1;
    else
        return pow(operand1,operand2);
}

int squareroot(int operand1)
{
    
        return sqrt(operand1);
}

int factorial(int operand1)
{
  /* Return -1 for negative numbers */
  if(operand1 < 0)
    return -1;

  /* Return 1 for 0 */
  if(operand1 == 0)
    return 1;

  /* Recursively calculate Factorial of the number */
  return operand1 * factorial(operand1-1);
}

int logarithm(int operand1)
{
  
  return log(operand1);
}

int logarithm10(int operand1)
{
  
  return log10(operand1);
}

int temp(int operand1)
{
  
  return ((operand1 - 32)*5/9);
}

int randomize()
{
  
  return rand();
}

int dollartoinr(int operand1)
{
  
  return operand1*73;
}


  int prime(int operand1)
{
    /* return -1 if a negative number*/
    int i,count=0;
    if (operand1<0)
        return -1;

    for(i=1;i<=operand1;i++)
    {
        if((operand1%i)==0)
        {
            count++;
        }
    }
    /*return 1 for a prime number*/
    if(count==2)
        return 1;
    /*return 0 for a non prime number*/
    else
        return 0;
}
