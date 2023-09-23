#include <iostream> 
using namespace std;
class Node {
public:
int data;
Node* next;
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
void insertAtNode(int position , Node* &head , int d ){
	Node* temp = head;
	int cnt = 1;
	while(cnt < position -1 ){
		temp = temp -> next;
cnt++;

	}
	Node* newNode = new Node(d);
	temp -> next = newNode;
}

void insertAtFront(Node* &head , int d){
Node* temp = new Node(d);
temp -> next = head;
head = temp;
	
}

void printList(Node* &head ){
	Node* temp = head;
	while(temp  != NULL){
	 cout<< temp -> data << endl;
	 temp = temp -> next;
	}
}


int main(){
	Node* node1 = new Node(10);
	Node* head = node1;
Node* tail = node1;
insertAtTail(tail , 69);
insertAtNode(2 , head , 33);
	printList(head);
}