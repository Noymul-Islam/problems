#include<iostream>
using namespace std;

int main()
{
    int i;

    int&ref_i=i;

    ref_i=10;
    cout<<i<<endl;
    i=15;

    cout<<ref_i<<endl;



}
