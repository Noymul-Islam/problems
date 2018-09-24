#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
       int num; vector< int > v;
int main()
{

    char line[1000];
    /*while*/( gets( line ) ); {
        stringstream ss( line ); // initialize kortesi

        while( ss >> num ) {v.push_back( num );
            printf("1");
        } // :P
        printf("%d\n",v[0]);
        //sort( v.begin(), v.end() );
        // print routine
    }
}
