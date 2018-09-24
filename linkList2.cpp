#include<cstdio>
#include<cmath>
using namespace std;
struct node{
  int roll;
  node *next;
};
node *root=NULL;

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
        node *current = root;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        node *newNode = new node();
        newNode->next=NULL;
        newNode->roll=n;
        current->next=newNode;

    }

}
void print()
{
    node *current = root;
    while(current!=NULL)
    {
        printf("%d\n",current->roll);
        current=current->next;
    }
}
int main()
{
    insert(10);
    insert(20);
    insert(35);
    insert(14);
    print();
    return 0;
}
