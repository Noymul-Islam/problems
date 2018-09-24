#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
int team[160],problem[20];

struct data
{
    int teamno;
    char prob;
    char st[250];
    char verdict[200];
    int time;

} sub[5010];

bool comp(data p, data q)
{

    return p.time<q.time;
}

int main()
{
    int t,p,s;

    while(scanf("%d %d %d",&t,&p,&s)==3)
    {

        if(!t&&!p&&!s)
            break;
        memset(team,0,sizeof(team));
        memset(problem,0,sizeof(problem));
        int start=0,endf=0;
        string result1,result2;
        for(int i=0; i<s; i++)
        {
            scanf("%d %c %s %[^\n]",&sub[i].teamno,&sub[i].prob,sub[i].st,sub[i].verdict);
            int res=0;
            //printf("%d %c %s %s\n",sub[i].teamno,sub[i].prob,sub[i].st,sub[i].verdict);
            for(int k=0; k<strlen(sub[i].st); k++)
            {
                if(sub[i].st[k]>='0'&&sub[i].st[k]<='9')
                    res=res*10+(sub[i].st[k]-'0');

            }

            sub[i].time=res;
//printf("%d\n",sub[i].time);
        }
        sort(sub,sub+s,comp);
        for(int i=0; i<s; i++)
        {
           // printf("ok");
            if(start&&endf)
                continue;
            int found=0;
            //for(int j=0;j<strlen(sub[i].st);j++)
  //  printf("%s\n",sub[i].st);
            if(strcmp(sub[i].verdict,"Yes")==0)
                {
                    //printf("Ohhhoo\n");
                    found=1;}
            if(!found)
                continue;

            team[sub[i].teamno]++;
            problem[sub[i].prob-'A']++;
            int flag=1;
            for(int j=1; j<=t; j++)
            {
               // printf("oko %d %d\n",p,team[j]);
                if(team[j]>=p||team[j]<1)
                    flag=0;

            }
            for(int j=0; j<p; j++)
            {
                if(problem[j]>=t||problem[j]<1)
                    flag=0;

            }

            if(flag)
            {
                if(start==0)
                {
                    start=1;

                    result1=sub[i].st;
                }


            }
            else if(!flag){
                 if(start)
                {

                    endf=1;
                    result2=sub[i].st;
                }
            }
        }

        if(start&&endf)
            cout<<result1<<" "<<result2<<endl;
        else if(start&&!endf)
            cout<<result1<<" --:--:--"<<endl;
        else
            cout<<"--:--:-- "<<"--:--:--"<<endl;

    }

    return 0;
}
