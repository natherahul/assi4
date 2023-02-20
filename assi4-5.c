#include<stdio.h>
int main()
{
    int i=19;
    printf("print first 10 odd natural number in reverse order:");
    while(i>0)
    {
        printf("%d\t",i);
        i=i-2;
    }
}