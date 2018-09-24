#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<stack>

using namespace std;

int main()
{
    stack<int>st;
    st.push(100);
    st.push(101);
    st.push(102);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();


    }
    return 0;
}
