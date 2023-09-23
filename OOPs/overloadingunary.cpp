/*#include <iostream>//pre-increment
using namespace std;
class Weight{
private:
	int kg;
public:
	Weight(){
		kg = 0;

	}
	Weight(int x){
		kg = x;

	}
	void printData(){
		cout<<kg<<endl;
	}
	void operator ++(){
		++kg;
	}

};
int main(){
	Weight banana;
	++banana;
	banana.printData();
	return 0;
}*/
#include <iostream> //post-increment
using namespace std;
class Weight{
private:
	int kg;
public:
	Weight(){
		kg = 0;

	}
	Weight(int x){
		kg = x;

	}
	void printData(){
		cout<<kg<<endl;
	}
	void operator ++(int){
		kg++;
	}

};
int main(){
	Weight banana;
	banana++;
	banana.printData();
	return 0;
}