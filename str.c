#include <stdio.h>
#include <string.h>
typedef struct dtl
{
    char name[100];
    int acc;
}details;
void define(details *ptr);
int main()
{
    details acc[2];
    for(int i=0;i<=1;i++)
    {
        char n[100];
        int j;
        printf(" The Name Is \n");
        fgets(n,100,stdin);
        strcpy(acc[i].name,n);
        printf(" The Account Is ");
        scanf("%d",&j);
        acc[i].acc=j;

    }

        for(int i=0;i<=1;i++)
    {   
        details *ptr=&acc[i];
        define(*ptr);
    }
}
void  define(details *ptr)
{
    printf(" The Name Is %s",(*ptr).name);
    printf("Account Number Is %d",(*ptr).acc);
}

