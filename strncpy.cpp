#include<cstdio>
#include<cstring>

char dest[]="..............";
char source[]= "abcdefghijklmnopqrstuvwxyz";
main()
{


    size_t n;
    while(1)
    {


        puts("enter the number of charecters to coppy\n");

        scanf("%d",&n);
        if(n>0)
             break;


    }
printf("\n before strncpy destination = %s",dest);
strncpy(dest,source,n);
printf("After strncpy destination = %s\n",dest);
}
