#include<stdio.h>
#include<string.h>

int main()
{

    int a,b;

    while(scanf("%d",&a)==1)
    {




        for(b=1;b<=a;b++)
        {



            char ch[10];

            int a,b,i,j,m,n,d;

            scanf("%d-%s-%d",&d,&ch,&m);

            if((m%400==0)||((m%4==0)&&(m%100!=0)))
            {
                if((ch=="JAN"))
                {
                    printf(" Case %d :  %d HUNDRED\n",b,d);



                }
                else if(ch=="FEB")
                {
                    printf("Case %d : %d HUNDRED\n",b,d+31);




                }
                else if(ch=="MAR")
                {
                    printf("Case %d: %d HUNDRED\n",b,d+60);


                }
                else if(ch=="APR")
                {


                    printf("Case %d: %d HUNDRED\n",b,d+91);

                }
                else if(ch=="MAY")

        {

            printf("Case %d: %d HUNDRED\n",b,d+121);



        }

            else if(ch=="JUN")
            {

                printf("Case %d: %d HUNDRED\n",b,d+152);
            }
            else if(ch=="JUL")
            {


                printf("Case %d: %d HUNDRED\n",b,d+182);

            }
            else if(ch=="AUG")
            {

                printf("%Case %d: %d HUNDRED\n",b,d+213);



            }
            else if(ch=="SEP")
            {

                printf("Case %d: %d HUNDRED\n",b,d+244);
            }

            else if(ch=="OCT")

            {
                if(d<=26)

                printf("Case %d: %d HUNDRED\n",b,d+274);

                else if(d>26)

                    printf("Case %d: %d TEN\n",b,(d+300)-326);

            }
            else if(ch=="NOV")
            {

                printf("Case %d:%d TEN\n",b,(d+14));

            }
            else if(ch=="DEC")
            {
                if(d<26)

                printf("Case %d: %d TEN\n",b,(d+44));
                else if (d>=26)
  printf("Case %d: %d ONE\n",b,(31-d));
            }





            }



        }


    }



}
