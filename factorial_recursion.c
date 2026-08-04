#include<stdio.h>
int fact(int n)
{
if(n==0||n==1)
{
return 1;
}
return (n*fact(n-1));
}
int main(){
}
int a = 6 ;
printf("%d!=%d",a,fact(a));
return 0;
