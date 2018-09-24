#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;
struct num
          {
             char name[30];
             int date,month,year;

          }a[500];
int comp(const void *a, const void *b)
{
    num *c= (num *)a;
    num *d=(num *)b;

    if(c->year!= d->year)
        return(c->year-d->year);
    else if(c->month!=d->month)
         return(c->month-d->month);
         else
         return (c->date-d->date);


}

int main()
{


        int n;
         while(scanf("%d",&n)==1)
         {

          int i,j,m;
          for(i=0;i<n;i++)
              scanf("%s %d %d %d",&a[i].name,&a[i].date,&a[i].month,&a[i].year);

             qsort(a,n,sizeof(num),comp);

             printf("%s\n%s\n",a[n-1].name,a[0].name);

         }



    return 0;
}
