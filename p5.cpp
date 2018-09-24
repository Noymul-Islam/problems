#include<cstring>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<cstdio>
#include<string>


  using namespace std;

  int main()
  {
      int t,cs=1;
       scanf("%d",&t);

       while(t--)
       {
   stack<int>st[10000];


             int n,q;

             //cin>>n>>q;
               scanf("%d %d",&n,&q);
             printf("Case %d:\n",cs++);
             //printf("yes");
             // getchar();
           //st[0].push(10);

           //printf("%d\n",st[0].top());
  while(q--)
  {
     // printf("yes");

      char ch[50];
      int start,el;

      scanf("%s",ch);

      if(strcmp(ch,"push")==0)
      {
          //cin>>start>>el;
           scanf("%d %d",&start,&el);
          st[start-1].push(el);


      }
      if(strcmp(ch,"top")==0)
      {
          //cin>>start;
          scanf("%d",&start);
         // printf("no");
          if(st[start-1].empty())
            printf("Empty!\n");
          else
        printf("%d\n",st[start-1].top());


      }
      if(strcmp(ch,"put")==0)
      {
          //cin>>start>>el;
           scanf("%d %d",&start,&el);
          stack<int>s;
          while(!st[el-1].empty())
          {
              int take=st[el-1].top();
              s.push(take);
              st[el-1].pop();
          }

          while(!s.empty())
          {


              int take=s.top();
                s.pop();

                st[start-1].push(take);


          }


      }
       if(strcmp(ch,"pop")==0)
       {
        cin>>start;
        if(!st[start-1].empty())
        {
            st[start-1].pop();


        }


       }
        //  printf("")


  }

  //for(int i=0;i<n;i++)
      // st[i].pop();

       }

      return 0;


  }
