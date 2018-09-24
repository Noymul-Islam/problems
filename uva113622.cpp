#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
 char ch[10005][100];
struct node
{
    bool mark;
    node *next[10];
    node()
    {
        mark=false;
        for(int i=0; i<10; i++)
        {
            mark=false;
            next[i]=NULL;


        }
    }
}*root;
void insert(char str[],int len)
{
    node *cur=root;
    for(int i=0; i<len; i++)
    {
        int id=str[i]-'0';
        if(cur->next[id]==NULL)
            cur->next[id]= new node();
        cur=cur->next[id];

    }
    cur->mark=true;

}
bool search(char str[],int len)
{
    node *cur=root;
    // int i;
    for( int i=0; i<len; i++)
    {
        int id=str[i]-'0';
        //printf("%d===\n",i);
        cur=cur->next[id];
        if(cur->mark&&i<len-1)
        {

            return false;
        }

    }


    return true;
}
void del(node *cur)
{
    for(int i=0; i<10; i++)
        if(cur->next[i])
            del(cur->next[i]);
    delete(cur);
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;

        int q;
        scanf("%d",&q);
        root=new node();
        for(int i=0; i<q; i++)
        {

            scanf("%s",ch[i]);
            insert(ch[i],strlen(ch[i]));

        }
        for(int i=0; i<q; i++)
        {
            bool res=search(ch[i],strlen(ch[i]));
            if(!res)
            {
                printf("NO\n");
                count=1;
                break;
            }

        }

        if(!count)
            printf("YES\n");

        del(root);

    }

    return 0;
}
