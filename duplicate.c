#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int count=0;
printf("Enter the string with repetitve characters\n");
scanf("%s",str);
int length=strlen(str);
for(int i=0;i<length-1;i++){
    for(int j=0;j<length;j++){
        if(i==j) break;
        else{
            if(str[i]==str[j]) count++;
        }
    }
    if(count>0) printf("%c\t",str[i]);
    //count=0;
}
return 0;
}