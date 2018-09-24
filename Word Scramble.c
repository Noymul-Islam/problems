#include<stdio.h>
#include<string.h>

int main()
{


    char ch[1000];

    while(gets(ch))

    {
   int a=0,b,i,j,k,m,n;

   b=strlen(ch);

   for(i=0;i<b;i++)

   {


       if(ch[i]!=' ')
          a++;

       else if(ch[i]==' ')
       {

           for(j=a-1;j>=0;j--)
               printf("%c",ch[j]);






       }
        printf("%c",ch[i]);

        a=0;



   }





    }
}

