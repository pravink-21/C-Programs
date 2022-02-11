#include<stdio.h>
int main(){
int a,rem,reverse=0;
printf("Enter an Number:");
scanf("%d",&a);
while(a!=0){
    rem=a%10;
    reverse=reverse*10+rem;
    a=a/10;
}

printf("%d",reverse);
return 0;
}