#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char s[10000],c[3];
     long long int k;

    while(scanf("%s %s %lld",s,c,&k)==3)
    {

       long long  int a,b=0,n=0,m,z=0,res=0;
        char p[1000],p1[1000]; int w=0,s1=0;
         m=strlen(s);
         for(int i=0;i<m;i++)
         {
             a=n*10+(s[i]-'0');
             n=a%k;

             b=b*10+s[i]-'0';
              p[z++]=(b/k)+'0';
              b=b%k;


         }
           p[z]='\0';
           int l=strlen(p);
           for(int i=0;i<l;i++)
           {
               if(p[i]=='0'&&w==0)
                 {  s1++;
                     continue;
                 }

               else
               {
                   p1[w]=p[i];
                   w++;

                    s1=0;



               }

           }
           p1[w]='\0';

         if(c[0]=='%')
             printf("%lld\n",n);
         else if(c[0]=='/')
              {
                  if(s1==l)
                     printf("0\n");
                     else
                        puts(p1);

              }

         /*int res;
         a=0;
         for(int i=0;i<m;i++)
         {
             b=b*10+s[i]-'0';
              res=(res*10)+(b/k);
              b=b%k;



         }*/

    }


}
