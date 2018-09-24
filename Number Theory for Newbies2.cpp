#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

 char ch[12];
 int main()
{
    while(gets(ch))
    {

        char accending[12],deccending[12];
         int k;
        strcpy(accending,ch);
        //strcpy(deccending,ch);
         k=strlen(ch);

        sort(accending,accending+k);
        if(accending[0]=='0')
      {
          for(int i=1;i<k;i++)
          {
              if(accending[i]!='0')
              {
                  char p=accending[i];
                  accending[i]=accending[0];
                  accending[0]=p;

              }
          }

      }
        for(long long int i=0;i<k-1;i++)
        {
          for(long long int j=i+1;j<k;j++)
          {
              if(ch[i]<ch[j])
              {
                  char c;
                  c=ch[i];
                  ch[i]=ch[j];
                  ch[j]=c;

              }

          }

        }
        //puts(accending);
        //puts(deccending);
        long long int num=0,num1=0;

        for( int i=0;i<k;i++)
        {
            num=(num*10)+(accending[i]-'0');
             num1=(num1*10)+(ch[i]-'0');
        }
        //printf("%lld %lld\n",num,num1);
        long long int res=num1-num;
        long long int div=res/9;

        printf("%lld - %lld = %lld = 9 * %lld\n",num1,num,res,div);



    }

    return 0;
}
