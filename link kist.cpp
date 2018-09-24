#include<cstdio>
#include<stdlib.h>

using namespace std;

struct data
{
    int num;
      data *p;
};
void inser(int a);

void traverse(data* k);

data* start;
 data* finish;
int main()
{
    start=NULL;
    finish=NULL;
    inser(1);
    inser(2);
    inser(3);
    traverse(start);

    return 0;
}

void inser(int a)
{

    data *st=(data*)malloc(sizeof(data));

    st->num=a;
    st->p=NULL;
    if(start==finish &&start==NULL)
    {
        start=finish=st;

    }
    finish->p=st;
    finish=st;
    return ;
}

void traverse(data* k)
{


    if(k->p!=NULL)
    {
        printf("%d",k->num);
        traverse(k->p);
    }
    return ;
}
