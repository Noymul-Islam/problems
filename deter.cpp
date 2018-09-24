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
        sort(ch,ch+m);

        call();
        v.clear();


    }
    return 0;
}

void call()
{



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


