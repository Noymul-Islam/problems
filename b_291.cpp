#include<cstdio>
#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<cstring>
#include<algorithm>
#include<set>
#include<map>
#include<stack>

using namespace std;
/* If this code works, than it is my code.Otherwise I dont know who the hell wrote it!!!*/

int main()
{
    double x1,y1;
     int n;
    set<double>s;
    //cin>>n>>x1>>y1;
    scanf("%d %lf %lf",&n,&x1,&y1);
    //double ar[n][2];
    for(int i=0;i<n;i++)
    {
       double x2,y2;
       cin>>x2>>y2;
        if(x1-x2==0)
            s.insert(1000000);
        else if(y1-y2==0)
              s.insert(-1000000);
        else
       {double D=((y1-y2))/((x1-x2));
       s.insert(D);}


    }

    printf("%d\n",s.size());

}
