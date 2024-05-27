#include <stdio.h>
void main(){
    int s1,s2,s3;
    printf("Enter Three Number");
    scanf("%d %d %d",&s1 ,&s2, &s3);
    s1=s1*s1;
    s2=s2*s2;
    s3=s3*s3;
    if((s1+s2)==s3 || (s1+s3)==s2 || (s3+s2)==s1 )
    {
        printf("Right Angle Triangle");
    }
    else
    {
        printf("Not An Right Angle Triangle");
    }
}