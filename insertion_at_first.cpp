//Insertion at  first.
#include<iostream>
using namespace std;
class Node
{
 public:
 int data;
 Node * next;
 Node(int data)
  {
     this->data=data;
     this->next=nullptr;
  }
};
class LinkedList
{
    Node *head=nullptr;
    public:
    void insertatbegining(int data)
    {
        Node* newNode = new Node(data);
        newNode -> next = head;
        head = newNode;
    }

    void displaylist()
    {
      if(!head)
        exit(1);
     Node *temp=head;
     while(temp)
     {
        cout<<temp->data<<" ";
        temp=temp->next;
     }
     cout<<endl;
    }
};

int main()
{
  LinkedList L1;
  L1.insertatbegining(5);
  L1.insertatbegining(4);
  L1.insertatbegining(3);
  L1.insertatbegining(2);
  L1.insertatbegining(1);
  
  L1.displaylist();
  return 0;
}