#include <stdio.h>
int main (){
    int a=52149;
    int sum=0;
    while(a!=0)
    {
       int r=a%10;
       sum=sum*10+r;
       a=a/10;
    }
    printf("%d",sum);
}