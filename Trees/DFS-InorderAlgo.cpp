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
// printer will be used to print the data inside the node [Recursive Function]
void printer(Tree *root)
{
    if (root == nullptr)
        return;
    printer(root->left);
    cout << root->data << endl;
    printer(root->right);
}

int main()
{
    // creating a root node
    Tree *root = createNode(1);
    // creating a left child node
    root->left = createNode(2);
    // creating a right child node
    root->right = createNode(3);

    // printing the data using the printer function
    printer(root);

    return 0;
}