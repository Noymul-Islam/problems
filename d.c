#include<stdio.h>

int main()
{

    int a,b;

    while(scanf("%d",&a)==1)

    {



        for(b=1;b<=a;b++)
        {




            int r,g,b,w,i,j,m,n,sum=0,k=0;


            scanf("%d %d %d %d",&r,&g,&b,&w);
            if(r>0&&g>0&&b>0)
            {


            while(r>0&&g>0&&b>0)
            {
                r=r-1;
                g=g-1;
                b=b-1;

                sum++;


            }

            if(w>0)

            {
                while(w>0)


                {



                    if(r>0)
                    {

                        w=w-1;
                        r=r-1;
                        sum++;

                    }

                    if(g>0&&w>0)
                    {
                        w=w-1;
                        g=g-1;
                        sum++;
                    }
                    if(b>0&&w>0)
                    {
                        w=w-1;
                        b=b-1;
                        sum++;
                    }


                }




            }
            }

            else if(r>0&&g>0&&b==0&&w>0)
            {

                while(r>0&&g>0&&b==0&&w>0)
                {
                    r=r-1;
                    g=g-1;
                    w=w-1;
                    sum++;



                }
                while(r>0&&g==0&b>0&&w>0)
                {
                    r=r-1;
                    b=b-1;
                    w=w-1;
                    sum++;
                }

                while(r==0&&g>0&&b>0&&w>0)
                {
                    g=g-1;
                    b=b-1;
                    w=w-1;
                    sum++;


                }
            }

            else if(r==0&&g==0&&b==0&&w==0)
                {printf("Case %d: 0\n",b);
                k++;
                }
             else if(r==0&&g==0&&b==0&&w>0)
             {

                 while(w>=3)
                 {
                     sum++;
                 }

             }

             else if(r>0&&g==0&&)

                    if(k==0)
                        printf("Case %d: %d\n",b,sum);

        }
    }

}
