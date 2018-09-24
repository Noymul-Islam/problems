#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[100];
    map<string,int>mp;
    set<string>st;
    string s="";
    gets(ch);
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]!=' ')
          s+=ch[i];
        if(ch[i]==' '||ch[i+1]=='\0')
        {
            if(s[0]=='T')
            {if(mp.find(s)==mp.end())
            {
                mp[s]=1;
                st.insert(s);
            }
            else
               mp[s]+=1;
           }
           s="";
        }

    }
    //printf("%d\n",st.size());
    for(set<string>::iterator it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" "<<mp[*it]<<endl;

    }

    return 0;
}
