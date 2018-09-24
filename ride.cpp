/*
ID: shhorot2
LANG: C++
TASK: ride
*/
#include<cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include<cstring>
using namespace std;

int main()
{
ofstream fout ("ride.out");
ifstream fin ("ride.in");
char ch1[10],ch2[10];
fin>>ch1>>ch2;
int n=strlen(ch1);
int res1=1,res2=1;
for(int i=0;i<n;i++)
{
    res1=res1*(ch1[i]-64);
}
int m=strlen(ch2);
for(int i=0;i<m;i++)
    res2=res2*(ch2[i]-64);
if(res1%47==res2%47)
     fout <<"GO"<<"\n";
else
    fout<<"STAY"<<"\n";
    return 0;
}
