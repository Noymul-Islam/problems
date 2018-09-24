#include<stdio.h>
#include<math.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    {
        for(b=0;b<a;b++)
        {
            double m,n,z;
            int x,y,r;
            scanf("%d %d %d",&x,&y,&r);

            m=sqrt((pow((x-0),2))+(pow((y-0),2)));



            printf("%0.2lf %0.2lf\n",r-m,r+m);






        }


    }

    return 0;
}
