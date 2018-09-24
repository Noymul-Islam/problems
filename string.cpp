#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{


    string a,b,c;

    a="this is a string ";
    b=a;
    c=a+b;
    cout<<c<<endl;

    printf("%s\n",c.c_str());
    cout<<c.nsize()<<endl;
    return 0;
}
