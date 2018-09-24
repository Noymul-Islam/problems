#include<cstdio>
#include<iostream>
using namespace std;

int main(){
int points, Lamount=0,Ramount=0,x,y;
cin>>points;
while(points--){
  cin>>x>>y;
  if(x<0)
      Lamount++;
      else
      Ramount++;
}
if((Lamount==0|| Lamount==1)||(Ramount==0||Ramount==1))
    printf("YES\n");
    else
    printf("NO\n");

return 0;}
