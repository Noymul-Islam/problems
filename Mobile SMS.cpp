#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

char ch[10][4];


int main()
{
    ch[0][0]=' ';
ch[1][0]='.';
ch[1][1]=',';
ch[1][2]='?';
ch[1][3]='"';
ch[2][0]='a';
ch[2][1]='b';
ch[2][2]='c';
ch[3][0]='d';
ch[3][1]='e';
ch[3][2]='f';
ch[4][0]='g';
ch[4][1]='h';
ch[4][2]='i';
ch[5][0]='j';
ch[5][1]='k';
ch[5][2]='l';
ch[6][0]='m';
ch[6][1]='n';
ch[6][2]='o';
ch[7][0]='p';
ch[7][1]='q';
ch[7][2]='r';
ch[7][3]='s';
ch[8][0]='t';
ch[8][1]='u';
ch[8][2]='v';
ch[9][0]='w';
ch[9][1]='x';
ch[9][2]='y';
ch[9][3]='z';
    int t;
    cin>>t;
    while(t--)
    {

        int l;
        cin>>l;
        int ar[l];
        int num[l];
        for(int i=0;i<l;i++)
             cin>>ar[i];
        for(int i=0;i<l;i++)
              cin>>num[i];
        for(int i=0;i<l;i++)
        {


            printf("%c",ch[ar[i]][num[i]-1]);

        }
        printf("\n");

    }
    return 0;
}
