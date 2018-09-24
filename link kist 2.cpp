#include<cstdio>
#include<iostream>
#include<stdlib.h>
using namespace std;

 struct data
{
    int number;

   struct      data *next;
};
void insrt(int a);
void traverse(data* pointer);
data* head;
 data* tail;
 int main()
 {
     head=NULL;
     tail=NULL;
     insrt(1);
     insrt(2);
     insrt(3);
     insrt(4);
     insrt(5);
     traverse(head);
     return 0;
 }
 void insrt(int a)
 {
     data* temp=(data*)malloc(sizeof(data));
     temp->number=a;
     temp->next=NULL;
     if(head==tail&&head==NULL)
     {

         head=tail=temp;
     }
     else
    {

     tail->next=temp;
     tail=temp;
    }
 }
void traverse(data* pointer)
{

    if(pointer->next!=NULL)
    {
        printf("%d ",pointer->number);
        traverse(pointer->next);
    }
    return ;
}
