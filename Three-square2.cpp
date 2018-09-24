#include<cstdio>
#include<cmath>
using namespace std;
#define size 50005
 int number[65000][3];
 void square()
 {
     //int c=0;
     int root=sqrt(size);
     for(int i=0;i<=root;i++)
     {
         int _i=i*i;
        // printf("%d\n",_i);
         for(int j=i;j<=root;j++)
         {
             int _j=j*j;
//printf("%d\n",_j);
             for(int k=j;k<=root;k++)
              {
                  int _k=k*k;
                  //printf("%d\n",_k);
                  int sum=_i+_j+_k;




                  if(sum>50000)
                  {


                     // c++;
                      break;
                      }



               if(number[sum][0]==0&& number[sum][1]==0&&number[sum][2]==0)

                {number[sum][0]=i;
                  number[sum][1]=j;
                  number[sum][2]=k;
                  }


              }
          //    if(c>0)
             //    break;

            }

//if(c>0)
     // break;
     }


 }
 int main()

 {

  //freopen("cat.txt","w",stdout);
     square();
     int t;
     scanf("%d",&t);
     while(t--)
     {
         int n;
         scanf("%d",&n);
       //  for(int n=0;n<=50000;n++)



         if(n%8==7||((number[n][0]==0&&number[n][1]==0&&number[n][2]==0)&&n!=0))
             printf("-1\n");
         else
         {
             printf("%d %d %d\n",number[n][0],number[n][1],number[n][2]);

         }


     }

     return 0;
 }
