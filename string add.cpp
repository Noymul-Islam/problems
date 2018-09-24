#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    char ch1[100],ch2[100];

    while(scanf("%s %s",ch1,ch2)==2)
    {
        char main[200],inter[200];

        int n,m,i,j,k=0,x,y,z,w=0,p;


        n=strlen(ch1);
        m=strlen(ch2);
        if(m>n)
   {
       strcpy(inter,ch2);
        strcpy(ch2,ch1);
         strcpy(ch1,inter);
        m^=n^=m^=n;


   }

        j=m-1;
        for(i=n-1;i>=0;)
        {
            for(;j>=0;j--)
            {
              x=ch1[i]-'0';
              y=ch2[j]-'0';
              z=(x+y+w)%10;
              w=(x+y+w)/10;

                main[k]=z+'0';
                  i--;
                    k++;

            }
            if(i>=0)
            {


            x=ch1[i]-'0';
            z=(x+w)%10;
              w=(x+w)/10;
             main[k]=z+'0';
              k++;
               i--;

            }
        }
        if(w!=0)
               main[k++]=w+'0';
         main[k]='\0';
          strrev(main);

            puts(main);





    }

    return 0;
}
