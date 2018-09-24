#include<iostream>
using namespace std;
int main()
{
    bool getresult;
    int x,y,z;
    x=5,y=10,z=15;
    getresult=x>y;
    cout<<"result of getresult=x>y:"<<getresult<<endl;
    getresult=y<z;
    cout<<"result of getresult=y<z:"<<getresult<<endl;
    getresult=x+z-y;
    cout<<"result of getresult=x+z-y:"<<getresult<<endl;
    x=x+z-y;

    cout<<"result of x=x+z-y:"<<x<<endl;

    getresult=true;
    cout<<"result of get result=true:"<<getresult<<endl;

    getresult=false;

    cout<<"result of getresult=false:"<<getresult<<endl;





}
