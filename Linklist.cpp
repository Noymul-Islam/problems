#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
void append(int roll);
void delet(int roll);
void insert(int after, int number);
void print();
struct node
{
    int roll;
    node *next;
};
node *root=NULL;

int main()

{
    append(5);
    append(8);
    append(18);
    append(158);
    printf("Before doing anything\n");
    print();
    insert(18,124);
    printf(" After Inserting number\n");
    print();
    delet(158);
    printf("After deleting number\n");
    print();
    return 0;
}
void delet(int roll)
{
    node *current_node = root;
    node *prevnode;
    while(current_node->roll!=roll)
    {
        prevnode=current_node;
        current_node=current_node->next;

    }

    prevnode->next=NULL;
    delete(current_node);

}

void append(int roll)
{

    if(root==NULL)
    {
        root=new node();
        root->roll=roll;
        root->next=NULL;
    }
    else
    {
        node *current_node=root;
        while(current_node->next!=NULL)
        {
            current_node=current_node->next;

        }
        node *newNode = new node();
        newNode->roll=roll;
        newNode->next=NULL;
        current_node->next=newNode;
        //printf("root %d\n",root->next);

    }

}

void print()
{
    node *current_node= root;
    while(current_node!=NULL)
    {
        printf("%d\n",current_node->roll);
        current_node=current_node->next;

    }

}
void insert(int after, int number)
{
    node* prev;
    node *current_node=root;
    while(current_node->roll!=after)
    {
        prev=current_node;
        current_node=current_node->next;

    }
    node *newnode = new node();
    newnode->next=current_node;
    newnode->roll= number;
    prev->next=newnode;

}
