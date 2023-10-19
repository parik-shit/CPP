#include <iostream>
using namespace std;
class Tree
{
public:
    int data;
    Tree *left;
    Tree *right;
};
Tree *createNode(int data)
{
    Tree *newNode = new Tree();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
}

int main()
{
    // creating a root node
    Tree *root = createNode(1);
    // creating a left child node
    root->left = createNode(2);
    // creating a right child node
    root->right = createNode(3);


    return 0;
}