#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int c=-1;
        if(n==0)
             break;
             double ar[n],sum=0;
             int p=n;
             while(n--)
                {double num;
                cin>>num;
                //num=num*100;
                //int k=num;
                //printf("-->%d\n",k);
                //double l=((double)k)/100;
                //printf("----%lf\n",l);
                ar[++c]=num;
                sum+=num;
                }
                sum=sum/p;
               // int k=(int)(sum*100);
                //double l=((double)k)/100;
                //printf("%lf\n",l);
                double ans=0,l;
                 int k;
                if(sum<1)

                {for(int i=0;i<=c;i++)
                {
                    if(ar[i]>sum)
                    {
                        ans+= ar[i]-sum;

                    }

                }
                 k=(int)(ans*100);
                 //cout<<k<<' '<<ans;
                 l=((double)k)/100;
                 //cout<<l;
                  //k=l*100;
                 // cout<<k;
                  //l=((double)k)/100;
  printf("$%0.2lf\n",l);
                 }
                else
                {
                    l=0;
                    int k=(sum*100);
                    //printf("%d",k);
                    double m=((double)k)/100;
                    //cout<<m;
                    for(int i=0;i<=c;i++)
                    {
                       if(ar[i]<m)
                       {
                           l+=m-ar[i];
                        //cout<<l<<endl;
                       }

                    }

  printf("$%0.2lf\n",l);
                }



    }

    return 0;
}
