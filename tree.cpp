#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *left,*right;
    node()
    {
        left=right=NULL;
    }

};
node *root =NULL;
void insert(node *current,int data)
{
    if(root==NULL)
    {
        root= new node();
        root->data=data;
        return;
    }
    if(current->data>data)
    {
        if(current->left==NULL)
        {
            node *ptr=new node();
            ptr->data=data;
            current->left=ptr;
        }
        else
          insert(current->left,data);

    }
    else
    {
        if(current->right==NULL)
        {
            node *ptr= new node();
            ptr->data=data;
            current->right=ptr;

        }
        else
          insert(current->right,data);

    }

}
void prefix(node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        prefix(root->left);
        prefix(root->right);
    }
}
int main()
{
    insert(root,3);
    insert(root,1);
    insert(root,4);
    prefix(root);

    return 0;
}
