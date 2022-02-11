#include<stdio.h>
#include<stdlib.h>
int main(){
int a;
printf("enter the length of array: ");
scanf("%d",&a);

int *p=(int *)malloc(a*sizeof(int));

for(int i=0;i<a;i++){
    printf("Enter %d Element : -  \n",i+1);
    scanf("%d",&p[i]);
}
for(int i=0;i<a;i++){
    printf("Your Elements %d id : - %d\n\n",i+1,p[i]);
}
free(p);
return 0;
}