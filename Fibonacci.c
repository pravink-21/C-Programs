#include<stdio.h>//0 1 1 2 3 5 last 2 number ka sum
int main()
{
int n,k=0,j=1,l;
printf("Enter the Number of Elements:");
scanf("%d",&n);

printf("%d\n%d\n",k,j);
for(int i=0;i<n-2;i++){
    l=k+j;
    printf("%d\n",l);
    k=j;
    j=l;
}
return 0;
}