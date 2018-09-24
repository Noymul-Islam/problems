#include<bits/stdc++.h>
using namespace std;
struct node
{
    int roll;
    node *Left,*Right;
    node()
    {
        Left=NULL;
        Right=NULL;

    }

};

node *root=NULL;

void insert(int roll)
{
    if(root==NULL)
    {
        root= new node();
        root->roll=roll;
        return;
    }
    else
    {
        node *parent,*current=root;
        while(current!=NULL)
        {
            parent=current;
            if(current->roll<roll)
            {

                current=current->Right;
            }
            else
            {
                current=current->Left;

            }

        }


    node *newNode= new node();
    newNode->roll=roll;
    if(parent->roll>roll)
    parent->Left=newNode;
    else
    parent->Right=newNode;
    }

}
void preOrder(node *current)
{
    if(current!=NULL)
    {
        printf("%d\n",current->roll);
        preOrder(current->Left);
        preOrder(current->Right);

    }

}
void inOrder(node *root)
{
    if(root!=NULL)
    {
        inOrder(root->Left);
        printf("%d\n",root->roll);
        inOrder(root->Right);
    }

}
void postorder(node *root)
{
    if(root!=NULL)
    {
        postorder(root->Left);
        postorder(root->Right);
        printf("%d\n",root->roll);

    }
}
void deleting(int roll)
{
    node *parent,*current=root;
    int leftFlag=0,rightFlag=0;
    while(current->roll!=roll)
    {
        parent=current;
        if(current->roll>roll)
          {
           leftFlag=1;
           rightFlag=0;
           current=current->Left;
          }
        else
        {
            rightFlag=1;
            leftFlag=0;
          current=current->Right;
        }
    }
    if(leftFlag)
      parent->Left=NULL;
      else
      parent->Right=NULL;

}
int minValue(node *node)
{
    if(node!=NULL)
    {
        return min(node->roll, min(minValue(node->Left),minValue(node->Right)));

    }
    else
    return 1000000;
}
int maxValue(node *node)
{
    if(node!=NULL)
    {
        return max(node->roll, max(maxValue(node->Left),maxValue(node->Right)));

    }
    else
    return -1000000;
}
int isBST(node* node)
{
  if (node == NULL)
    return(true);

  /* false if the max of the left is > than us */
  if (node->Left!=NULL && maxValue(node->Left) > node->roll)
    return(false);

  /* false if the min of the right is <= than us */
  if (node->Right!=NULL && minValue(node->Right) < node->roll)
    return(false);

  /* false if, recursively, the left or right is not a BST */
  if (!isBST(node->Left) || !isBST(node->Right))
    return(false);

  /* passing all that, it's a BST */
  return(true);
}
int main()
{

    insert(3);
    insert(4);
    insert(2);
    insert(1);
    insert(5);
    //preOrder(root);
    //printf("\n\n");
    //inOrder(root);
    //printf("\n\n");
    //postorder(root);
    bool a = isBST(root);
    printf("%d",a);
}
