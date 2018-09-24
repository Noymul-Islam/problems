#include<iostream>
#include<cstdio>
#include<

using namespace std;

int main()
{
    int r;
    cin>>r;
    int space=;
    for(int i=1;i<=r;i++)
    {
        for(int i=1;i<=space;i++)
        {
            printf(" ");
        }
        space--;
        for(int j=1;j<=r;j++)
        {
            printf("*");
            //printf(" ");


        }
        printf("\n");




    }

    return 0;
}
