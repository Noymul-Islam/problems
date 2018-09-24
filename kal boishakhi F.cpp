#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{


char first[100], second[100];


while(scanf("%s %s",first,second)==2)
{
    int a=atoi(first);
    int b=atoi(second);
      char temp[100];
     int k=0;
    long long int res=a+b;
    while(res!=0)
    {
        int z=res%10;
        if(z!=0)
        {
            temp[k++]=z+'\0';


        }
         res=res/10;


    }
    char S1[100],S2[100],S3[100];
    temp[k]='\0';
     k=0;
    int m=strlen(first);
    int n=strlen(second);

    for(int i=0;i<m;i++)
    {
        if(first[i]!='0')
        {

            S1[k++]=first[i];
        }

    }
    S1[k]='\0';
      k=0;
    for(int i=0; i<n;i++  )
    {
        if(second[i]!='0')
        {
            S2[k++]=second[i];

        }

    }
    S2[k]='\0';
    int new1=atoi(S1);
    int new2=atoi(S2);
    new1=new1+new2;
    char pom[100];
     k=0;
    while(new1!=0)
    {
     pom[k++]=new1%10;
     new1=new1/10;



    }
     pom[k]='\0';
     int ans;N

     ans=strcmp(pom,temp);
     if(ans==0)
          printf("YES\n");
     else
         printf("NO\n");



}
return 0;
}
