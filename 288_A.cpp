#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<map>
#include<sstream>

using namespace std;

int main()
{


    int m,n,k;
    cin>>m>>n>>k;

    int ar[m][n];
    memset(ar,0,sizeof(ar));
    int  track[k][2];

    for(int i=0; i<k; i++)
    {
        int a,b;
        cin>>track[i][0]>>track[i][1];



    }
    int coun=0,num=0;
    int p=0;
    for(int i=0; i<k; i++)
    {
        coun=0;
        int  row=track[i][0]-1;
        int col=track[i][1]-1;
        ar[row][col]=1;
        num++;
        //ar[track[i][0]-1][track[i][1]-1]=1;
        //if(row>=0&&row<m&&)
        if(col+1<n&&ar[row][col+1]==1)
        {
            //if(coun==)
            coun++;

        }
        //if(col-1>=0&&ar[row][col-1]==1)
        //coun++;
        //if(row+1<m&&ar[row+1][col]==1)
        //coun++;
        if(row-1>=0&&ar[row-1][col]==1)
            coun++;
        if(col+1<n&&row-1>=0&&ar[row-1][col+1]==1)
            coun++;

        if(coun==3)
        {
            p++;
            break;
        }

        coun=0;
        if(row-1>=0&&ar[row-1][col]==1)
            coun++;
        if(col-1>=0&&ar[row][col-1]==1)
            coun++;
        if(col-1>=0&&row-1>=0&&ar[row-1][col-1]==1)
            coun++;
        //      if(col-1>=0&&ar[row][col-1])
        //          coun++;
        if(coun==3)
        {
            p++;
            break;
        }
  coun=0;
        if(col+1<n&&ar[row][col+1])
            coun++;
        if(row+1<m&&ar[row+1][col])
            coun++;
        if(row+1<m&&col+1<n&&ar[row+1][col+1])
            coun++;
        if(coun==3)
        {
            p++;
            break;
        }
        coun=0;
        if(col-1<n&&ar[row][col-1])
            coun++;
        if(row+1<m&&ar[row+1][col])
            coun++;

        if(row+1<m&&col-1<n&&ar[row+1][col-1])
            coun++;
        if(coun==3)
        {

            p++;
            break;
        }
        coun=0;

    }

    if(p)
        printf("%d\n",num);
    else
        printf("0\n");
    return 0;
}
