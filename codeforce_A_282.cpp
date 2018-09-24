#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
int main()

{
    int ar[10];
    ar[0]=2;
    ar[1]=7;
    ar[2]=2;
    ar[3]=3;
    ar[4]=3;
    ar[5]=4;
    ar[6]=2;
    ar[7]=5;
    ar[8]=1;
    ar[9]=2;
    char ch[5];
    gets(ch);
    int a=ch[0]-'0';
    int b=ch[1]-'0';
    printf("%d\n",ar[a]*ar[b]);
    //printf("%d\n",10%14);

    return 0;
}
