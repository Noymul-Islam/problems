#Ninclude<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int n;
     scanf("%d",&n);
      getchar();
      char ch[1000];

      scanf("%s",ch);
      char ch1[1000];
        int k=0;
      for(int i=n-1;i>=0;i--)
      {
          ch1[k++]=ch[i];


      }
       ch1[k]='\0';
       //printf("%s\n",ch1);
      char cin='1';
       char res[1000];
      for(int i=n-1;i>=0;i--)
      {
         // printf("2\n");
          if(ch1[i]=='1'&&cin=='1')
           {res[i]='0';
            cin='1';
           }
           else if(ch1[i]=='0'&&cin=='1')
           {res[i]='1';

              cin='0';
           }
           else if(ch1[i]=='0'&&cin=='0')
            {
                res[i]='0';
                  cin='0';

            }
            else if(ch1[i]=='1'&&cin=='0')

          {
              res[i]='1';
               cin='0';

          }



      }
       res[n]='\0';
       //printf("%s\n",res);
       char res1[1000];
       k=0;
       for(int i=n-1;i>=0;i--)
       {
           res1[k++]=res[i];


       }

       res1[k]='\0';
       //printf("%s\n",res1);
       int count=0;
       for(int i=0;i<n;i++)
         {

             if(res1[i]!=ch[i])
               count++;


         }
         printf("%d\n",count);


    return 0;
}
