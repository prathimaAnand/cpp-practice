//printing list
#include <iostream>

using namespace std;

struct Node(){
    int data;
    struct Node *next;
};

int main()
{
    //Traversing list
    struct Node *temp = head; // initialise to head
    while(temp != NULL){
        cout<<"Data in the list:"<<temp -> data;
        temp = temp->next;
    }
    //inserting at the begginning of the list
    Node new_node = (Node*)malloc(sizeof(Node));
    new_data->data = 4;
    new_node->next = head; //storing head's address in new_node's next ptr
    head = new_node;

    //inserting at the end of list
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = 5;
    new_node->next = NULL;
    
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;

    //inserting at the middle of the list
    Node *new_node = NULL;
    new_node = (*Node)malloc(sizeof(Node));
    new_node->data = 4;
    
    Node temp = head;
    for(int i = 2; i < position; i ++){
        if(temp->next != NULL)
            temp = temp->next;
    }
    new_node->next = temp->next;
    temp->next = new_node;

    // delete from beginning
    //point head to 2nd node
    current_node = head;//
    head = current_node->next// which is pointing to 2nd node
    //or
    head = head.next; //which is pointing to 2nd node
    
    //delete from end
    Node *temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    temp->next = NULL;
    
    //delete from middle
    Node *temp;
    for(int i = 2; i < position; i++){
        if(temp->next != NULL)
            temp = temp->next;
    }
    temp->next = temp->next->next;

    return 0;
}