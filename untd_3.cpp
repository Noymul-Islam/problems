#include<iostream>
using namespace std;
int ADDxy(int x,int y)
{
    return x+y;
}
float ADDxy(float x, float y)
{

    return x+y;
}
double ADDxy(double x, double y)
{

    return x+y;
}

int main()
{

    cout<<"integer x+y="<<ADDxy(5,5)<<endl;

    cout<<"float x+y="<<ADDxy(5.754,5.223)<<endl;
    cout<<"Double x+y="<<ADDxy(90.39349872,5.9398749)<<endl;

}






