#include<stdio.h>//jo khud se ya 1 se Dived ho jaye
int main(){
int a;
printf("Enter an number:");
scanf("%d",&a);
int count=0;
for(int i=2;i<a;i++)//1 se divied hota hi hai isliye 2 
{                   //aur =isliye kyunki har number khud se divied hota hi hai
     if(a%i==0)
     {
        count++;//yaha pr hm ye dekh rhe hai ki uss no. ka divide 1 ya usse jayada toh nahi
     }
}
if(count > 0)
{ 
    printf("this is not a prime no.\n");
}
else{
     printf("this is a prime no.\n");
}
return 0;
}