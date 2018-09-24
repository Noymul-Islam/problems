#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;

long long int input;
int main()
{


while(scanf("%lld",&input)==1)

{
    char ch[12],accending[12];
      int k=0,mod;
      while(input!=0)
      {
         mod=input%10;
          ch[k++]=(mod+'0');
          input=input/10;


      }
      ch[k]='\0';
      //for(int i=0;i<k;i++)
        //printf("%c",ch[i]);
      strcpy(accending,ch);

      sort(accending,accending+k);
      //for(int i=0;i<k;i++)
     // printf("a%d\n",accending[i]);
      if(accending[0]=='0')
      {
          for(int i=1;i<k;i++)
          {
              if(accending[i]!='0')
              {
                  char p=accending[i];
                  accending[i]=accending[0];
                  accending[0]=p;
                  break;

              }
          }

      }
      for(int i=0;i<k-1;i++)
      for(int j=i+1;j<k;j++)
      {
          if(ch[i]<ch[j])
         {
             char c;

             c=ch[i];
             ch[i]=ch[j];
             ch[j]=c;

         }


      }
      //puts(accending);
      long long int num=0,num1=0;

        for( int i=0;i<k;i++)
        {
            num=(num*10)+(accending[i]-'0');
             num1=(num1*10)+(ch[i]-'0');
        }
         long long int res=num1-num;
        long long int div=res/9;

        printf("%lld - %lld = %lld = 9 * %lld\n",num1,num,res,div);



}
return 0;
}
