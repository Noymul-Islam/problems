#include<iostream>
#include<vector>
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
}
