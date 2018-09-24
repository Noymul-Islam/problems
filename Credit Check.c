#include<stdio.h>
#include<string.h>

int main()
{


    int a,b;
    while(scanf("%d",&a)==1)
    {


    for(b=1;b<=a;b++)
    {


        char ch[25],ch1[20];

        int m,n,i,j,k=0,sum=0,sum1=0,x,z,p;

        scanf(" %[^\n]",ch);

        m=strlen(ch);

        for(i=0;i<m;i++)
        {

            if(ch[i]==' ')
                  continue;

             else

             {
                 ch1[k]=ch[i];
                 k++;

             }



        }
        ch1[k]='\0';
        z=strlen(ch1);

        for(i=0;i<z;i=i+2)
        {


           n= ((ch1[i]-'0')*2);
           if(n>9)
           {

               p=n%10;
               x=n/10;
               n=p+x;



           }
           sum=sum+n;



        }
        for(i=1;i<z;i=i+2)

        {

            sum1=sum1+((ch1[i]-'0'));





        }
        sum=sum+sum1;
        if(sum%10==0)
             printf("Valid\n");

        else

             printf("Invalid\n");


    }
    }
    return 0;
}
