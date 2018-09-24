#include<iostream>
#include<vector>
using namespace  std;

int main()
{

    vector< int >array,t;

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);

    t=array;

    for(int i=0; i<t.size();i++)
           cout<<t[i]<<endl;

    return 0;





}
