#include <iostream>
using namespace std;
void reverseWord(string str , int l, int h){
   
   if(l>h){
   	cout<<str; 
       return;
       
   }
  
   swap(str[l],str[h]);
    l++;
   h--;
   
     reverseWord(str , l , h);}


int main(){
	string str = "hello";
	reverseWord(str , 0 , str.length() - 1);

	

	return 0;
}