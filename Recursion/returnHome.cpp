#include <iostream>
using namespace std;
void reachHome(int src ,int dest){
	cout<< "source "<<src<<endl;
	if(src == dest){
		cout<<"pahuch gya"<<endl;
		return;

	}
	reachHome(src + 1 , dest);

}

int main(){
	int dest = 10;
	int src = 1;
	reachHome(1,10);

	return 0;
}