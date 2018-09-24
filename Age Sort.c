#include<stdio.h>
#include<stdlib.h>

int comp(const void *i, const void *j);

int main()
{
    int a;

    while(scanf("%d",&a)==1)

    {
  if(a==0)
    break;
  char ch=' ';

        int arr[a],i,j;

        for(i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);

        }

        qsort(arr,a,sizeof(int),comp);

        for(i=0;i<a;i++)
        {


            printf("%d",arr[i]);

            if(i<a-1)
                 printf("%c",ch);
        }


        printf("\n");



    }
    return 0;

}



int comp(const void *i, const void *j)

{


    return *(int*)i-*(int*)j;

}
