#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *left,*right;
    node()
    {
        left=NULL;
        right=NULL;
    }

};
node *root=NULL;
void insert(node*current,int count)
{
    if(root==NULL)
    {
        root= new node();
        root->data=count;
        return;

    }
    if(current->left==NULL)
    {
       // printf("in left: %d \n",count);
        node *ptr=new node();
        ptr->data=count;
        current->left=ptr;
        return;
    }
    else if(current->right==NULL)
    {
        //printf("in right:%d\n",count);
        node *ptr=new node();
        ptr->data=count;
        current->right=ptr;
        return;
    }
    else if(current->left!=NULL && current->right!=NULL)
    {
       // printf("ok");
        insert(current->left,count);

    }
    else
    {
        //printf("ok");
        insert(current->right,count);
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
void postfix(node *root)
{
    if(root!=NULL)
    {

        postfix(root->left);
        postfix(root->right);
        printf("%d ",root->data);
    }
}
void infix(node *root)
{
    if(root!=NULL)
    {

        infix(root->left);
        printf("%d ",root->data);
        infix(root->right);

    }
}
int main()
{
    int n;

    while(scanf("%d",&n)==1)
    {
        int count=1;
        for(int i=0;i<n;i++)
        {

            int j=pow(2,i);
            for(int k=0;k<j;k++)
            {
               // printf("%d\n",count);
                insert(root,count++);

            }
        }
        prefix(root);
        printf("\n");
        postfix(root);
        printf("\n");
        infix(root);

    }


    return 0;
}
