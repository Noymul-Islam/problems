#include<stdio.h>
#include<string.h>

int main()
{

    char ch[1000];

    while(gets(ch))
    {

        char ch1[50],ch2[50],c;

    long long int a,b,m,n;

    int i,j,k=0,p=0,z;

    z=strlen(ch);

    for(i=0;ch[i]!=' ';i++)
    {

        ch1[i]=ch[i];

    }
    j=i;
    ch1[i]='\0';
    for(i=j;i<z;i++)
    {
        if(ch[i]==' ')
             continue;
        else if((ch[i]=='%')||(ch[i]=='/'))
            c=ch[i];
        else
        {


          ch2[k]=ch[i];
          k++;
        }

    }
    ch2[k]='\0';



        a=atol(ch1);
        b=atol(ch2);

        if(c=='%')
            printf("%lld\n",(a%b));

        else if(c=='/')
              printf("%lld\n",(a/b));




    }

    return 0;
}
