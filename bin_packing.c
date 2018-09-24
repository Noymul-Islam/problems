#include<stdio.h>

 long long int bcg (int b1B,int b1G,int b1C,int b2B, int b2G,int b2C, int b3B, int b3G,int b3C)
{
     long long int b1;
    b1=(b2B+b3B )+(b1C+b3C)+(b1G+b2G);
return b1;

}
long long int bgc (int b1B,int b1G,int b1C,int b2B, int b2G,int b2C, int b3B, int b3G,int b3C)
{
     long long int b2;
    b2=(b2B+b3B)+(b1G+b3G)+(b1C+b2C);

return b2;
}
 long long int cbg (int b1B,int b1G,int b1C,int b2B, int b2G,int b2C, int b3B, int b3G,int b3C)
{
     long long int b3;
    b3=(b2C+b3C)+(b1B+b3B)+(b1G+b2G);
  return b3;
}
 long long int cgb (int b1B,int b1G,int b1C,int b2B, int b2G,int b2C, int b3B, int b3G,int b3C)
{
     long long int b4;
    b4=(b2C+b3C)+(b1G+b3G)+(b1B+b2B);
      return b4;
}
 long long int gbc (int b1B,int b1G,int b1C,int b2B, int b2G,int b2C, int b3B, int b3G,int b3C)
{
     long long int b5;
    b5=(b2G+b3G)+(b1B+b3B)+(b1C+b2C);
    return b5;
}
  long long int gcb (int b1B,int b1G,int b1C,int b2B, int b2G,int b2C, int b3B, int b3G,int b3C)
{
     long long int b6;
    b6=(b2G+b3G)+(b1C+b3C)+(b1B+b2B);
    return b6;

}
int main()
{
   long long int i,b1B,b1G,b1C,b2B,b2G,b2C,b3B,b3G,b3C;




  while( scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld",&b1B,&b1G,&b1C,&b2B,&b2G,&b2C,&b3B,&b3G,&b3C)==6)
   {




       long long int a1,a2,a3,a4,a5,a6;
       a1= bcg(b1B,b1G,b1C,b2B,b2G,b2C, b3B,b3G,b3C);
       a2= bgc(b1B,b1G,b1C,b2B,b2G, b2C,b3B, b3G,b3C);
       a3=cbg (b1B,b1G, b1C,b2B,b2G,b2C,b3B, b3G, b3C);
       a4=cgb (b1B,b1G,b1C,b2B,b2G,b2C,b3B,b3G,b3C);
       a5 =gbc (b1B,b1G,b1C,b2B,b2G,b2C,b3B,b3G,b3C);
        a6= gcb (b1B,b1G,b1C,b2B,b2G,b2C,b3B,b3G,b3C);

        if(a1<=a2&&a1<=a3&&a1<=a4&&a1<=a5&&a1<=a6)
             printf("BCG %lld\n",a1);
        else if((a2<a1&&a2<=a3&&a2<=a4&&a2<=a5&&a2<=a6))
             printf("BGC %lld\n",a2);
        else if(a3<a1&&a3<a2&&a3<=a4&&a3<=a5&&a3<=a6)
             printf("CBG %lld\n",a3);
        else if(a4<a1&&a4<a2&&a4<a5&&a4<=a5&&a4<=a6)
             printf("CGB %lld\n",a4);
        else if(a5<a4&&a5<a3&&a5<a2&&a5<a1&&a5<=a6)
              printf("GBC %lld\n",a5);
        else if(a6<a5&&a6<a4&&a6<a3&&a6<a2&&a6<a1)
             printf("GCB %lld\n",a6);
   }

return 0;
}
