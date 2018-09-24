#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    long long int b1B,b1G,b1C,b2B,b2G,b2C,b3B,b3G,b3C;
    while(scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&b1B,&b1G,&b1C,&b2B,&b2G,&b2C,&b3B,&b3G,&b3C)==9)
    {
        long long bcg,bgc,cbg,cgb,gbc,gcb;

           bcg=(b2B+b3B )+(b1C+b3C)+(b1G+b2G);
           bgc=(b2B+b3B)+(b1G+b3G)+(b1C+b2C);
           cbg=(b2C+b3C)+(b1B+b3B)+(b1G+b2G);
           cgb=(b2C+b3C)+(b1G+b3G)+(b1B+b2B);
           gbc=(b2G+b3G)+(b1B+b3B)+(b1C+b2C);
           gcb=(b2G+b3G)+(b1C+b3C)+(b1B+b2B);

           if(bcg<=bgc && bcg<=cbg && bcg<=cgb && bcg<=gbc && bcg<=gcb)
            printf("BCG %lld\n",bcg);

           else if(bgc<bcg && bgc<=cbg && bgc<=cgb && bgc<=gbc && bgc<=gcb)
            printf("BGC %lld\n",bgc);
            else if(cbg<bcg && cbg<bgc && cbg<=cgb && cbg<=gbc && cbg<=gcb)
                printf("CBG %lld\n",cbg);
            else if(cgb<bcg && cgb<bgc && cgb<cbg && cgb<=gbc && cgb<=gcb)
                printf("CGB %lld\n",cgb);
            else if(gbc<bcg && gbc<bgc && gbc<cbg && gbc<cgb && gbc<=gcb)
                 printf("GBC %lld\n",gbc);
            else if(gcb<bcg && gcb<bgc && gcb<cbg && gcb<cgb && gcb<gbc)
                 printf("GCB %lld\n",gcb);



    }

    return 0;
}
