#include <stdio.h>
#include <string.h>
int main (){
    char str[]="abba";
    int count=strlen(str)-1;
    int h=0,check=0;
    while(count>1)
    {
        if(str[h++]!=str[count--])
     {
       check=1;
       break;
     }
    }
    if(check==1)
    {
        printf("Not");
    }
    else
    {
        printf("Yes");
    }
}