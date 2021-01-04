#include<stdio.h>
int main()
{
int num;
int sum=0;
int rem;
int z;
printf("Enter the number\n");
scanf("%d",&num);
z=num;
while(num!=0){
rem=num%10;
sum=sum+(rem*rem*rem);
num=num/10;
}
if(sum==z) printf("Armstrong number");
else printf("not armstrong number");
return 0;
}
