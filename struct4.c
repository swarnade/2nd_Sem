#include <stdio.h>
typedef struct employee {
    int id;
    int phn;
}emp;
void main(){
emp s1={01,123};
emp s2={02,234};
emp s3={03,345};

emp *ptr1=&s1;
emp *ptr2=&s2;
emp *ptr3=&s3;
printf("%d %d",ptr1->id,ptr1->phn);
printf("%d %d",s2.id,s2.phn);
printf("%d %d"(*ptr3).id,(*ptr3).phn);

}
