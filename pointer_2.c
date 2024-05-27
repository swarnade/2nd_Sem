#include <stdio.h>
void cbv(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("%d %d\n",a,b);
}
void cbr(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("%d %d\n",*a,*b);
}
int main(){
    int a=5;
    int b=10;

    printf("%d %d\n",a,b);
    cbv(a,b);
    printf("%d %d\n",a,b);
    cbr(&a,&b);
    printf("%d %d\n",a,b);

}

