#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
      char older[20],younger[20];

        struct num
        {
           char name[20];
           int date,month,year;


        }a[n];
        int i,j,m;
        for(i=0;i<n;i++)
        {
            scanf("%s %d %d %d",&a[i].name,&a[i].date, &a[i].month, &a[i].year);


        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)

            {
                if(a[i].year>a[j].year)
                {
                    strcpy(younger,a[i].name);
                    strcpy(a[i].name,a[j].name);
                    strcpy(a[j].name,younger);
                }


            else if(a[i].year==a[j].year)
            {
                if(a[i].month>a[j].month)
                     {strcpy(younger,a[i].name);
                         strcpy(a[i].name,a[j].name);
                         strcpy(a[j].name,younger);
                     }
                  else if(a[i].month==a[j].month)
                  {
                      if(a[i].date>a[j].date)
                          {strcpy(younger,a[i].name);
                          strcpy(a[i].name,a[j].name);
                          strcpy(a[j].name,younger);
                          }
                      else
                        {strcpy(younger,a[j].name);
                          strcpy(a[i].name,a[j].name);
                          strcpy(a[j].name,younger);

                        }


                  }
                else
                     {strcpy(younger,a[j].name);


            }
             else
                strcpy(younger,a[j].name);
            }
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {


            if(a[i].year<a[j].year)
                strcpy(older,a[i].name);
            else if(a[i].year==a[j].year)
            {
                if(a[i].month<a[j].month)
                     strcpy(older,a[i].name);
                  else if(a[i].month==a[j].month)
                  {
                      if(a[i].date<a[j].date)
                          strcpy(older,a[i].name);
                      else
                        strcpy(older,a[j].name);

                  }
                else
                     strcpy(older,a[j].name);


            }
             else
                strcpy(older,a[j].name);

        }}

          printf("%s\n%s\n",younger,older);



    }

return 0;
}
