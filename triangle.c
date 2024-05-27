#include <stdio.h>
int main (){
    int a=4,b=3,c=5;
 if((a+b)>c || (a+c)>b || (b+c)>a)
 {
 if(a==b && b==c)
 {
    printf("Equilateral Triangle");
 }
 else if(a==b || a==c || b==c)
 {
    printf("Isosceles Triangle");
 }
 else
 {
    printf("Scalene Triangle");
 }
 }
 else 
 {
    printf("Error Dimension--Triangle Formation Not Possible");
 }
 return 0;
}
