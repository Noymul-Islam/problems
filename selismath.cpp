#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,x1[100],x2[100],y1[100],y2[100],mx1=-100000000,my1=-100000000,mx2=100000000,my2=100000000,area=0;
    while(scanf("%d",&n)==1)
    {
        for(int i=0;i<n;i++)
        {

            scanf("%d %d %d %d",&x1[i],&y1[i],&x2[i],&y2[i]);

        }
        for(int i=0;i<n;i++)
        {
            mx1=max(mx1,x1[i]);
            my1=max(my1,y1[i]);
            mx2=min(mx2,x2[i]);
            my2=min(my2,y2[i]);

        }

        if(!(mx1>mx2 &&my1>my2))
            area=abs(mx2-mx1)*abs(my2-my1);

        printf("%d\n",area);
    }

    return 0;
}
