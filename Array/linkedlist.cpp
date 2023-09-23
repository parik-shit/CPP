#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
void insertAtLast(Node **head, int newValue)
{
    // Step - 1 Add a new Node.
    Node *newNode = new Node();
    // Step - 2 Put data in the newNode.
    newNode->data = newValue;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *last = *head;
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
}

void insertFront(Node* *head, int newValue)
{
    // Step - 1 Add a new Node.
    Node *newNode = new Node();
    // Step - 2 Put data in the newNode.
    newNode->data = newValue;
    newNode->next = *head; // putting the newly created node in front of the head (memory address of the new node
    )
    *head = newNode;       // step - 3
}
void insertAfterNode(Node *prevNode, int newValue)
{
    // Step - 1 Add a new Node.

    if (prevNode == NULL)
    {
        cout << "Previous cannot be NULL" << endl;
    }
    Node *newNode = new Node();

    // Step - 2 Put data in the newNode.

    newNode->data = newValue;
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}
void printList(Node *head)
{ // in the parameter of function printList we add head of the linkedlist
    while (head != NULL)
    {
        cout << head->data << endl;
        head = head->next;
    }
}
int main()
{
    Node* head = NULL;

    insertFront(&head, -1);

    insertAfterNode(head, 89);

    insertAtLast(&head, -68);

    printList(head);
    return 0;
}

