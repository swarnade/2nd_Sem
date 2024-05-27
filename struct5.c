#include <stdio.h> 
typedef struct student{
    int roll;
    int phn;
}std;
int main(){
    std s1={1,123};
    std s2={2,234};
    std s3={3,345};
    std *ptr1=&s3;
    printf("%d",ptr1->phn);

}