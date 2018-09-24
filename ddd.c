#include<stdio.h>
int main()
{
    int a,b,i;

    while(scanf("%d",&a)==1)
    {
    for(i=1;i<=a;i++)
    {
        int  r,g,b,w,m,n,j,sum=0;

        scanf("%d %d %d %d",&r,&g,&b,&w);
        if((r==0&&g==0&&b==0&&w==0)||(r==0&g==0&b==0&&w<3)||((r==0||g==0||b==0)&&w==0))

            printf("Case %d: 0\n",b);

        else if(r>0&&g>0&&b>0)
        {
            while(r>0&&g>0&&b>0)
            {
                r=r-1;
                g=g-1;
                b=b-1;
                sum++;
            }

            if(w>0&&r>0&&g>0)
            {
               while(w>0&&r>0&&g>0)
               {
                   w=w-1;
                   r=r-1;
                   g=g-1;
                   sum++;
               }
            }
             if(w>0&&g>0&&b>0)
            {
                while(w>0&&g>0&&b>0)
                {
                    w=w-1;
                    g=g-1;
                    b=b-1;
                    sum++;
                }
            }
             if(w>0&&r>0&&b>0)
            {
                while(w>0&&r>0&&b>0)
                {
                    w=w-1;
                    r=r-1;
                    b=b-1;
                    sum++;
                }
            }

        }
        else if(r==0&&w>0&&g>0&&b>0)
        {

            while(w>0&&g>0&&b>0)
            {
                w=w-1;
                g=g-1;
                b=b-1;
                sum++;
            }

        }
        else if(r>0&&w>0&&g==0&&b>0)
        {
            while(r>0&&w>0&&b>0)
            {
                r=r-1;
                w=w-1;
                b=b-1;
                sum++;

            }
        }
       else if(r>0&&w>0&&g>0&&b==0)
        {
            while(r>0&&w>0&&g>0)
            {


            r=r-1;
            w=w-1;
            g=g-1;
            sum++;}
        }

       else if(r==0&&g==0&&w>=2&&b>0)
        {

            while(w>=2&&b>0)
            {
                w=w-2;
                b=b-1;
                sum++;
            }


        }
       else if(r==0&&b==0&&w>=2&&g>0)
        {
            while(w>=2&&g>0)
            {
                w=w-2;
                g=g-1;
                sum++;
            }
        }
       else if(g==0&&b==0&&r>0&&w>=2)
        {
            while(r>0&&w>=2)
            {
                r=r-1;
                w=w-1;
                sum++;
            }
        }
       else  if(r==0&&g==0&&b==0&&w>=3)
        {
            while(w>=3)
            {
                w=w-3;
                sum++;
            }
        }

         printf("Case %d: %d\n",i,sum);}

    }



return 0;


    }



