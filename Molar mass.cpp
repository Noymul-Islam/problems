#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    //double ar[4]={12.01,1.008,16.00,14.01};
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        char ch[100];

        gets(ch);
        int len=strlen(ch);
        char c;
        double sum=0;
        for(int i=0;i<len;i++)
        {
            double num=1,num2=0;
            if(ch[i]=='C'||ch[i]=='N'||ch[i]=='O'||ch[i]=='H')
                c=ch[i];
            if(ch[i+1]>='1'&&ch[i+1]<='9')
            {i++;
                while(ch[i]>='1'&&ch[i]<='9')
                {
                    num2=num2*10+(ch[i]-'0');
                    i++;
                }
               // printf("%lf\n",num2);
                i--;
            }
            if(num2==0)
            {
              if(c=='C')
              {
                  sum=sum+12.01;

              }
              else if(c=='N')
              {
                  sum=sum+14.01;
              }
              else if(c=='O')
              {
                  sum+=16.00;
              }
              else
              {

                  sum+=1.008;
              }

            }
            else{
                if(c=='C')
                {
                    sum+=12.01*num2;

                }
                else if(c=='O')
                {
                    sum+=16.00*num2;
                }
                else if(c=='N')
                {
                    sum+=14.01*num2;
                }
                else
                {

                    sum+=1.008*num2;
                }

            }

        }

        printf("%0.3lf\n",sum);
    }

    return 0;
}
