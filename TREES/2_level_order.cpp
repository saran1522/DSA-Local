#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class node{
 public: 
 int data;
 node* right;
 node* left;
 node(int d)
 {
   this->data=d;
   this->left=NULL;
   this->right=NULL;
 }
};

node* makeTree(node* root)
{
    int data;
    //queue<node*>q;
    cout<<"enter data: "<<endl;
    cin>>data;
    root = new node(data);
    if(data==-1)
      return NULL;
    //node* temp=root;
    cout<<"insertion at left: "<<endl;
    root->left=makeTree(root->left);
    cout<<"insertion at right: "<<endl;
    root->right=makeTree(root->right);
    return root;
}

void levelOrder(node* root)
{
   queue<node*>q;
   q.push(root);
   q.push(NULL);
   while(!q.empty())
   {
       node* temp=q.front();
       q.pop();
       if(temp==NULL)
       {
           cout<<endl;
           if(!q.empty())
           q.push(NULL);
       }
       else
       {
            cout<<temp->data<<" ";
           if(temp->left)
            q.push(temp->left);
           if(temp->right)
            q.push(temp->right);
       }
   }
}
int main(){
  node* root=NULL;
  root=makeTree(root);
  levelOrder(root);
  delete root;
  return 0;

}