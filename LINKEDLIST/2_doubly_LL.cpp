#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*prev;
    node*next;
    node(int d)
    {
      this->data=d;
      this->prev=NULL;
      this->next=NULL;
    }
    ~node(){
        delete next;;
        next=NULL;
    }
};
void insertAtHead(node* &head, int d)
{
     node*temp=new node(d);
     temp->next=head;
     head->prev=temp;
     head=temp;
}
 void insertAtTail(node* &tail, int d)
 {
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
 }
 void insertAtPosition(node* &head,node* &tail, int pos, int d)
 {
     if(pos==1)
     {
         insertAtHead(head,d);
         return;
     }
     node* temp=head;
     int i=1;
     while(i!=pos-1)
     {
         temp=temp->next;
         i++;
     }
     if(temp->next==NULL)
     {
         insertAtTail(tail,d);
         return;
     }
     node* newnode=new node(d);
     newnode->next=temp->next;
     newnode->prev=temp;
     temp->next->prev=newnode;
     temp->next=newnode;
 }
   void deleteNode(int pos, node* &head, node* &tail)
    {
        if(pos==1)
        {
            node*temp=head;
            head=head->next;
            head->prev=NULL;
            temp->next=NULL;
            temp->prev=NULL;
            delete temp;
        }
        else
        {
            node*curr=head;
            node*last=NULL;
            int i=1;
            while(i<pos)
            {
               last=curr;
               curr= curr->next;
               i++;
            }
            last->next=curr->next;
            if(last->next!=NULL)
               curr->next->prev=last; //if end node was deleted then ther will be no curr->next->prev
            curr->next=NULL;
            delete curr;
            if(last->next==NULL)
                tail=last;
            }
    }
 void print(node* &head)
 {
     node*temp=head;
     while(temp!=NULL)
     {
         cout<<temp->data<<" ";
         temp=temp->next;
     }
     cout<<endl;
 }
 void reverseprint(node* &tail){
     node* temp=tail;
     while(temp!=NULL)
     {
        cout<<temp->data<<" ";
        temp=temp->prev;
     }
     cout<<endl;
 }
int main()
{
    node * node1=new node(71);
    node* head=node1;
    node* tail=node1;
    insertAtHead(head,72);
    insertAtHead(head,73);
    
    insertAtPosition(head,tail,3,74);
    insertAtPosition(head,tail,3,75);
    insertAtPosition(head,tail,1,1);

    insertAtTail(tail,100);
    insertAtTail(tail,102);

    insertAtPosition(head,tail,9,4000);
    insertAtPosition(head,tail,1,6000);
    print(head);
    reverseprint(tail);

    deleteNode(3,head,tail);
    print(head);
    reverseprint(tail);

    deleteNode(1,head,tail);
    print(head);
    reverseprint(tail);

    deleteNode(8,head,tail);
    print(head);
    reverseprint(tail);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;
}
