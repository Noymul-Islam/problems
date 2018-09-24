#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;

struct point
{
    int x,y;
};
bool do_intersect( point p1, point q1,point p2, point q2);
int orient(point p,point q,point r);
bool onesegment(point p, point q , point r);

int main()
{
     point p1,q1,p2,q2;
     scanf("%d %d %d %d",&p1.x,&p1.y,&q1.x,&q1.y);
     scanf("%d %d %d %d",&p2.x,&p2.y,&q2.x,&q2.y);
     if(do_intersect(p1,q1,p2,q2))
          printf("YES\n");
      else
         printf("NO\n");
    return 0;
}

bool do_intersect(point p1, point q1, point p2, point q2)
{

    int o1=orient(p1,q1,p2);
    int o2=orient(p1,q1,q2);
    int o3=orient(p2,q2,p1);
    int o4=orient(p2,q2,q1);
     if (o1 != o2 && o3 != o4)
        return true;
            if (o1 == 0 && onesegment(p1, p2, q1)) return true;

    // p1, q1 and q2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onesegment(p1, q2, q1)) return true;

    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onesegment(p2, p1, q2)) return true;

     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onesegment(p2, q1, q2)) return true;

    return false; // Doesn't fall in any of the above cases

}
int orient(point p, point q, point r)
{
    int val=((p.x-q.x)*(r.y-q.y))-((r.x-q.x)*(p.y-q.y));
    if(val==0)
         return 0;
    return val>0? 1: 2;


}
bool onesegment(point p , point r, point q)
{

if (r.x <= max(p.x, q.x) && r.x >= min(p.x, q.x) &&
        r.y <= max(p.y, q.y) && r.y >= min(p.y, q.y))
       return true;

    return false;
}

