#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<sstream>

using namespace std;

int main()
{
     char s[200010],t[200010];
     int for_s[153],for_t[153];
     memset(for_s,0,sizeof(for_s));
    memset(for_t,0,sizeof(for_t));
    gets(s);
    gets(t);
      int len1=strlen(s);
       int len2=strlen(t);
       for(int i=0;i<len1;i++)
       {
           if(s[i]>='A'&&s[i]<='Z')
           {

               int num=s[i]-64;
               //cout<<num;
               for_s[num]++;

           }
           else if(s[i]>='a'&&s[i]<='z')
           {
               int num=s[i]-70;
               for_s[num]++;
                //cout<<num;
           }

       }
       for(int i=0;i<len2;i++)
       {
           if(t[i]>='A'&&t[i]<='Z')
           {
               int num=t[i]-64;
               for_t[num]++;

           }
           else if(t[i]>='a'&&t[i]<='z')
           {
               int num=t[i]-70;
               for_t[num]++;

           }


       }
        int yes=0,no=0;
       for(int i=1;i<=100;i++)
       {

           if(for_s[i]>for_t[i])
           {
               //printf("ok");
               //no=no+for_s[i]-for_t[i];
               yes=yes+for_t[i];
                 for_s[i]=for_s[i]-for_t[i];
                 for_t[i]=0;

           }
           else if(for_s[i]!=0&&for_t[i]>=for_s[i])
           {
               //printf("ok");
           //  if(for_t[i]>for_s[i])
            yes=yes+for_s[i];
            for_t[i]=for_t[i]-for_s[i];
              for_s[i]-=for_s[i];
            // else
              //  yes=yes+for_s[i];
           }

       }
       printf("%d %d\n",for_s[2],for_t[28]);
       for(int i=1;i<=52;i++)
       {
           if(for_s[i]>0)
           {
               if(s[i]>t[i])
               {
                   if(for_[i-26]>0)
                   {
                       no


                   }

               }

               no=no+abs(for_s[i]-for_t[i]);
           }


       }
       printf("%d %d\n",yes,no);
    return 0;
}
