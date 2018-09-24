#include<cstdio>

using namespace std;

int main()
{
    int n;

    scanf("%d",&n);
      int a[101010];
     for(int i=0;i<n;i++)
          scanf("%d",&a[i]);
     int num=0,sum=0,c=0;
     for(int i=0;i<n;i++)
     {


         if(a[i]==-1)
          {
              if(sum>0)
                sum--;
              else
              num++;

          }

        else
        {

              sum=sum+a[i];

        }




     }
      printf("%d\n",num);

return 0;
}
