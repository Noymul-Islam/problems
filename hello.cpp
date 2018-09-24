#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    int b1B,b1G,b1C,b2B,b2G,b2C,b3B,b3G,b3C;
    while(scanf("%d %d %d %d %d %d %d %d %d",&b1B,&b1G,&b1C,&b2B,&b2G,&b2C,&b3B,&b3G,&b3C)==9)
    {
        int bcg,bgc,cbg,cgb,gbc,gcb;

           bcg=(b2B+b3B )+(b1C+b3C)+(b1G+b2G);
           bgc=(b2B+b3B)+(b1G+b3G)+(b1C+b2C);n
           cbg=(b2C+b3C)+(b1B+b3B)+(b1G+b2G);
           cgb=(b2C+b3C)+(b1G+b3G)+(b1B+b2B);
           gbc=(b2G+b3G)+(b1B+b3B)+(b1C+b2C);
           gcb=(b2G+b3G)+(b1C+b3C)+(b1B+b2B);

           if(bcg<=bgc && bcg<=cbg && bcg<=cgb && bcg<=gbc && bcg<=gcb)
            printf("BCG %d\n",bcg);

           else if(bgc<bcg && bgc<=cbg && bgc<=cgb && bgc<=gbc && bgc<=gcb)
            printf("BGC %d\n",bgc);
            else if(cbg<bcg && cbg<bgc && cbg<=cgb && cbg<=gbc && cbg<=gcb)
                printf("CBG %d\n",cbg);
            else if(cgb<bcg && cbg<bgc && cgb<cbg && cgb<=gbc && cgb<=gcb)
                printf("CGB %d\n",cgb);
            else if(gbc<bcg && gbc<bgc && gbc<cbg && gbc<cgb && gbc<=gcb)
                 printf("GBC %d\n",gbc);
            else if(gcb<bcg && gcb<bgc && gcb<cbg && gcb<cbg && gcb<gbc)
                 printf("GCB %d\n",gcb);



    }

    return 0;
}

