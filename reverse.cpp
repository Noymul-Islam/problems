#include<bits/stdc++.h>
using namespace std;
char *reverse(char ch[])
{
    int size = strlen(ch);
    char *ch1;
    ch1= (char *)malloc(size);
    int index=0;
    for (int i=size-1;i>=0;i--)
    {
        ch1[index++]=ch[i];
    }
    ch1[index]='\0';
    return (char*)ch1;

}
int main()
{
    char ch[100];
    scanf("%s",ch);
    char *receive;
    receive=reverse(ch);
    printf("%s",receive);

    return 0;
}
