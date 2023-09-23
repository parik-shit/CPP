#include <iostream>
using namespace std;
void printer(int *v){
for(int i = 0 ; i < 5; i++){
	for(int j = i ; j <5 ; j++ ){
		for(int k = j ; k < 5; k++){
			 cout<<v[i]<<v[j]<<v[k]<<endl;
		}
		
	}
}
}

int main(){
	
	int v[5] = {1 , 2 , 3 , 4 , 5};
	printer(v);

	return 0;
}