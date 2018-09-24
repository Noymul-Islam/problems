#include<stdio.h>
#include<string.h>
int main()
{
   unsigned long long int a,b,c=1,p;

    while(scanf("%llu",&a)==1)

    {


      unsigned long long int n[a],i,j;


 for(j=0;j<a;j++)
      n[j]=0;
        for(b=0;b<a;b++)

{




 char  ch[100];

long long  int  m,k,s;


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

    printf("Case %llu: %llu\n",c,n[0]);

    c++;




}











  return 0;



}
