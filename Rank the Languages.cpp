#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;
void dfs(int i, int j);
char ch[2500][2500],c;
 int color [2500][2500],h,w;

  struct number
  {
     char letter;
      int num;


  }a[26];

  int comp(const number &p, const number &q)
  {
      if(p.num==q.num)
       return p.letter<q.letter;
       else
       return p.num>q.num;


  }

  int main()
  {
      int cases=1;
      int d;
      scanf("%d",&d);
      for(int m=0;m<d;m++)
     {


      scanf("%d %d",&h,&w);
      {
          memset(color,0,sizeof(color));
          char p='a';

          for(int i=0;i<26;i++)
            {a[i].letter=p++;
               a[i].num=0;
            }
          for(int i=0;i<h;i++)
            scanf(" %[^\n]",ch[i]);

            for(int i=0;i<h;i++)
            {
                for(int j=0;j<w;j++)
                {
                    if(color[i][j]==0)
                    {
                         c=ch[i][j];
                        int k= ch[i][j]-97;
                        a[k].num++;

                        dfs(i,j);

                    }


                }

            }
            sort(a,a+26,comp);
            printf("World #%d\n",cases++);

            for(int i=0; i<26;i++)
            {
                if(a[i].num==0)
                  break;

        else
           printf("%c: %d\n",a[i].letter,a[i].num);

            }


      }
     }
      return 0;
  }
 void dfs(int i, int j)
 {

     if(i<0||j<0||i>=h||j>=w)
       return ;

       if(ch[i][j]==c)
       {
           if(color[i][j]==0)
           {
               color[i][j]=1;

               dfs(i,j+1);
                dfs(i,j-1);
                dfs(i-1,j);
                dfs(i+1,j);
                return;
           }

       }

 }
