#include <stdio.h>
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
 
int main()
{
    int a ,b;
    printf("Enter an Number: ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("LCM of %d and %d is %d ", a, b, lcm(a, b));
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
    return 0;
}