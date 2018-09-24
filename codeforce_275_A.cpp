#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;
int main()

{
    long long int first,second,x,y;
    scanf("%I64d %I64d %I64d %I64d",&first,&second,&x,&y);
    long long int ff=0,fs=0,c=0,d=0,i;
    long long int mm=min(x,y);
     long long int man=min-1;
     //ff=abs(man-first

    for( i=1;;i++)
    {

         if(i%x!=0&&i%y!=0)
         {
             if(first>second&&ff!=first||fs==second)
             {
                 ff++;
             }

             else if(second>=first&&fs!=second||ff==first)
              {
                  fs++;
              }


              if(ff+fs==first+second)
          {
              printf("%I64d\n",i);
              break;
          }
         }

        else
        {if(i%x!=0&&c==0)
        {
            if(ff==first)
               {c++;
               //continue;
               }
               else
               ff++;

        }
        else if(i%y!=0&&d==0)
        {if(fs==second)
              {d++;
                //continue;
               }
else
    fs++;
        }

        if(ff+fs==first+second)
          {
              printf("%I64d\n",i);
              break;
          }
    }}

    return 0;
}
