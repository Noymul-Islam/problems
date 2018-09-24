#include<stdio.h>

int a1;

void cof(int b)
{
    a1=b+9;
}
int main()
{
  int  b=5;
    cof(b);
    printf("%d\n",a1);
    return 0;

}
