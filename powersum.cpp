#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int x,n,start=1,flag[100],count,sum=0,root, lastInsert=-1;
int power(int i, int n){
    int mul=1;
    //printf("value: %d %d\n",i,n);
    for(int j=1;j<=n;j++)
        mul=mul*i;
    return mul;
}
void calculateTotal(int val){
    if(sum==x){
       count++;
       return;
    }
    else if(sum>x)
       return;
    for(int i=val;i<=root;i++){
        sum=sum+ power(i,n);

           calculateTotal(i+1);
           sum=sum-power(i,n);



    }
}
int powerSum(){
     root= sqrt(x);
     for(int i=0;i<=root;i++)
         flag[i]=0;
      calculateTotal(1);
      return count;
}
int main()
{
    cin>>x>>n;

    printf("%d\n",powerSum());

    return 0;
}
