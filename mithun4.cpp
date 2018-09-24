#include<cstdio>
#include<iostream>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
    int i,j;
    char str[100];
    vector<string>data[4];
    for(i = 0; i < 4; ++i)
    {
        while(scanf(" %s",str) == 1)
        {
            if(strcmp(str,"#") == 0)
                break;
            data[i].push_back(str);
        }
    }
    for(i = 0; i < 4; ++i)
        sort(data[i].begin(),data[i].end());
    for(i = 0; i < 4; ++i)
    {
        cout << endl;
        for(j = 0; j < data[i].size(); ++j)
            cout << data[i][j] << " " ;
    }
    return 0;

}
