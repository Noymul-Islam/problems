#include<stdio.h>
#include<string.h>
int main()
{
   long long int a,b,c=1,p;

    while(scanf("%lld",&a)!=EOF)

    {

       long long int n[a],i,j;

        for(b=0;b<a;b++)

{




 char  ch[100];

long long  int  m,k,s;

 for(k=0;k<a;k++)
      n[k]=0;

 scanf(" %[^\n]",ch);

 m=strlen(ch);

 for(k=0;k<m;k++)
 {

     n[b]=n[b]+ch[k];





 }





 }



    for(i=0;i<a-1;i++)

    {




        for(j=i+1;j<=a-1;j++)
        {


            if(n[i]<n[j])
            {


                p=n[i];
                n[i]=n[j];
                n[j]=p;




            }

        }
    }

    printf("Case %lld: %lld\n",c,n[0]);

    c++;




}











  return 0;



}

