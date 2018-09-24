#include<cstdio>
#include<cstring>
#include<cmath>
#include<iostream>
#include<list>

using namespace std;
struct node{
 bool mark;
 node *next[26+1];
 node(){
    mark=false;
    for(int i=0;i<26;i++)
            next[i]=NULL;
 }
} *root;

void insertString(int len, char str[])
{
       node *cur=root;
       for(int i=0;i<len;i++)
       {
           int id=str[i]-'a';

           if(cur->next[id]==NULL)
            {cur->next[id]=new node();

            }
           cur=cur->next[id];
       }

       cur->mark=true;
}
bool doSearch(char str[])
{
      int len= strlen(str);
       node *cur=root;
       for(int i=0;i<len;i++)
       {
           int id=str[i]-'a';
           if(cur->next[id]==NULL)
                return false;
           cur=cur->next[id];
       }
       return cur->mark;

}


void del( node *cur)
{
    for(int i=0;i<26;i++)
           if(cur->next[i])
                del(cur->next[i]);
    delete(cur);

}

int  main()
{
    char input[100];
     int number;
    printf("Enter the number of words\n");
    scanf("%d",&number);
    root=new node();
    for(int i=0;i<number;i++)
    {
        scanf("%s",input);
//        printf("%s\n",input);
        int len=strlen(input);

        insertString(len,input);
    }
    printf("Insert Number of query\n");
     int q;
     scanf("%d",&q);
     for(int i=0;i<q;i++)
     {
         scanf("%s",input);
       bool flag=  doSearch(input);
        if(flag)
               printf("Yes Found\n");
        else
            printf("Not Found\n");

     }
    del(root);




    return 0;
}
