#include<cstdio>
#include<iostream>

using namespace std;

int ar[12];

bool datefirst(int date1 ,int month1, int date2 , int month2);
bool monthfirst(int month1,int date1,int month2, int date2);

int main()
{
    ar[0]=31;
ar[1]=28;
ar[2]=31;
ar[3]=30;
ar[4]=31;
ar[5]=30;
ar[6]=31;
ar[7]=31;
ar[8]=30;
ar[9]=31;
ar[10]=30;
ar[11]=31;
    int t,cs=1;
    scanf("%d",&t);
    while(t--)
    {

        int d1,m1,d2,m2;
        scanf("%d %d %d %d",&d1,&m1,&d2,&m2);
        //if((d1<=d2&&m1<m2)&&())

        bool res1=datefirst(d1,m1,d2,m2);
        bool res2=monthfirst(d1,m1,d2,m2);

        if(res1==1&&res2==1)
             printf("Case %d: Oh no it is ambiguous!\n",cs++);
             else if((res1==0&&res2==1)||(res1==1&&res2==0))
                 printf("Case %d: Okay got it!\n",cs++);
             else
                 printf("Case %d: I am sure there is some kinda mistake!\n",cs++);

    }

    return 0;
}


bool datefirst(int date1 ,int month1, int date2 , int month2)
{

    if((month1<=12&&month2<=12)&&(date1<=ar[month1-1]&&date2<=ar[month2-1]))
    {
       if((month1>month2)||((month1==month2)&&(date1>=date2)))
          {
           //   printf("AApps\n");

              return 0;}
       else
         {

             return 1;
         }

    }
    return 0;
}

bool monthfirst(int month1,int date1,int month2, int date2)
{    if((month1<=12&&month2<=12)&&(date1<=ar[month1-1]&&date2<=ar[month2-1]))
   {
       if((month1>month2)||((month1==month2)&&(date1>=date2)))
          {
              return 0;}
       else
         {
             return 1;
         }


   }
   return 0 ;

}
