#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    double ch[25][4];
    //memset(ch,0,sizeof(ch));

     int i=1;
     double cx,cy,rad;
     double lx,ly,rx,ry;
    while(1)
    {


char c[2];
        scanf("%s",c);
        if(c[0]=='*')
             break;
        if(c[0]=='c')
        {

          scanf("%lf %lf %lf",&ch[i][0],&ch[i][1],&ch[i][2]);
          ch[i][3]=-10000000.00;
             i++;

        }
        if(c[0]=='r')
        {

            scanf("%lf %lf %lf %lf",&ch[i][0],&ch[i][1],&ch[i][2],&ch[i][3]);
            i++;


        }


    }
    double x,y;
     int p=1;
    while(scanf("%lf %lf",&x,&y)==2)
    {
        int k=0;
        if(x==9999.9&&y==9999.9)
                 break;

        for(int j=1;j<i;j++)
        {
            if(ch[j][3]==-10000000.00)
            {
                double dest=sqrt(((ch[j][0]-x)*(ch[j][0]-x))+((ch[j][1]-y)*(ch[j][1]-y)));

                if(dest<ch[j][2])
                    {

                     printf("Point %d is contained in figure %d\n",p,j);
                     k++;}
            }
             else if(ch[j][3]!=-10000000)
            {
                if((x>ch[j][0]&&y<ch[j][1])&&(x<ch[j][2]&&y>ch[j][3]))
                {printf("Point %d is contained in figure %d\n",p,j);
                 k++;
                }
            }



        }
        if(k==0)
              printf("Point %d is not contained in any figure\n",p);
        p++;


    }
    return 0;

}
