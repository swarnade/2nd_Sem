#include <stdio.h>
void main(){
    struct student {
        int roll;
        int num;
        int phn;
    };
    struct student s1;
    struct student s2;
    s1.roll=10;
    s1.num=100;
    s1.phn=123456;
    s2.roll=20;
    s2.num=200;
    s2.phn=654321;

    struct student *ptr=&s1;
    struct student *ptr2=&s2;
    printf("%d %d %d %d\n",s1.roll,s1.num,s2.roll,s2.num);
    printf("%d\n",(*ptr).num);
    printf("%d\n",ptr2->num);
    printf("%d",ptr2->phn);

}