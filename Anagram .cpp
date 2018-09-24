#include<cstdio>
#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
vector<char>v;
int main()
{

    int t;
    cin>>t;
     getchar();
    while(t--)
    {

         char ch[5000],ch1;


        gets(ch);

        //while(strlen(ch)==0);
        int n=strlen(ch);
        if(n==0)
             printf("1\n");
        else
        {sort(ch,ch+n);

        for(int i=0;i<n;i++)
             v.push_back(ch[i]);
              int i=0;
        do
        {
           //printf("%c\n",v[i]);
           for( i=0;i<v.size();i++)
              printf("%c",v[i]);
               i=0;

         //cout<<ch<<"\n";
   printf("\n");
        }while(next_permutation(v.begin(),v.end()));

    for(int i=0;i<v.size();i++)
            v.clear();
    }}

    return 0;
}
