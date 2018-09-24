#include<cstdio>
#include<cstring>
#include<stack>
using namespace std;

int main()
{
    int T;
    stack<char>S;
    scanf("%d",&T);
     getchar();
    while(T--)
    {

         int k=0;
        char ch[200];
        gets(ch);
        if(strlen(ch)==0)
             printf("Yes\n");
//             else if(strlen(ch)%2!=0)
//                  printf("No\n");
             else
             {
             for(int i=0;i<strlen(ch);i++)
             {
                 if(ch[i]=='('||ch[i]=='[')
                     S.push(ch[i]);
                   else if(ch[i]==')'&&!S.empty()&&S.top()=='(')
                              S.pop();
                   else if(ch[i]==']'&&!S.empty()&&S.top()=='[')
                      S.pop();
                   else
                    k++;

             }


             if(k==0&&S.empty())
                 printf("Yes\n");
             else
                 printf("No\n");
             }
             //printf("%d\n",S.size());
             while(!S.empty())
//             for(int i=0;i<S.size();i++)
               {
               //printf("%d\n",)
               S.pop();
               }
    }
    return 0;
}
