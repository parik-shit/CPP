#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string str , int s , int e){
	if(str[s] != str[e]){
		return false;
	}
	if(s > e){
		return true;
	}
	return isPalindrome(str, s + 1 , e - 1);

}

int main(){
	string str;
	cin>>str;
	int e = str.length() - 1;
	int s = 0;
	bool ans = isPalindrome(str ,s , e );
	cout<<ans;
	

	return 0;
}