#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    ~node(){
            delete next;
            this->next=NULL;
    }
};

    void insertAtHead(node* &head , int d)
    {
        node*temp=new node(d);
        temp->next=head;
        head=temp;
        temp=NULL;
        delete temp;
    }
    void insertAtTail(node* &tail, int d)
    {
        node* temp=new node(d);
        tail->next=temp;
        tail=tail->next;
        temp=NULL;
        delete temp;
    }
    void inserAtPosition(node* &head,node* &tail, int pos, int d)
    {
        if(pos==1)
        {
            insertAtHead(head, d);
            return;
        }
       node* temp=head;
       int i=1;
       while(i<pos-1)
       {
         temp=temp->next;
         i++;
       }
       if(temp->next==NULL)
       {
           insertAtTail(tail,d);
           temp=NULL;
           return;
       }
      node* newnode=new node(d);
      newnode->next=temp->next;
      temp->next=newnode;
      newnode->next=NULL;
      delete newnode;
      temp->next=NULL;
      delete temp;
        }
    void deleteNode(int pos, node* &head, node* &tail)
    {
        if(pos==1)
        {
            node*temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
        }
        else
        {
        node*curr=head;
        node*prev=NULL;
        int i=1;
        while(i<pos)
        {
           prev=curr;
           curr= curr->next;
           i++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        if(prev->next==0)
            tail=prev;
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

int main()
{
    /*
    //creating a node
    node* node1=new node(100);
    cout<<node1->data<<endl;
    cout<<node1->next; */

    node* node1=new node(100);

    //pointing head to this new node
    node *head=node1;
    //pointing tail to this new node
    node *tail=node1;

    //inserting elements at starting of list
    insertAtHead(head, 88);
    insertAtHead(head, 89);
    insertAtHead(head, 90);

    //printing 
    print(head);

    //inserting element at the end of list
    insertAtTail(tail, 200);
    insertAtTail(tail, 201);
    insertAtTail(tail, 202);

    //printing
    print(head);

    //inserting element at given position
    inserAtPosition(head,tail, 8, 5);
    print(head);
    deleteNode(8,head,tail);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    //deleting memory
    node1->next=NULL;
    delete node1;
    head->next=NULL;
    delete head;
    tail->next=NULL;
    delete tail;
}