#include<stdio.h>
int main()
{
int rev=0,temp,n;
scanf("%d",&n);
temp=n;
while(temp!=0)
{
rev=rev*10;
rev=rev+temp%10;
temp=temp/10;
}
if(rev==n)
printf("is palindrome\n");
else
printf("not palindrome\n");
return 0;
}
