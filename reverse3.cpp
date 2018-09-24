#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[]="I am a boy boy";
    char sub[]="boy";
    int count=0;
    for(int i=0;i<strlen(arr)-strlen(sub)+1;i++)
    {
        int k=i;
        char ch[strlen(sub)];
        int j;
        for(j=0;j<strlen(sub);j++)
           {
               ch[j]=arr[k++];

           }
           ch[j]='\0';
        //printf("%s\n",ch);
        if(!strcmp(ch,sub))
           count++;

    }
    printf("%d\n",count);

    return 0;
}
