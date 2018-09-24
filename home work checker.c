#include<stdio.h>
#include<string.h>

int main()
{


    int a,b,c,i=0,j,m,n;
    char ch,ch1,ch2[20];

    while(scanf("%d %c %d %c %s",&a,&ch,&b,&ch1,ch2)==5)
    {

        int k;

        k=strlen(ch2);

        if(ch2[k-1]=='?')
               continue;

             else

        {

            if(ch=='+')
            {

                a=a+b;

                m=atoi(ch2);
                if(a==m)
                 i++;



            }
           else if(ch=='-')
            {

                a=a-b;

                m=atoi(ch2);

                if(a==m)

                    i++;


            }


        }




    }
      printf("%d\n",i);



    return 0;
}
