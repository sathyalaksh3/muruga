#include<stdio.h>
int main()
{
int rem,rev,temp,n;
clrscr();
scanf("%d",&n);
temp=n;rev=0;
while(temp!=0)
{
rem=temp%10;
rev=rev*10+rem;
temp=temp/10;
}
if(temp==n)
printf("is palindrome\n");
else
printf("not palindrome\n");
return 0;
}
