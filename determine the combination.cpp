#include<cstdio>
#include<cstring>
#include<vector>

using namespace std;
char ch[500];
int taken[500];
vector<char>v;
char ch2[500][500],ch1[500];
int p;
void call();
int n,m,s;
int main()
{
    while(scanf("%s %d",ch,&n)==2)
    {

        memset(taken,0,sizeof(taken));
        m=strlen(ch);
        p=0;
        s=0;
        call();

        v.clear();


    }
    return 0;
}

void call()
{

    if(v.size()==n)
    {
        for(int i=0;i<v.size();i++)
        ch1[i]=v[i];

        if(p==0)
        {
            strcpy(ch2[p++],ch1);

            for(int i=0; i<n; i++)
            {

                printf("%c",v[i]);
            }
            printf("\n");
            return;

        }

        else
        {

            for(int i=0; i<p; i++)
            {
                if(strcmp(ch2[i],ch1)==0)
                {

                    int k=strlen(ch2[i]);

                    for(int j=0; j<k; j++)
                    {
                        if(ch1[j]!=ch2[i][j])
                        {

                            strcpy(ch2[p++],ch1);
                            for(int i=0; i<n; i++)
                            {

                                printf("%c",v[i]);
                            }

                            printf("\n");
                            return ;



                        }
                        if(j==k-1)
                        {

                            s=1;
                        }
                    }
                    if(s==1)
                        break;

                }
                else
                {

                    strcpy(ch2[p++],ch1);
                    for(int i=0; i<n; i++)
                    {

                        printf("%c",v[i]);
                    }
                    printf("\n");
                    return ;
                }
            }

        }

    }

    for(int i=0; i<m; i++)
    {

        if(taken[i]==0)
        {

            taken[i]=1;

            v.push_back(ch[i]);
            call();

            taken[i]=0;
            v.pop_back();

        }
    }

}
