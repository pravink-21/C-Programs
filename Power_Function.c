#include<stdio.h>
int power(int a, int b){
    if(b==0){
        return 1;
    }
    else{
        return power(a,b-1)*a;
    }
}

int main(){
int a,b;
printf("Enter the values of a to the power b:\n\n");
scanf("%d%d",&a,&b);

printf("%d raise to the power %d: = %d",a,b,power(a,b));
return 0;
}