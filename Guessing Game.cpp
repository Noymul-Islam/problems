#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{

    int high=11,low=-1,right_on;
    char ul[100]="too high";
    char ll[100]="too low";
    char correct[100]="right on";
    int n,k=0;
    char ch[100];
    while(scanf("%d",&n)==1)
    {
        if((n==0))
              return 0;
        getchar();
        gets(ch);

        if(strcmp(ch,ul)==0)
        {
            if(n<high)
            {
                high=n;
            }

        }
        else if(strcmp(ch,ll)==0)
        {
            if(n>low)
            {
                low=n;
            }

        }
        else if(strcmp(ch,correct)==0)
        {
            right_on=n;
              k++;

        }
        if(k!=0)
        {
            k=0;

            if(right_on>low&&right_on<high)
                 printf("Stan may be honest\n");
            else
                printf("Stan is dishonest\n");
          high=11,low=-1;

        }

    }
    return 0;
}
