#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int ar[1000];
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        int p=0,num;
        char line[1000];
     gets( line );  {
        stringstream ss( line ); // initialize kortesi
        //int num; vector< int > v;
        while( ss >> num ) ar[p++]=num; // :P
        //sort( v.begin(), v.end() );
        // print routine
    }
    //for(int i=0;i<p;i++)
      //    cout<<ar[i];


        //for(int i=0;i<n;i++)
          //    scanf("%d",&ar[i]);
              int tot=-1;
        for(int i=0;i<p-1;i++)
        {
            for(int j=i+1;j<p;j++)
            {
               int sum=__gcd(ar[i],ar[j]);
                 if(sum>tot)
                 {
                     tot=sum;
                 }
            }
        }
        printf("%d\n",tot);
    }
    return 0;
}
