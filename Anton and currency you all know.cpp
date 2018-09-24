#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<map>
#include<sstream>

using namespace std;

int main()

{
    char ch[100000+10];
      gets(ch);

     int len=strlen(ch);

     int last=ch[len-1]-'\0';
     int first= ch[0]-'\0';
       char temp;
        int pos,k=0,z=0;;
    // if(last<=first)
     //{
         for(int i=0;i<len-1;i++)
         {
             //printf("1");
             if((ch[i]-'\0')%2==0&&((ch[i]-'\0')<last))
             {
                 k++;
                 z++;
                temp=ch[i];
                  pos=i;
                  ch[i]=ch[len-1] ;
                  ch[len-1]=temp;
                    break;
             }
             if((ch[i]-'\0')%2==0)
             {
          z++;
                 pos=i;


             }



         }
         //printf("1");
         //printf("%d",k);
         if(k)
         {
             puts(ch);

         }
         else if(z)
         {
             temp=ch[pos];
             ch[pos]=ch[len-1];
             ch[len-1]=temp;
             puts(ch);

         }
         else
            printf("-1\n");


     //}
     //if(last>first)
     //{

       //  for(int i=0;i<len-1;i++)
         //{

           //  if(ch[i]-'\0'%2==0)&&(last)

         //}

     //}

    return 0;
}
