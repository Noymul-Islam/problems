#include<iostream>
using namespace std;
void swap_value(int &x,int &y)
{


    int  temp;

    temp=x;
    x=y;
    y=temp;


}

int main()

{
    int p,q;

    p=7;
    q=5;
    swap_value(p,q);



    return 0;


}
