#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;

struct node{
   node  *next;
    int roll;

};
node *root =NULL;

void insert(int n)
{
    if(root==NULL)
    {
        root = new node();
        root->next=NULL;
        root->roll=n;
    }
    else
    {
        node *current_node = root;
        while(current_node->next!=NULL)
        {
            current_node=current_node->next;
        }
        node *newNode = new node();
        newNode->next=NULL;
        newNode->roll=n;
        current_node->next=newNode;
    }

}
void print()
{
    node *current_node=root;
    while(current_node!=NULL)
    {
        printf("%d\n",current_node->roll);
        current_node=current_node->next;
    }

}
void deleT(int n)
{
    node *current_node = root;
    node *prev;
    while(current_node->roll!=n)
    {
        prev= current_node;
        current_node=current_node->next;
    }
    node *temp = current_node->next;
    prev->next=temp;
    temp->next=NULL;
    delete(current_node);

}
void append(int after, int number)
{
    node *current_node= root;

    while(current_node->roll!=after)
    {
        // printf("%d\n",current_node->roll);
        current_node=current_node->next;
       // printf("ok");

    }
    node *temp= current_node->next;

    node *newNode= new node();
    //printf("okk");
    newNode->roll=number;
    newNode->next=temp;
    current_node->next=newNode;

}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    printf("Before deleting\n");
    print();
    deleT(20);
    printf("After deleting\n");
    print();
    printf("Before appending\n");
        insert(115);
    insert(20);
    append(20,40);
    print();
    return 0;
}
