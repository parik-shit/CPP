#include <iostream>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int data){
	this -> data = data;
	this -> next = NULL;
}

};

void insertAtTail(Node* &tail , int d){
	Node* temp = new Node(d);
tail -> next =  temp;
tail = tail -> next;

}

void insertAtPosition(int position , int d , Node* &head , Node* &tail  ){
	Node* temp = head; 
	int cnt = 1;
	while(cnt < position -1 ){
		temp = temp -> next;
		cnt++;
	}
	Node* NodetoInsert = new Node(d);
NodetoInsert -> next = temp -> next;
temp -> next = NodetoInsert;
if(temp -> next == NULL){
	insertAtTail(tail , d);
	return;
}

}
void deletionNode(int position , Node* &head){
	//insert at the start 

	if(position == 1){
		Node* temp = head;
head = head -> next;
delete(head);
	}
	else{
		//deleting in middle

	}
}
void insertAtHead(Node* &head , int d){
	Node* temp = new Node(d);
	
	temp -> next = head;
	head = temp;

}
void printList(Node* &head ){
	Node* temp = head;
	while(temp != NULL){
	 cout<< temp -> data << endl;
	 temp = temp -> next;
	}
}
int main(){
	Node* node1 = new Node(10);
	Node* head = node1;
Node* tail = node1;
insertAtTail(tail , 69);
insertAtPosition(2 , 96 , head , tail);
printList(head);

}