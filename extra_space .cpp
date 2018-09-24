#include<cstdio>
#include<cstring>
#include<cmath>

int main()
{

    int cases,follow,cs=1;
    scanf("%d",&cases);



        for(follow=1;follow<=cases;follow++)
        {
            int n,a,i,j,m,b,c,k;

           scanf("%d",&n);
            getchar();

            char ch[n][1000], ch1[n][1000];

            for(i=0;i<n;i++)
               gets(ch[i]);



             for(i=0;i<n;i++)
             {
                  k=0;
                 ch1[i][k]=ch[i][0];
                 for(j=1;ch[i][j]!='\0';j++)
                 {
                     if((ch1[i][k]==' ')&&(ch[i][j]==ch1[i][k]))
                         continue;
                         else
                       {
                            k++;
                           ch1[i][k]=ch[i][j];


                       }

                 }
                 ch1[i][++k]='\0';


             }

           printf("Case %d:\n",follow);
             for(i=0;i<n;i++)
             {
                 for(j=0;ch1[i][j]!='\0';j++)
                    printf("%c",ch1[i][j]);
             printf("\n");
             }

     if(follow!=cases)
          printf("\n");


        }

    return 0;
}
