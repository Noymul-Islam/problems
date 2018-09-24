#include<stdio.h>
#include<string.h>

int main()
{


    int a,b;
    while(scanf("%d",&a)==1)
    {

        for(b=1;b<=a;b++)
        {
       int c,d=0,i,j,m,n,s=0,t=0;

       char ch[30], ch1[30];

       scanf("%s %s",ch,ch1);

       m=strlen(ch);
       n=strlen(ch1);
       if(m!=n)
                printf("No\n");


       else
       {

           for(i=0;i<m;i++)
           {
              if((ch1[i]=='a')||(ch1[i]=='e')||(ch1[i]=='i')||(ch1[i]=='o')||(ch1[i]=='u'))
              {

                  if((ch[i]=='a')||(ch[i]=='e')||(ch[i]=='i')||(ch[i]=='o')||(ch[i]=='u'))
                    {
                        s++;
                        continue;
                    }
                  else

{


                      printf("No\n");
                      d++;
                      break;
         }  }

           else
           {
               if(ch1[i]==ch[i])
               {
                   s++;
                   continue;

               }
               else
               {


                 printf("No\n");
                   break;}

           }
       }



          if(s==m)
             printf("Yes\n");

        }

       }
    }

    return 0;
}

