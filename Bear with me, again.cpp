#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>

using namespace std;

double n,a,m;

double ar[110][110],fx,fy,fr,dx,dy,dr;

int main()
{
    while(scanf("%lf %lf",&a,&m)==2)
    {
        int p=(int)a * (int)m;
        double dest=(double)p;
        //cout<<dest;
        cin>>fx>>fy>>fr;
        cin>>dx>>dy>>dr;

        cin>>n;
        int z=(int )n;
        double co[z+3][4];
        for(int i=1;i<=z+2;i++)
            for(int j=1;j<=z+2;j++)
        {

            ar[i][j]=10000000;
            ar[j][i]=10000000;
            if(i==j)
                 ar[i][j]=0;
        }
        co[1][1]=fx;co[1][2]=fy;co[1][3]=fr;
        co[2][1]=dx;co[2][2]=dy;co[2][3]=dr;
        for(int i=3;i<=z+2;i++)
        {
            double u,v,r;
            cin>>u>>v>>r;

            co[i][1]=u;co[i][2]=v;co[i][3]=r;
        }
        for(int i=1;i<z+2;i++)
            for(int j=i+1;j<=z+2;j++)
        {
            double dist=sqrtf(((co[i][1]-co[j][1])*(co[i][1]-co[j][1]))+((co[i][2]-co[j][2])*(co[i][2]-co[j][2])));
               dist=dist-(co[i][3]+co[j][3]);
              // cout<<dist;
            if(dist<=dest)
            {
                ar[i][j]=dist;
                ar[j][i]=dist;

            }
        }
        //cout<<ar[1][2]<<endl;
        for(int k=1;k<=z+2;k++)
        {

            for(int i=1;i<=z+2;i++)
                for(int j=1;j<=z+2;j++)
            {
                if(ar[i][j]>ar[i][k]+ar[k][j])
                {
                    ar[i][j]=ar[i][k]+ar[k][j];
                }

            }
        }
       // printf("%lf\n",ar[1][2]);
        if(ar[1][2]==10000000)
            printf("Larry and Ryan will be eaten to death.\n");
        else
            printf("Larry and Ryan will escape!\n");

    }
    return 0;
}
