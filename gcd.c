#include<stdio.h>
#include<math.h>

//using namespace std;

int gcd(int a,int b)
{
while(b>0)
{

    a=a%b;
    a^=b^=a^=b;

}
return a;

}
int main()

{
    int a=5, b=7,j;

    j=gcd(a,b);
    printf("%d",j);


}
