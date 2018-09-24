#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    //freopen("inMe.txt","r",stdin);
   // freopen("outMe.txt","w",stdout);



    int n,m,c;
    int testCase = 1;
    while(scanf("%d %d %d",&n,&m,&c)==3 && !(n==0 && m==0 && c==0)){
    bool state[n+1];
    int consumption[n+1];
    for(int i=1;i<=n;i++)state[i] = false;
    for(int i=1;i<=n;i++)cin>>consumption[i];
    int max = 0;
    int runningPower = 0;
    for(int i=1;i<=m;i++){
     int temp; cin>>temp;
     if(state[temp]==false){
      state[temp] = true;
      runningPower += consumption[temp];
      if(runningPower > max )max = runningPower;
     }
     else if(state[temp]==true){
      state[temp] = false;
      runningPower -= consumption[temp];
     }

    }
    printf("Sequence %d\n",testCase++);
    if(max > c)printf("Fuse was blown.\n\n");
    else {
     printf("Fuse was not blown.\n");
     printf("Maximal power consumption was %d amperes.\n\n",max);
    }
    }
    return 0;
}
