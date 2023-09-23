#include <iostream>
#include <string>
using namespace std;
bool palindromeChecker(string a)
{
	int n = a.size();
	for(int i = 0 ; i < n ; i++){
		if(a[i] != a[n - i - 1]){
			return false;
		}
	}
	return true;
}
int main(){
string str = "cum";
cout<<palindromeChecker(str);
}