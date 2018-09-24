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
    int a,b;

    scanf("%d",&a);
      getchar();
    for(b=1;b<=a;b++)
    {
        int number[30]={0},p=1,i,j,m,n,L;
         char res[30],ch[500];
        gets(ch);
        m=strlen(ch);
        for(i=0;i<m;i++)
        {
            if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))
            {
               if(ch[i]>='A'&&ch[i]<='Z')
                     ch[i]=ch[i]+32;

               int k=ch[i]-96;
               number[k]++;

            }

        }
        L=0;
        for(i=1;i<=26;i++)
        {


            if(number[i]>p)
             {
              char c=i+96;
              res[0]=c;
              res[1]='\0';
              p=number[i];
                 L=1;

             }
              else if(number[i]==p)
             {
                 char c=i+96;
                 res[L]=c;
                 L++;

             }

        }
        res[L]='\0';

        int z=strlen(res);
          sort(res,res+z);
        for(i=0;i<z;i++)



            printf("%c",res[i]);

        printf("\n");

    }

    return 0;
}



