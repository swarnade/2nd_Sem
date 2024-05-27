#include <stdio.h>

typedef struct student 
{
    int roll_number;
    float cgpa;
}coe;
void define(struct student std[]);
int main()
{
    coe s1[2];
    for(int i=1)
    s1[0].roll_number=01;
    s1[1].roll_number=11;
    coe *ptr=&s1[0];
        printf("The CGPA \n%f",ptr->cgpa);
}