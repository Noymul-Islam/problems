#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int T,p,s,team[160],problem[20],flag;
char line[150];

int main()
{
    while(scanf("%d %d %d",&T,&p,&s)==3)
    {
        if(!T && !p && !s)
            break;

        string sr="",en="",stt="";

        memset(team,0,sizeof(team));
        memset(problem,0,sizeof(problem));

        getchar();

        for(int i=0; i<s; i++)
        {
            gets(line);

            if(sr!="" && en!="")
                continue;
            int found=0;
            stt=line;
            int h=0;
            for(int k=0; k<strlen(line); k++)
            {
                if(line[k]=='Y')
                {
                    found=1;
                    break;
                }
            }
            if(!found)
                continue;

            if(found)
            {
                int r=0;
                for(h=0;line[h]!=' ';h++)
                    r=r*10+(line[h]-'0');
                team[r]++;
                problem[line[h+1]-'A']++;


            flag=1;

            for(int j=1; j<=T && flag; j++)
            {
                if(team[j]>=p || team[j]<1)
                    flag=0;
            }

            for(int j=0; j<p && flag; j++)
            {
                if(problem[j]<1 || problem[j]>=T)
                    flag=0;
            }}


            if(flag && sr=="")
                sr=stt.substr(h+3,8);
            if(!flag && sr!="")
            {
                en=stt.substr(h+3,8);
            }

        }

        if(sr!="" && en!="")
            cout<<sr<<" "<<en;
        else if(sr!="" && en=="")
            cout<<sr<<" --:--:--";
        else
            printf("--:--:-- --:--:--");

        printf("\n");

    }
    return 0;
}
/*02:20:00 03:10:00
02:20:00 --:--:--
--:--:-- --:--:--*/
