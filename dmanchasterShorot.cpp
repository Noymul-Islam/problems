#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

char signal[100];
char  figure[100][100];

int dmancestar(char signal[])
{
    int track=0;

    int len=strlen(signal);
    for(int i=0;i<len;i++)
    {

         if(signal[i]=='0')
         {
             for(int j=0;j<3;j++)
                 figure[1][track++]='-';
                 for(int j=0;j<4;j++)
                     figure[j][track]='|';
                    track++;
                 for(int j=4;j<8;j++)
                     figure[j][track++]='-';



         }

         else if(signal[i]=='1')

         {


         }

for(int i=0;i<10;i++)
         puts(figure[i]);
    }



}

int main()
{
    scanf("%s",signal);

    int row=dmancestar(signal);

    return 0;
}
