#include<cstdio>
#include<cstring>
using namespace std;

void Qsort(int a[],int beg,int end);
int part(int a[],int beg, int end);

int main()
{

    int a[100];
     int n;
     printf("How many data???\n\n");
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
         scanf("%d",&a[i]);
     int beg=1,end=n;
     Qsort(a,beg,end);
     for(int i=1;i<=n;i++)
      printf("%d\n",a[i]);

      return 0;
}

void Qsort(int a[], int beg ,int end)
{

    if(beg<end)
    {

        int p=part(a,beg,end);
        Qsort(a,beg,p-1);
        Qsort(a,p+1,end);

    }

}
int part(int a[],int beg, int end)
{

    int p=beg; int pivot=a[beg],loc;

    for(int i=beg+1;i<=end;i++)
    {

        if(pivot>a[i])
        {
            a[p]=a[i];
            a[i]=a[p+1];
            a[p+1]=pivot;

            p++;
        }
    }
    return p;
}
