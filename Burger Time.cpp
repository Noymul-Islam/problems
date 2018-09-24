#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{

    int n;
     while(scanf("%d",&n)==1)
     {
         if(n==0)
            break ;
               int c=0;
               char ch[n];
                scanf("%s",ch);
                 int length=strlen(ch);
          for(int i=0;i<length;i++)
          {

              if(ch[i]=='Z')
               {
                   c=0;
                    break;
               }

          }

     }
     return 0;
}
