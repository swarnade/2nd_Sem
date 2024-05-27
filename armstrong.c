#include <stdio.h>
int main(){
int a=153,arm=0,r;
while(a!=0){
    r=a%10;
    arm=arm+(r*r*r);
    a=a/10;
}
printf("%d",arm);


}[]