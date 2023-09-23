#include <iostream>
using namespace std;
class CopyNinja{
public:
	int x , y;
	CopyNinja(int a , int b){
		x = a;
		y = b;
	}
	//making a copy constructor
	CopyNinja(const CopyNinja &O1){
		x = O1.x;
		y = O1.y;
	}
	int GetX(){
		return x;
	}
	int GetY(){
		return y;
	}
};
int main(){
	CopyNinja O1(9 , 8);
	CopyNinja O2 = O1;
	cout<<O2.GetY();

	return 0;
}
