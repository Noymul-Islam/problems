#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cstdio>

#include<map>
  using namespace std;


map<string,int>mp;

char ch[1000][10000];
 string s1[1000][5000];
   string s2[1000][5000];
int main()
{
    string s3,s4;

    while(cin>>s3>>s4)
    {
         string c;
           int p=0;
        for(int i=0;i<s3.size();i++)
        {

             c=c+s3[i];
              s1[p++]=c;


        }
        int q=0;
        c.clear();
        for(int i=0;i<s4.size();i++)
        {
          c=c+s4[i];
          c.reverse();



        }


    }



}
