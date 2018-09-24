#include<cstdio>
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<sstream>
#include<queue>
#include<stack>

using namespace std;
void coverl(int a, int b,int l);
void coverr(int a, int b, int l);
void coveru(int a, int b, int l);
void coverd(int a, int b, int l);
  int r,c;
  int taken[500][500];
  int x[]={0,0,-1,1};
int y[]={1,-1,0,0};
int dist[500][500];
 int ar[100][3];
 int g;

int bfs(int sti,int stj,int eni, int enj);
int main()
{

   while(scanf("%d %d",&r,&c)==2)
   {

       if(r==0&&c==0)
          break;

       memset(taken,0,sizeof(taken));
        memset(dist,-1,sizeof(dist));
       int point;
       cin>>point;
       while(point--)
       {
           int a,b;
           cin>>a>>b;
           taken[a-1][b-1]=1;


       }
              cin>>g;
       //while(g--)
       for(int i=0;i<g;i++)
       {
           int a,b,l;
           cin>>a>>b>>l;
           ar[i][0]=a-1;
           ar[i][1]=b-1;
           ar[i][2]=l;

           /*coverd(a-1,b-1,l);
           coverl(a-1,b-1,l);
           coverr(a-1,b-1,l);
           coveru(a-1,b-1,l);*/


       }
       for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
          for(int k=0;k<g;k++)
       {

           double res=sqrt(((i-ar[k][0])*(i-ar[k][0]))+((j-ar[k][1])*(j-ar[k][1])));
           int tot=ceil(res);
           if(tot<=ar[k][2])
           {
               taken[i][j]=1;
               break;
           }


       }
       int res=bfs(0,0,r-1,c-1 );
       if(res==-1)
         printf("Impossible.\n");
       else
        printf("%d\n",res);

   }
    return 0;
}
int bfs(int sti,int stj,int eni, int enj)
{

 //    while(!Q.empty())
    queue<int>Q;
     //  Q.pop();

       taken[sti][stj]=1;
        dist[sti][stj]=0;

        Q.push(sti);
        Q.push(stj);
       while(!Q.empty())
      {

       int nx=Q.front();
       Q.pop();
      int  ny=Q.front();
       Q.pop();
       for(int i=0;i<4;i++)
       {int ix=nx+x[i];
       int iy=ny+y[i];
       int pl=0;
       //printf("-->%d\n",g);
     /*for(int k=0;k<g;k++)
     {
         double tot=sqrt(((ix-ar[k][0])*(ix-ar[k][0]))+((iy-ar[k][1])*(iy-ar[k][1])));
         //cout<<tot<<endl;
         int far=ceil(tot);
         //printf("%d-- %d\n",far,ar[k][2]);
         if(far<=ar[k][2])
         {
             //printf("fdf");
             pl++;
             break;
         }




     }*/
     /*if(pl)
          {//printf("%d\n",pl);
              continue;}*/
  //printf("%d %d %d %d\n",ix,iy,r,c);
       if(ix>=0&&iy>=0&&ix<r&&iy<c)
       {
        //   printf("--->d\n");
           if(!taken[ix][iy])
           {
               Q.push(ix);
               Q.push(iy);
               taken[ix][iy]=1;
               dist[ix][iy]=dist[nx][ny]+1;

                 //printf("--->\n");
               if(ix==eni && iy==enj)
                 return dist[ix][iy];
           }
       }

       }

      }
  //printf("%d\n",dist[eni][enj]);
      return dist[eni][enj];

 }



/*void coverl(int a, int b,int l)
{
     int num=-1;
    for(int i=b;i>=0;i--)
    {
        num++;
        taken[a][i]=1;
        if(num==l)
                break;

    }


}
void coverr(int a, int b, int l)
{
    int num=-1;
    for(int i=b;i<c;i++)
    {
        num++;
        taken[a][i]=1;
        if(num==l)
               break;

    }


}
void coveru(int a, int b, int l)
{
    int num=-1;

    for(int i=a;i>=0;i--)
    {
        num++;
        taken[i][b]=1;
        if(num==l)
               break;

    }


}
void coverd(int a, int b, int l)
{
    int num=-1;

    for(int i=a;i<r;i++)
    {
        num++;
        taken[i][b]=1;
        if(num==l)
               break;

    }


}*/
