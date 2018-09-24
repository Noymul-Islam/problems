

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
 int main()
 {


int a[10],i,j=0;

for(i=9;i>=0;i--,j++)
    a[j]=i;

sort(a,a+10);


for(j=0;j<10;j++)
    printf("%d\n",a[j]);

 }
