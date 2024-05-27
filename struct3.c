#include <stdio.h>
int main(){
    typedef struct student {
        int roll;
        int phn;
    } coe;
    coe s1={001,123456};
    coe s2={100,654321};
    coe *ptr1=&s1;
    coe *ptr2=&s2;
    printf("%d \n %d",ptr1->roll,ptr2->phn);

}