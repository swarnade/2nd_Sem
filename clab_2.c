#include <stdio.h>
#include <math.h>
float power(int,int);
float main(){
    int num1,num2, rem;
    float res;
    

    printf("Enter an Number: ");
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    res=power(num1,num2);
    
    printf("The Number's Are %f", res);
    
    return 0;
}
float power(int base, int exponent)
{
  float result=1;
  int exp=exponent;
  int b=base;
  for(exponent; exponent>0; exponent--)
     {
         result = result * base;
     }

  if(exp>=1)
{
    return result;
}
else if (exp<1 || b<1)
{   
    return 1/result;
}
}
