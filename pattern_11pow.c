#include <stdio.h>
int main(){
    int i,res=1;
    for (i=1;i<=4;i++)
    {
        if(i==1)
        {
          res=1;
        }
        else
        {
            res=res*11;
        }
        
        printf("%d",res);
        printf("\n");
    }

}