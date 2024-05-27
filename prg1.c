#include <stdio.h>
void main()
{
    int avg, s1, s2, s3, s4, s5;
    printf("Enter Marks Of 5 Subject");
    scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5);
    avg = (s1 + s2 + s3 + s4 + s5) / 5;
    char result ='N';
    if (avg >= 90)
    {
        result = 'O';
    }
    else if (avg >= 80 && avg <= 89)
    {
        result = 'E';
    }
    else if (avg >= 70 && avg <= 79)
    {
        result = 'A';
    }
    else if (avg >= 60 && avg <= 69)
    {
        result = 'B';
    }
    else if (avg >= 50 && avg <= 59)
    {
        result = 'C';
    }
    else if (avg >= 40 && avg <= 49)
    {
        result = 'D';
    }
    printf("The Average is %d\n",avg);
    printf("The Grade Obtained by Student is %c",result);
}