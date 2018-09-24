#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;
int main()
{

   long long int m,n,height ,Q;
    int i,j;
    scanf("%lld",&height);
    long long int lady[height];
    for(i=0;i<height;i++)
    scanf("%lld",&lady[i]);

    scanf("%lld",&Q);
    long long int lucu[Q];

    for(i=0;i<Q;i++)
       scanf("%lld",&lucu[i]);

       for(i=0;i<Q;i++)
       {
           long long int lowest=0, heigst=11111111111;

           for(j=0;j<height;j++)
           {
               if((lucu[i]>lady[j])&&(lady[j]>lowest))
               {
                   lowest=lady[j];

               }
                else if((lucu[i]<lady[j])&&(lady[j]<heigst))
               {
                   heigst=lady[j];

               }

           }

           if(lowest!=0&&heigst!=11111111111)
               printf("%lld %lld\n",lowest,heigst);
               else if(lowest==0&&heigst!=11111111111)
                printf("X %lld\n",heigst);
                 else if(lowest!=0&&heigst==11111111111)
                   printf("%lld X\n",lowest);
                   else
                   printf("X X\n");
       }
        return 0;

}
