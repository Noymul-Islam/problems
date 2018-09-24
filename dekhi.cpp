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
 int main()

 {
     char ch[500],ch1[500];

     while(gets(ch))
     {
          //getchar();

         string s1;
  int num=0;
    int k=0;
      int len=strlen(ch);
      //printf("%d\n",len);
  for(int i=len;i>=0;i--)
  {
     // printf("1");
      ch1[k]=ch[i];
    k++;

  }
  ch1[k]='\0';
   printf("%d\n",strlen(ch1));
 printf("%s",ch1);
         for(int i=0;i<strlen(ch);i++)
         {
             string s2;
             s1=s1+ch[i];

             for(int j=0;j<strlen(ch1);j++)
             {

                 s2=s2+ch1[j];

                 string res=s1+s2;
                 if(mp.find(res)==mp.end())
                 {

                     num++;

                 }

             }



         }

   printf("%d\n",num);
    mp.clear();

     }


     return 0;
 }
