#include <stdio.h>
int string_call(char arr[]);
void string_c(char arr[]);
int main (){
    char firstname[50];
    fgets(firstname,100,stdin);
    char lastname[]="Saha Poddar";
    printf("%d\n",string_call(firstname));
    string_c(lastname);

}
int string_call(char arr[])
{   int count=0;
    for(int i=0;arr[i]!='\0';i++)
    {
        count++;
    }
    return count-1;
}
void string_c(char arr[])
{
        for(int i=0;arr[i]!='\0';i++)
    {
                printf("%c",arr[i]);
    }
        printf("%s",arr);

}