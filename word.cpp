#include<bits/stdc++.h>

using namespace std;

/*void reverse(char ch[])
{
    stack<string>st;
    string str="";
    for (int i=0; i<strlen(ch); i++)
    {
        if(ch[i]!=' ')
            str+=ch[i];
        else if(ch[i]==' '|| i==strlen(ch)-1)
        {
            st.push(str);
            str="";
        }

    }
    while(!st.empty())
    {
        string s= st.top();
        st.pop();
        if(str=="")
        {
            str+=s;

        }
        else
        {
            str=str+' '+s;

        }

    }
    cout<<str<<endl;
}*/
void duplicate(int arr[],int size)
{
    map<int,int>mp;
    set<int>s;
    for(int i=0; i<size; i++)
    {
        if(mp.find(arr[i])==mp.end())
        {
            mp[arr[i]]=1;

        }
        else
        {

            s.insert(arr[i]);
        }

    }
    for (set<int>::iterator it= s.begin(); it!=s.end(); it++)
        cout<<*it<<endl;

}
int main()
{
    int arr[]= {1,1,2,5,2,3};
    int size= sizeof(arr)/sizeof(arr[0]);
    duplicate(arr,size);
    return 0;
}
