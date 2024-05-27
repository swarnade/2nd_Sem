#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Length");
    scanf("%d",&a);
    int sort[a];
    int unique[a];
    for(int i=0;i<a;i++)
    {       printf("Enter Number");
            scanf("%d",&sort[i]);
    }
    for