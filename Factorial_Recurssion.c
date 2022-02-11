#include<stdio.h>
int recursion(int a)
{
 int fact =a;
    if(a==1)
    {
        return 1;
    }
    else
    {
        fact = fact * recursion(a-1);
    }
    return fact;
}
int main(){
int a;
printf("Enter the number for Factorial:");
scanf("%d",&a);

printf("%d",recursion(a));
return 0;
}



