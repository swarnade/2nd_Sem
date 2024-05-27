#include <stdio.h>
int main(){
int a=145,r,sum=0;
while(a!=0){
r=a%10;
sum=sum*10+r;
a=a/10;
}
printf("%d",sum);
}