#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data : "<<value<<endl;
    }
};
void InsertAtTail(Node* &tail,int d){
    Node* temp= new Node(d);
    tail->next=temp;
    tail= tail->next;
}

void InsertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next =  head;
    head=temp; 
}
void InsertAtPosition(Node* &tail,Node* &head,int position, int d){
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node*temp= head;
    int cnt=1;
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
    
    }
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }

    Node* nodeToInsert= new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void deleteNode(int position,Node* &tail,Node* &head){
    // deleting first or start node
    if(position==1){
        Node* temp=head;
        head=head->next;
//memory free start done
temp->next=NULL;
        delete temp;
    }
    else {
//deleting any middle node or last node
    Node* curr= head;
    Node* prev= NULL;
    int cnt=1;
    while( cnt<position){
    prev=curr;
    curr=curr->next;
    cnt++;
}
    prev->next=curr->next;
    curr->next=NULL;
      if (prev->next == NULL) {
      tail = prev;
    }
    delete curr;
    }
}
void Print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
     cout<<temp->data<<" ";
     temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* node1=new Node(10);
    //cout<<node1->data<<endl;
   // cout<<node1->next<<endl;
    Node* head=node1;
    Node* tail=node1;
    Print(head);
    InsertAtTail(tail,12);
  Print(head);
  InsertAtTail(tail,15);
  Print(head);
  InsertAtPosition(tail,head,4,22);
  Print(head);
  deleteNode(4,tail,head);
  cout<<"head:"<<head->data<<" "<<"tail:"<<tail->data<<endl;
}