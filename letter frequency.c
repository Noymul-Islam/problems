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
    int a;
    scanf("%d",&a);
    for(int i=0;i<=a;i++)
    {
        int number[30]={0},p=1;
       char ch[500],char res[30];
       while(scanf("%s",ch)==1)
       {
           if(ch[0]=='\n')
                 break;

         int m=strlen(ch);
         for(int j=0;j<m;j++)
         {
             if((ch[j]>='A'&&ch[j]<='Z')||(ch[j>='a'&&ch[j]<='z'))
             {
                 if(ch[j]>='A'&&ch[j]<='Z')
                       ch[j]=ch[j]+32;

                 int k=ch[j]-94;
                 number[k]++;

             }

         }
         int L=1
         for(i=1;i<26;i++)
         {
             if(number[i]>p)
             {
              char c=i+94;
              res[0]=c;
              res[1]='\0';
              p=number[i];
                 L=1;

             }
             else if(number[i]==p)
             {
                 char c=i+94;
                 res[L]=c;
                 L++;

             }

         }
         res[L]='\0';
         int m= strlen(res);
         sort(res,res+m);
         for(int i=0;i<m;i++)
             printf("%c",res[i]);
         printf("\n");

       }




    }


}
