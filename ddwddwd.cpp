#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    char ch1[100],ch2[100],ch3[100];
    scanf("%s %s",ch1,ch2);

    strcpy(ch3,ch1);
    strcpy(ch1,ch2);
    strcpy(ch2,ch3);
    printf("%s %s",ch1,ch2);


}
