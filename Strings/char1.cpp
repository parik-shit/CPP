#include <iostream>
using namespace std;
char lowerCase(char bleh){
	if(bleh >= 'a' && bleh <= 'z' ){
		return bleh;
	}
	else
		{char temp = bleh - 'A' + 'a';
			return temp;}
}
int getLength(char name[]){
	int count = 0;
	for(int i = 0 ; name[i] != '\0'; i++ ){
       count++;
	}
	return count;
}

void stringReverser(char name[] , int n){
	int s = 0;
	int e = n - 1;
	while(s<=e){
		swap(name[s++],name[e--]);
	}
	
}
int main(){
	
	 char ch[20];
	 ch[20] = '\0'; //when the compiler see the first null character it will stop the further operations
	 cout<<"Enter Your Name: "<<endl;
	 cin>>ch;
	
cout<<getLength(ch)<<endl;
stringReverser(ch,7);

cout<<lowerCase('F');
}     					