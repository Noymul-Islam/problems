#include<cstring>
#include<cstdio>
#include<iostream>

using namespace std;


char  arr[3][10]= {{'q','w','e','r','t','y','u','i','o','p'},
    {'a','s','d','f','g','h','j','k','l',';'},
    {'z','x','c','v','b','n','m',',','.','/'}
};


int main()

{
    char ch1[5];
    gets(ch1);
    char ch[1000];
    gets(ch);
    int n=strlen(ch);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<10; k++)
            {
                if(ch[i]==arr[j][k])
                {
                    if(ch1[0]=='R')
                        printf("%c",arr[j][k-1]);
                    else
                        printf("%c",arr[j][k+1]);


                }


            }


        }


    }
    printf("\n");

    return 0;
}
