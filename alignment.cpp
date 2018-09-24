#include<bits/stdc++.h>

using namespace std;
queue<string>q,q2;
int main()
{
    char ch[100000];
    gets(ch);
    string str="";
    for(int i=0; i<strlen(ch); i++)
    {
        if(ch[i]!=' ')
            str=str+ch[i];
        else if(ch[i]==' ')
        {
            q.push(str);
            str="";
            str=str+ch[i];
            q.push(str);
            str="";

        }
        if(i==strlen(ch)-1)
        {
            q.push(str);
            str="";
        }

    }
    // printf("%d\n",q.size());
    str="";
    while(!q.empty())
    {
        string st= q.front();
        q.pop();
        //cout<<st<<endl;
        //cout<<str.size()+st.size()<<endl;
        if(str.size()+st.size()<=16)
        {

            str+=st;
            st="";
            //cout<<str;
        }
        // cout<<str.size()+st.size()<<endl;
        if((str.size()+st.size()>16))
        {
            // printf("Hello");
            q2.push(str);
            str="";
            str=st;
        }
        if((q.empty()))
        {
            if(st=="")
                q2.push(str);
            else
                q2.push(st);
        }



    }
    //printf("%d\n",q2.size());
    while(!q2.empty())
    {
        //printf("Hello");
        string st= q2.front();
        //cout<<st<<"Size: "<<st.size()<<endl;
        int space;
        if(st[0]==' ')
            space=16-st.size()-1;
        else if(st[st.size()-1]==' ')
            space=16-st.size()+1;
        else
            space=16-st.size();

        for(int i=0; i<space; i++)
            printf(" ");
        cout<<st<<endl;
        q2.pop();
    }

    return 0;
}
