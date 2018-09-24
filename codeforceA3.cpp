#include<cstdio>

using namespace std;
int main()

{

    int n;

    scanf("%d",&n);
      int a[n];
        for(int i=0;i<n;i++)
              scanf("%d",&a[i]);
        int un=0;
      for(int i=0;i<n;)
      {
          if(a[i]==-1)
              {

                 un++;
                    i++;
              }

          else if(a[i]>0&&i<n-1)
          {
               int j=i;
                 j++;
              while(a[i]!=0)
              {
                  if(a[j]==-1)
                  {
                      a[i]=a[i]+a[j];
                       a[j]=0;
                      j++;

                  }

                  else
                     {
                         a[i]=a[i]+a[j];

                      j++;
                     }
              }
              i=j;


          }

      }
       printf("%d\n",un);
       return 0;
}
