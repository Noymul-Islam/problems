#include<bits/stdc++.h>
using namespace std;

int var = 1;

struct node{

   int data;
   struct node *left, *right;


};

struct node *root;

void insert(int d,int x,struct node *pointer){

   if(d == 0){

    pointer = NULL;
    return ;

   }

   if(root == NULL)
   {
       struct node *current = (struct node*)malloc(sizeof(struct node));
       current->data = x;
       current->left = (struct node*)malloc(sizeof(struct node));
       current->right = (struct node*)malloc(sizeof(struct node));
       root = current;


       if(d > 1)
       insert(d - 1,++var,current->left);
       else
       current->left = NULL;

        if(d > 1)
       insert(d - 1,++var,current->right);
       else
       current->right = NULL;


   }
   else{

       pointer->data = x;
       pointer->left = (struct node*)malloc(sizeof(struct node));
       pointer->right = (struct node*)malloc(sizeof(struct node));


        if(d > 1)
       insert(d - 1,++var,pointer->left);
       else
       pointer->left = NULL;

        if(d > 1)
       insert(d - 1,++var,pointer->right);
       else
       pointer->right = NULL;


   }

}


void pre(struct node *current){


   if(current == NULL)
      return;

   printf("%d ",current->data);
   pre(current->left);
   pre(current->right);

}


void in(struct node *current){

   if(current == NULL)
    return ;

   in(current->left);
   printf("%d ",current->data);
   in(current->right);
}

void post(struct node *current){

   if(current == NULL)
      return ;


   post(current->left);
   post(current->right);
   printf("%d ",current->data);


}

int main(){

 int n;

   while(scanf("%d",&n) == 1){

      var=1;
      insert(n,var,root);


   //   printf("%d\n",root->left->left->data);
       printf("Pre:");

      pre(root);
      printf("\n");
      printf("In:");
      in(root);
      printf("\n");
      printf("Post:");
      post(root);
      printf("\n");




   }

}
