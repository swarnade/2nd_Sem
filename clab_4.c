#include <stdio.h>

int convert(int num)
{
    int bin = 0, rem = 0, place = 1;  
    printf("\nBinary equivalent of %d is ", num);  
    while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    }  
    printf("%d\n", bin);  
  
}

int main()
{
    int a;
    printf("Enter an Number: ");
    scanf("%d", &a);
	convert(a);
	return 0;
}