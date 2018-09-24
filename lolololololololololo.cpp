#include<cstdio>
#include<iostream>

using namespace std;
struct data{
 int in,day,fine;

};
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        data ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].day>>ar[i].fine;
        ar[i].in=i;



    }
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {

        if(ar[i].day*ar[j].fine>ar[i].fine*ar[j].day)
        {
            data temp;
            temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;

        }
         /*else if(ar[i].day*ar[j].fine==ar[i].fine*ar[j].day)
                  {


                  }*/

    }
   // printf("%d\n",n);
   // break;
    if(c)
        printf("\n");
    c=1;
    for(int i=0;i<n;i++)
    {
        if(i==0)
            printf("%d",ar[i].in+1);
        else
             printf(" %d",ar[i].in+1);

    }
   // printf("%d\n",n);
    //break;
    printf("\n");



    }
    return 0;
}

