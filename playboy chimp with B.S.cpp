#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
    long long int m,n,H,Q;
    int i,j;
    scanf("%lld",&H);

    long long int lady[H];

    for(i=0; i<H; i++)
        scanf("%lld",&lady[i]);
    scanf("%lld",&Q);
    long long int lucu[Q];
    for(i=0; i<Q; i++)
        scanf("%lld",&lucu[i]);

    for(i=0; i<Q; i++)
    {

        long long int top=11111111111, bottom=0,beg,end,mid;

        beg=0;
        end=H-1;
        mid=(beg+end)/2;
        while(beg<=end)
        {
            if(lady[mid]<lucu[i])
            {
                if(lady[mid]>bottom)
                {
                    bottom=lady[mid];
                }
                beg=mid+1;
                mid=(beg+end)/2;

            }
            else if(lady[mid]>lucu[i])
            {
                if(lady[mid]<top)
                    top=lady[mid];
                end=mid-1;
                mid=(beg+end)/2;
            }

            else
            {
                int k,z;
                k=mid;
                z=mid;
                while(k!=0)
                {
                    if(lady[--k]<lucu[i])
                    {
                        bottom=lady[k];
                        break;

                    }


                }
                while(z!=H-1)
                {
                    if(lady[++z]>lucu[i])
                    {
                        top=lady[z];
                        break;
                    }

                }

                break;
            }
        }
        if(bottom!=0&&top!=11111111111)
            printf("%lld %lld\n",bottom,top);
        else if(bottom==0&&top!=11111111111)
            printf("X %lld\n",top);
        else if(bottom!=0&&top==11111111111)
            printf("%lld X\n",bottom);
        else
            printf("X X\n");
    }
    return 0;
}
