#include<cstring>
#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
    int cases;
    scanf("%d",&cases);
    for(int number=1; number<=cases; number++)
    {
        int n,m,value,head=0;
        char ch[200];
        scanf("%d %d",&n,&m);
        int que[n];
        getchar();
        printf("Case %d:\n",number);
        while(m--)
        {
            int index=0;
            value=0;
            scanf("%s",ch);
            if(!strcmp(ch,"pushLeft")||!strcmp(ch,"pushRight"))
               scanf("%d",&value);

            if(!strcmp(ch,"pushLeft"))
              {
                  if(head==n)
                     printf("The queue is full\n");
                  else
                  {
                      for(int j=head;j>0;j--)
                          {
                              que[j]=que[j-1];

                          }
                          que[0]=value;
                          head++;
                     printf("Pushed in left: %d\n",value);
                  }

               //for(int k=0;k<head;k++)
                 //printf("--> %d\n",que[k]);
              }
            else if(!strcmp(ch,"pushRight"))
            {
            if(head==n)
                     printf("The queue is full\n");
                  else
                  {
                     que[head++]=value;
                   printf("Pushed in right: %d\n",value);
                  }
             //for(int k=0;k<head;k++)
               //  printf("--> %d\n",que[k]);
            }

            else if(!strcmp(ch,"popRight"))
            {
                 //for(int k=0;k<head;k++)
                 //printf("--> %d\n",que[k]);
                if(head==0)
                 printf("The queue is empty\n");
                 else
                 {
                     value=que[--head];
                     //head--;
                    printf("Popped from right: %d\n",value);

                 }

            }
            else if(!strcmp(ch,"popLeft"))
            {
                //for(int k=0;k<head;k++)
                 //printf("--> %d\n",que[k]);

                if(head==0)
                printf("The queue is empty\n");
                else
                {
                 printf("Popped from left: %d\n",que[0]);

                for(int j=1;j<head;j++)
                {
                    que[j-1]=que[j];

                }

                head--;
                }
            }

        }
    }


    }
