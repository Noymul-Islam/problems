#include<cstdio>
#include<cstring>

using namespace std;

main()
{
    char buf1[80], buf2[80];
    size_t loc;

    printf("enter the first string to search\n");
       gets(buf1);
       printf("Enter the string containing target charecters\n");
         gets(buf2);
         loc=strcspn(buf1,buf2);
         if(loc== (strlen(buf1)))

             printf("no matvh found\n");

         else

            printf("the first match found at position %d\n",loc);


}
