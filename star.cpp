#include<bits/stdc++.h>
using namespace std;

int func(int i)
{
    printf("%d\n",i);
    return i;
}
int main()
{
    int i=10;
    int j = 0;
    int sum = i++ +  i++ + i++;
    int sum2 = j++ + j++ + ++j;
    printf("%d\n",sum);
    printf("%d\n",sum2);
    printf("%d\n",i);
  //  int res=func(i++)+func(++i);

    return 0;
}

