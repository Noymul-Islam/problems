#include<cstdio>
#include<cstring>

using namespace std;
int main()
{
    char ch1[1000],ch2[1000],res[1000],ch3[1000];
    int c=0,i,j,d=0;
    scanf("%s %s",ch1,ch2);
    int m=strlen(ch1);
    int n=strlen(ch2);
     k=n-1;
    if(m<n)
    {
        strcpy(ch3,ch1);
        strcpy(ch1,ch2);
        strcpy(ch2,ch3);


    }
    for(i=m-1;i>=0;i--)
    {
        if(i!=(m-n)-1)
        {int hold;
        hold=(ch1[i]-'0')+(ch2[k]-'0');
        if(hold>9)
              int p=hold/10;
            int b=hold%10;
            res[c++]=b+'0';
            ch1[i+1]==ch[i+1]+(p+'0');
              k--;
        }
        else
        {
            res[c++]=hold+'0';
            k--;

        }
        else
        {
            if(d==0)
            {
               int L=p+(ch1[i]-'0');
               if(L>9)
               {


               }

            }

        }


    }

}
