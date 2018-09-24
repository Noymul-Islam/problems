#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>

using namespace std;

int ar[100000];
struct point
{
    double x,y;
} p[100000][2];
int n;
vector<int>v;
//bool intersect(point p1, point q1, point p2, point q2);
//int orient(point p, point q, point r);
//bool onesegment(point p, point r, point q);
bool onesegment(point p, point q, point r);
double orient(point p, point q, point r);
bool intersect(point p1, point q1, point p2, point q2);
int main()
{
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;

        for(int i=0; i<n; i++)
            ar[i]=0;
        for(int i=0; i<n; i++)
        {
            cin>>p[i][0].x>>p[i][0].y>>p[i][1].x>>p[i][1].y;

        }
        if(n==1)
        {
            printf("Top sticks: 1.\n");
            continue;
        }
        int coun =0;
        for(int i=n-1; i>=1; i--)
        {
            if(ar[i]==0)
            {
                int k=0;
                for(int j=i-1; j>=0; j--)
                {

                    if(intersect(p[i][0],p[i][1],p[j][0],p[j][1]))
                    {
                        //printf("Yes");
                        coun++;
                        k++;
                        v.push_back(i);
                        ar[j]=1;
                        break;

                    }
                    if(k)
                        break;
                    if(coun==1000)
                        break;
                    if(j==0)
                        v.push_back(i);
                }

                //if(coun==1000)
                    //break;

            }
            if(ar[0]==0&&i==1)
                v.push_back(0);

        }
        reverse(v.begin(),v.end());
        printf("Top sticks: ");
        for(int i=0; i<v.size(); i++)
        {
            if(i==0)
                printf("%d",v[i]+1);
            else
                printf(", %d",v[i]+1);
        }
        printf(".\n");
        v.clear();



    }
    return 0;
}

bool intersect(point p1, point q1 , point p2, point q2)
{
    double o1=orient(p1,q1,p2);
    double o2=orient(p1,q1,q2);
    double o3=orient(p2,q2,p1);
     double o4= orient(p2,q2,q1);

    if(o1!=o2&&o3!=o4)
             return true;

    if(o1==0&&onesegment(p1,p2,q1))
           return true;
     if(o2==0&&onesegment(p1,q2,q1))
           return true;
     if(o3==0 && onesegment(p2,p1,q2))
          return true ;
     if(o4==0&& onesegment(p2,q1,q2))
           return true ;
       return false;
  }

  double  orient( point p, point q , point r)
  {
      double val=((p.x-q.x)*(r.y-q.y))-((r.x-q.x)*(p.y-q.y));
      if(val==0)
           return 0;
       return val>0?1:2;

  }
  bool onesegment(point p, point r, point q)
  {
      if((r.x<=max(p.x,q.x)&&r.x>=min(p.x,q.x))&&(r.y<=max(p.y,q.y)&&r.y>=min(p.y,q.y)))
            return true;
               else
                  return false ;


  }


/*bool onsegment(point p, point q, point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
            q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return true;

    return false;
}
int orient(point p, point q, point r)
{
    // See 10th slides from following link for derivation of the formula
    // http://www.dcs.gla.ac.uk/~pat/52233/slides/Geometry1x1.pdf
    int val = (q.y - p.y) * (r.x - q.x) -
              (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;  // colinear

    return (val > 0)? 1: 2; // clock or counterclock wise
}
bool intersect(point p1, point q1, point p2, point q2)
{
    // Find the four orients needed for general and
    // special cases
    int o1 = orient(p1, q1, p2);
    int o2 = orient(p1, q1, q2);
    int o3 = orient(p2, q2, p1);
    int o4 = orient(p2, q2, q1);

    // General case
    if (o1 != o2 && o3 != o4)
        return true;

    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onsegment(p1, p2, q1)) return true;

    // p1, q1 and q2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onsegment(p1, q2, q1)) return true;

    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onsegment(p2, p1, q2)) return true;

    // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onsegment(p2, q1, q2)) return true;

    return false; // Doesn't fall in any of the above cases
}*/
