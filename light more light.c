#include<stdio.h>
#include<math.h>

 int main()
{
    int a;

    while(scanf("%d",&a)==1)
    {
        if(a==0)
             break;
        int b,c,d=0;

    b=sqrt(a);
    for (c=2;c<(b+1);c++ ){
        if(a%c==0) {

         printf("yes\n");
                    d++;
                    break;
                }
     }
     if(d==0)
        printf("no\n");


    }
    return 0;
}

