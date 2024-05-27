#include <stdio.h>
int main(){
    struct student {
        int roll;
        int phn;
    };
    struct student s1;
    struct student s2;
    s1.roll=1;
    s2.phn=654321;
    struct student *ptr=&s1;
    struct student *ptr2=&s2;

    printf("%d\n",ptr->roll);
    printf("%d",ptr2->phn);
    
}