#include<cstdio>
#include<cstring>
#include<cstdlib>

using namespace std;
int main()
{

    char ch[1200];
    while(gets(ch))
    {
        int k=strlen(ch);
        for(int i=0;i<k;i++)
        {
            printf("%c",ch[i]-7);


        }
        printf("\n");


    }
    return 0;
}
