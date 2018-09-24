#include<cstdio>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>

using namespace std;
#define size 100000
char ch[size];

void seive()
{
    int i,j,m,n,root;
    memset(ch,'1',sizeof(ch));

    ch[0]='0';
    ch[1]='0';
    root=sqrt(size);
    for(i=2; i<=root; i++)
    {
        if(ch[i]=='1')
        {
            for(j=2; i*j<=size; j++)
                ch[j*i]='0';
        }

    }


}
int main()
{
    seive();

    int T,F;
    while(scanf("%d",&T)==1)
    {
        for(F=1; F<=T; F++)
        {

            int m,n,i,j,res[1500],s=0,z=0;
            memset(res,0,sizeof(res));
            char frek[5000],out[5000];

            scanf(" %[^\n]",frek);
            m=strlen(frek);
            printf("Case %d: ",F);


            for(i=0; i<m; i++)
            {
                if(frek[i]>='0'&&frek[i]<='9')
                {
                    int c= frek[i]-'0';
                    res[c]++;
                }

                else if(frek[i]>='A'&&frek[i]<='Z')
                {
                    int c= frek[i]-55;
                    res[c]++;
                }
                else if(frek[i]>='a'&&frek[i]<='z')
                {
                    int c=frek[i]-61;
                    res[c]++;
                }

            }
            for(i=0; i<m; i++)
            {
                if(frek[i]!='*')
                {

                    if(frek[i]>='0'&&frek[i]<='9')
                    {
                        int c = frek[i]-'0';
                        int k=res[c];
                        if(ch[k]=='1')
                        {
                            s++;

                            out[z]=frek[i];
                            z++;
                        }
                    }
                    else if(frek[i]>='A'&&frek[i]<='Z')
                    {
                        int c= frek[i]-55;
                        int k=res[c];
                        if(ch[k]=='1')

                        {
                            s++;

                              out[z]=frek[i];
                              z++;
                        }
                    }
                    else if(frek[i]>='a'&&frek[i]<='z')
                    {
                        int c= frek[i]-61;
                        int k=res[c];
                        if(ch[k]=='1')
                        {
                            s++;

                            out[z]=frek[i];
                              z++;

                        }
                    }
                    for(j=i+1; j<m; j++)
                    {
                        if(frek[i]==frek[j])
                            frek[j]='*';
                    }
                    frek[i]='*';


                }


            }
            if(s!=0)

            {
                     out[z]='\0';
                int Q= strlen(out);
                sort(out,out+Q);

                for(i=0;i<Q;i++)

                         printf("%c",out[i]);

            }
            if(s==0)
                printf("empty");
            printf("\n");
        }
    }
    return 0;
}
