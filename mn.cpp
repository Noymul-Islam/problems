#include<cstdio>
#include<cstring>

using namespace std;
char f[70000000];
 //char factorial[100000];
  void fac()
  {
      int k;
       strcpy(f,"1");
       for(k=2;k<=1000000;k++)
       {
           int cin,sum,i;
            int len=strlen(f);
             cin=0;
              i=0;
              while(i<len)
              {
                  sum=cin+ (f[i]-'0')*k;
                  f[i]=(sum%10)+'0';
                   i++;
                     cin=sum/10;

              }
              while(cin>0)
              {
                  f[i++]=(cin%10)+ '0';
                   cin=cin/10;

              }
              f[i]='\0';
       }

  }


  int main()
  {

      freopen ("myfile.txt","w",stdout);
        int n;
       // printf("ok");
         fac();
         //printf("ok");
         for(int i=strlen(f)-1;i>=0;i--)
             printf("%c",f[i]);
     return 0;
  }
