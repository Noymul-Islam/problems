#include<stdio.h>
#include<string.h>
int main()
{

    int a,b;

    while(scanf("%d",&a)==1)
    {


        for(b=1;b<=a;b++)
        {


            char ch[200],ch1[200],ch2[400],c;

            int m,n,i=0,j=0,s,d,k=0,p=0,z;
           // c=getchar();

            scanf("%s %s %s",ch,ch1,ch2);


            n=strlen(ch);
            m=strlen(ch1);
            s=strlen(ch2);
            char ch4[n],ch5[m];

            if((m+n)!=s)
                  printf("Data set %d: no\n",b);


         else
            {
                for(i;i<s;)



                {
                      printf("y");// ei loop ta ghurtase//


                    for(j;j<n;)
                    {

                        if(ch2[i]==ch[j])
                        {
                            ch4[k]=ch2[i];

                            k++;
                            j++;
                            i++;

                        }
                        else if(ch2[i]!=ch[j])
                        {
                            i++;
                            break;


                        }


                    }


                }


         j=0;
         i=0;

                    for(i;i<s;)
                        {


                            for(j;j<m;)
                            {

                                if(ch2[i]==ch1[j])
                                {

                                    ch5[p]=ch2[i];
                                    p++;
                                    i++;
                                    j++;


                                }
                                else
                                {

                                    i++;
                                    break;


                                }

                            }
                        }



  ch4[k]=='\0';
  ch5[p]=='\0';


      d=strcmp(ch,ch4);
       z=strcmp(ch1,ch5);

       if((d==0)&&(z==0))
                printf("Data set %d: yes\n",b);

                else
                 printf("Data set %d: no\n",b);


            }

        }


    }

    return 0;
}

