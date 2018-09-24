#include<cstdio>
#include<cstring>
using namespace std;

int main()
{

    char ch[1000];
    while(gets(ch))
    {
        int len=strlen(ch);
       // printf("%d\n",len);
        int count=0,w=1;
        for(int i=0;i<len;i++)
        {
            if((ch[i]>='a'&&ch[i]<='z')||(ch[i]>='A'&&ch[i]<='Z'))
            {
                if(w)
                    count++;
                w=0;
            }
            else
                 w=1;
        }
        printf("%d\n",count);
    }
}
