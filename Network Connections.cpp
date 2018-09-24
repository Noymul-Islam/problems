#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
void Union(int a, int b);
int find(int r);
int parent[100000];

int main()
{
    int t;
    scanf("%d",&t);
     getchar();
     getchar();
     for(int follow=1;follow<=t;follow++)
     {
         int number,suc=0,unsuc=0;
         scanf("%d",&number);
              getchar();
         for(int i=1;i<=number;i++)
              parent[i]=i;
char ch[100];
             while(gets(ch))
                 {

                 //scanf("%[^\n]",ch);
                     if(strlen(ch)==0)
                        break;
                     char c; int u ,v;
                 sscanf(ch,"%c %d %d",&c,&u,&v);


                 if(c=='c')
                 {


                     Union(u,v);

                 }
                 else if(c=='q')
                 {

                   int x=find(u);
                   int y=find(v);
                   if(x==y)
                          suc++;
                      else
                          unsuc++;

                 }

             }

      printf("%d,%d\n",suc,unsuc);
      if(follow!=t)
              printf("\n");

     }
    return 0;
}

void Union(int a, int b)
{
    if(find(a)!=find(b))
    {
        parent[find(b)]=find(a);


    }

}
int find(int r)
{
    if(parent[r]==r)
          return r;

    else

        return parent[r]=find(parent[r]);

}
