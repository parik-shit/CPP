#include <iostream>
#include <stack>
using namespace std;
void printStack(stack<int> stack){
	while(!stack.empty()){
		cout<<stack.top()<<endl;
		stack.pop();
	}
}
int main(){
 stack<int> MyFirstStack;
MyFirstStack.push(1);
MyFirstStack.push(2);
MyFirstStack.push(3);
MyFirstStack.push(4);
MyFirstStack.push(5);
printStack(MyFirstStack);
}