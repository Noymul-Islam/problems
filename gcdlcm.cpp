#include<cstdio>
#include<cmath>
#include<cstring>

using namespace std;
int main()
{
 int T,follow;
  while(scanf("%d",&T)==1)
  {
      for( follow=0;follow<T;follow++)
      {
          int G,L;
          scanf("%d %d",&G,&L);
          if(L%G==0)

             printf("%d %d\n",G,L);

          else
              printf("-1\n");


      }



  }
return 0;
}
