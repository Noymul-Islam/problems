#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
    char ch[10000000];

int main()
{


    while(gets(ch))
    {

        int n= strlen(ch);
          int k=0;
        for(int i=0;ch[i]!='\0';i++)
        {
            if(ch[i]!=' ')
            {
                k++;

            }
            if(k==0)
               printf("%c",ch[i]);
        else if(ch[i]==' '||ch[i+1]=='\0')
        {
            int j=i-1;
            if(ch[i+1]=='\0')
            {
                j=i;
            }
            while(ch[j]!=' ')
            {
                printf("%c",ch[j]);
                j--;
                if(j<0)
                  break;


            }
            if(ch[i]==' ')
            printf("%c",ch[i]);


        }



        }

        printf("\n");
    }
    return 0;
}
