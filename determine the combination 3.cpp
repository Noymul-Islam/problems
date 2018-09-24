#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>

using namespace std;
char ch[5000];
int taken[5000];
vector<char>v;

        char ch2[5000][5000],ch1[5000];
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
        int num=0,num1=0;
        call();
         sort(ch2,ch2+p);
        v.clear();


    }
    return 0;
}

void call()
{

    if(v.size()==n)
    {
        for(int i=0;i<v.size();i++)
        {ch1[i]=v[i];
        num=num+ch[i];
        }
        if(p==0)
        {
            strcpy(ch2[p++],ch1);

            //for(int i=0; i<n; i++)
            //{

              //  printf("%c",ch1[i]);
            //}
            //printf("\n");
            //return;

        }

        else
        {

            for(int i=0; i<p; i++)
            {
                int k=strlen(ch2[i]);
                for(int i=0;i<k;i++)

                if(strcmp(ch2[i],ch1)==0)
                {
                    return;

                   /* int k=strlen(ch2[i]);

                    for(int j=0; j<k; j++)
                    {
                        if(ch1[j]!=ch2[i][j])
                        {

                            strcpy(ch2[p++],ch1);
                            for(int i=0; i<n; i++)
                            {

                                printf("%c",ch1[i]);
                            }

                            printf("\n");
                            return ;



                        }
                        if(j==k-1)
                        return;
                        //{

                            //s=1;
                        //}
                    }*/
                    //if(s==1)
                    //    break;

                }
                else if(i==p-1)
                {

                    strcpy(ch2[p++],ch1);
                    //for(int i=0; i<n; i++)
                    //{

//                        printf("%c",ch1[i]);
  //                  }
    //                printf("\n");
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

