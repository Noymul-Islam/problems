#include<iostream>
using namespace std;
void change(int&val)
{


    val=15;
}
int main()
{


    int i=10;
    cout<<"BEfore calling the cahngevalue():i="<<i<<endl;

    change(i);
    cout<<"After vcalling the valu():i="<<i<<endl;
}
