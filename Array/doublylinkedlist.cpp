#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node* next;
	Node* previous;
};

void insertFront(Node*& head , int data){
	Node* n = new Node();
	n -> data = data;
	n -> next = head;
	head = n;
	n -> previous = NULL;
}
void insertAtTail(Node* &tail , int data){
	Node* n = new Node();
	n -> data = data;
	n -> next = NULL;
	tail -> next = n;
    n -> previous = tail;	
	tail = n;


}
void insertAtPosition(Node* &head ,int position , int data){
Node* temp = head;
int cnt = 1;
while(cnt < position - 1)
{
	temp = temp -> next;
	cnt++;
}
Node* n = new Node();
n -> data = data;
temp -> next = n -> next;
n-> previous = temp;
temp -> next = n;
if(temp -> next == NULL){
	insertAtTail(tail , d);
	return;
}
}
void printData(Node* &head){
	Node* temp = head;
	while(temp != NULL){
		cout<< temp -> data <<endl;
		temp = temp -> next;
	}
}
int main(){
	Node* head;
	Node* tail;
	Node* n;
n = new Node();
head = n;
tail = n;

n -> data = 1 ;
n -> next = tail;
n -> previous = NULL;
insertAtTail(tail , 4);
insertAtPosition(head ,2 , 5);
printData(head);



}