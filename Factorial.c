#include<stdio.h>
int main(){
int a,fact=1;
printf("Enter the number for Factorial:");
scanf("%d",&a);
for(int i=1;i<=a;i++){
    fact=fact*i;
}
printf("%d",fact);
return 0;
}