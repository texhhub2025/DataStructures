#include<iostream>
using namespace std;
class LinkedList{

    class Node{

        public:

        int data;
        Node* next;

         Node(int d){
            data=d;
            next=nullptr;
        } 
    };

    Node *head;

     public: LinkedList(){
        head=NULL;
     }

     void insert(int data){
        Node* newnode=new Node(data);

        Node* temp=head;

        if(temp==NULL){
            head=newnode;
            return;
        }else{

            while(temp->next!=NULL){
                temp=temp->next;
            }

            temp->next=newnode;
        }
     }

     void insert(int data,int pos)
     {
        Node* newnode=new Node(data);

        if(pos==1){
            newnode->next=head;
            head=newnode;
        }else{
            Node* temp=head;

            for(int i=1;i<pos-1;i++){
                temp=temp->next;
            }

            newnode->next=temp->next;
            temp->next=newnode;
        }
     }

     void print()
     {
        Node* temp=head;

        while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
        }


     }
};

int main()
{
    LinkedList list;

    list.insert(10);
    list.insert(20);
    list.insert(30);

    list.insert(25,3);

    list.print();

}


