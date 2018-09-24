#include<bits/stdc++.h>
#include<cmath>
using namespace std;
struct data{
  int prop,sum,max;
};
data tree[80000000];
void init(data tree[], int node, int b, int e){
   if(b==e){
     tree[node].sum=0;
     tree[node].prop=0;
     tree[node].max=0;
     return;

   }
   int left = node*2;
   int right = node*2+1;
   int mid = (b+e)/2;
   init(tree,left,b,mid);
   init(tree,right,mid+1,e);
   tree[node].sum=0;
   tree[node].prop=0;
   tree[node].max=0;
}
void update(data tree[],int node, int b, int e, int i, int j, int x){
    if(i>e || j <b ){
        return;
    }
    if(b>=i && e<=j){
      tree[node].sum+= ((e-b+1)*x);
      tree[node].prop+= x;
      tree[node].max+=x;
      return;
    }
    //printf("dddsf\n");
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    update(tree,left,b,mid,i,j,x);
    update(tree,right,mid+1,e,i,j,x);
    tree[node].sum= tree[left].sum + tree[right].sum+ (e-b+1)*tree[node].prop;
    tree[node].max= max(tree[left].max , tree[right].max)+ tree[node].prop;

}
//void init()
int main(){
    int n,m,r1,r2,k;
    cin>>n>>m;

    init(tree,1,1,n);
    for(int i=0;i<m;i++){
     cin>>r1>>r2>>k;
     update(tree,1,1,n,r1,r2,k);
    }
    cout<<tree[1].max<<endl;
    return 0;


}
