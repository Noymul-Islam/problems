#include<bits/stdc++.h>

using namespace std;
stack<string>st;
string reverse(char ch[])
{
    string str="";
    int k=0;
    //printf("%s",ch);
    for(int i=0;i<strlen(ch);i++)
    {
        if(ch[i]!=' ')
           str+=ch[i];
        if(ch[i]==' ' || i==strlen(ch)-1)
           {
               st.push(str);
               str="";
           }

    }
    while(!st.empty())
    {
        string s= st.top();
        if(!k)
        {
            str=s;
            k=1;
        }
        else{
          str+=' '+s;
        }
        st.pop();


    }
    return str;

}
int main()
{
    char ch[100];
    gets(ch);
    //getchar();
    string ans=reverse(ch);
    cout<<ans<<endl;
}
