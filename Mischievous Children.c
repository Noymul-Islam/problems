#include<stdio.h>
#include<string.h>

int main()


{

    int a,b;

    while(scanf("%d",&a)==1)

    {

        for(b=1;b<=a;b++)


        {

            char ch[50],ch1[26],c='A';

           unsigned long long int j,p,arr[26],n=1,s;

             int i,k,m;

              for(i=0;i<26;i++)
              {


                  ch1[i]=c;
                  c++;

                  arr[i]=0;




              }



              scanf(" %[^\n]",ch);


              k=strlen(ch);

              for(i=0;i<k;i++)
              {

                  for(m=0;m<26;m++)

                  {

                      if(ch[i]==ch1[m])
                      {
                          arr[m]++;
                          break;

                      }

                      else

                          continue;



                  }




              }


              for(i=1;i<=k;i++)
              {

                  n=n*i;



              }
              for(i=0;i<26;i++)
              {

                  if(arr[i]>1)
                  {
                  s=arr[i];

                   for( ;s>=1;s--)


                    {n=n/s;

                  }

              }




        }


         printf("Data set %d: %llu\n",b,n);




    }



    }

    return 0;
}
