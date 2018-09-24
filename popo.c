#include<stdio.h>
#include<math.h>

int main()
{

    char ch[5][5];
    int i,j,m,n;
    for(i=0;ch[i]!='\n';i++)
        scanf("%s",&ch[i]);

    for(i=0;i<10;i++)
        printf("%c\n",ch[i]);

}
