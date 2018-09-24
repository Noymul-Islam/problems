#include <stdio.h>


int main()
{
long long int f[5000],in,last=f[0];
int i;

while((scanf( "%lld" , &in))==1)
{

for(i=0;i<=in;i++)
{
f[0]=0,f[1]=1;
f[i]=f[i-1]+f[i-2];
if(f[i]>last)
{
last=f[i];

}

}
printf("The Fibonacci number for %lld is %lld \n",in,last);
last=0;

}

return 0;
}
//dotnet12//
//New poster

//Posts: 4
//Joined: Fri Aug 17, 2012 9:43 pm//

