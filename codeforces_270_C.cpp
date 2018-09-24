#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cstring>
#include<ctype.h>
using namespace std;

struct data
{
    string name1,name2;

} ar[100010];

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>ar[i].name1>>ar[i].name2;
    int x;
    cin>>x;
    string dtr;
    dtr=ar[x].name1>ar[x].name2?ar[x].name2:ar[x].name1;
    //cout<<dtr<<endl;
    int k=0;
    for(int i=2; i<=n; i++)
    {
        int track;
        cin>>track;
        if(k!=0)
            continue;
        string a=ar[track].name1>ar[track].name2?ar[track].name2:ar[track].name1;
        string b=ar[track].name1<ar[track].name2?ar[track].name2:ar[track].name1;
       // cout<<a<<b<<endl;
        if(a>dtr)
            {
                dtr=a;
                continue;
            }
        else if(b>dtr)
            {
                dtr=b;
                continue;
            }
        else
            k++;

    }
    if(k!=0)
        printf("NO\n");
    else
        printf("YES\n");


}
