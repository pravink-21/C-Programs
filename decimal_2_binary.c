#include<stdio.h>
int main(){
int a,temp=0,b,i=1;
printf("Enter Decimal Number:\n");
scanf("%d",&a);

while(a!=0){
temp=a%2;
a=a/2;
b=b+temp*i;
i=i*10;
}

printf("The Binary is %d",b);
}
