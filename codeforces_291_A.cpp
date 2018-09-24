#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
#include<set>
#include<map>
#include<stack>

using namespace std;
/* If this code works, than it is my code.Otherwise I dont know who the hell wrote it!!!*/
int main()
{
    char ch[100];
    gets(ch);
    //scanf("%s",ch);
    int len=strlen(ch);
    for(int i=0;i<len;i++)
    {

        int a=ch[i]-'0';
        //cout<<a;
        int b=9-a;
        if(b==0&&i==0)
              continue;
        if(b<a)
        {
            char c=b+'0';
            ch[i]=c;

        }

    }
    cout<<ch<<endl;


return 0;

}
