#include<cstdio>
#include<cstring>
#include<algorithm>

 using namespace std;

 char ch[100005];
 long long int amount[26];
  bool comp(int p, int q)
  {

      return p>q;
  }
 int main()
 {
     long long int n,k;
     scanf("%I64d %I64d",&n,&k);
     getchar();
      gets(ch);

      //sort(ch,ch+n);
      for(int i=0;i<n;i++)
       {
           //while(ch[i]==ch[i+1])
               int p=ch[i]-65;

              amount[p]++;

       }
       sort(amount,amount+26,comp);
        long long int res=0,sum=0;
         int i=0;
        while(k!=0)
        {
            if(amount[i]>=k)
            {
                sum=sum+k;
                 amount[i]=amount[i]-k;
                res=res+sum*sum;
                  k=0;
                 sum=0;
            }
            else
            {
                sum=sum+(amount[i]);
                 res=res+(sum*sum);

                sum=0;
                 k=k-amount[i];
                 i++;
            }


        }
        printf("%I64d\n",res);
     return 0;
 }
