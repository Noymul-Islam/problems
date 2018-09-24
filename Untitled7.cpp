#include<iostream>
using namespace std;

void changevalue(int *val)
{

    *val=15;
}

int main()
{
    int i=10;
    cout<<"BEFOR calling changevalue():i="<<i<<endl;
    changevalue(&i);
    cout<<"After calling changevalue():i="<<i<<endl;N


}
