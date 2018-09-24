#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>

using namespace std;
struct node
{
    int roll;
    node *left, *right;
    node()
    {
        left=NULL;
        right=NULL;
    }

};
node *root=NULL;

void insert(int roll)
{
 if(root==NULL)
   { root=new node();
     root->roll=roll;

   }
 else
    {
        node *current=root, *parent;
        while(current!=NULL)
             {
                 parent=current;
                 if(roll<current->roll)
                    {
                        current=current->left;

                    }
                else if(roll>=current->roll)
                    {
                        current=current->right;

                    }

             }
          node *newnode= new node();
          newnode->roll=roll;
          if(roll<parent->roll)
             parent->left=newnode;
          else
             parent->right=newnode;
    }

}
void print_order(node *current)
{
  if(current==NULL)
     return;


   print_order(current->left);
   print_order(current->right);

printf("Node: %d\n",current->roll);
}
void deleting(int roll)
{
    node *current=root, *parent;
    int leftflag=0, rightflag=0;
    while(current->roll!=roll)
      {
          parent=current;

          if(current->roll>roll)
            {
                current=current->left;
                leftflag=1;
                rightflag=0;
            }
          else if(current->roll<roll)
            {
                current=current->right;
                rightflag=1;
                leftflag=0;
            }

      }
      if(leftflag)
       parent->left=NULL;
       else
       parent->right=NULL;



}
int main()
{
 insert(125);
 insert(1213);
 insert(121);
 print_order(root);
 deleting(121);
 print_order(root);
return 0;
}


