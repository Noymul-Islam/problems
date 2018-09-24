#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;

char ch[1000];
void seive()
{
    int i,j, root;
    memset(ch,'1',sizeof(ch));
    root=sqrt(1000);
     ch[0]='0';
     ch[1]='0';
     for(i=2;i<=root;i++)
     {
         if(ch[i]=='1')
         {
             for(j=2;i*j<=1000;j++)
             {
                 ch[i*j]='0';

             }
         }
     }



}

int main()
 {

     seive();
     int a,b,k=1;
     while(cin>>a>>b)
     {
       int root=sqrt(a)+1;
       if(ch[b]=='1')
         cout<<"Case"<<" "<<k++<<": "<<-1<<"\n";
       //else

     }
 }
