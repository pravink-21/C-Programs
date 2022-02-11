#include<stdio.h>//Ye Issue krta hai vscode mein pow() function. online sahi hai
#include<math.h>
int main(){
int a,n,sum=0,temp;
printf("Enter an Number:");
scanf("%d",&a);
temp=a;
int temp2 ,count=0;
while(temp>0)
{
    temp = temp/10;
    count++;
}
printf("\n count is %d \n",count);
temp = a;
int k = count-1;//

for(int i=0;i<count;i++)
{
    temp2=temp%10;
    sum =sum+ temp2*pow(10,k);
    k--;
    temp = temp/10;
}
if(sum == a)
{
    printf("the no. is palindrome\n");
}
else{
    printf("the no.  is not a palindrome \n");
}

return 0;
}