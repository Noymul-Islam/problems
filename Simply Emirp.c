#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{


    char ch[10];

    while(gets(ch))

    {

        int a, m,n,i,j,c=0,d=0,b,s,p,l=0;

        p=strlen(ch);


  char ch1[10];

        m=atoi(ch);

        n=sqrt(m)+1;

        for(i=2;i<=n;i++)
        {

            if(m%i==0)
                 c++;



        }

        if(c!=0)
             printf("%d is not prime.\n",m);

        else
        {


       for(i=p-1;i>=0;i--)
       {

           ch1[l]=ch[i];
           l++;

       }

       ch1[l]='\0';

   a=strcmp(ch,ch1);

   if(a==0)
      printf("%d is prime.\n",m);


   else

{




            b=atoi(ch1);
            j=sqrt(b)+1;

            for(i=2;i<=j;i++)
            {

                if(b%i==0)
                     d++;


            }




            if(c==0&&d==0)
                 printf("%d is emirp.\n",m);
            else if(c==0 && d!=0)
                 printf("%d is prime.\n",m);

        }}

    }


}
