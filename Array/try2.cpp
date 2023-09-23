/*#include <iostream>
using namespace std;
void f(int i , int n ){
  if(i > n){
    return;
  }
  cout<<i<<" ";

  f(i+1 , n);
}
int  main(int argc, char const *argv[])
{
  int n , i;
  cin >> i >> n ;
  f(i,n);

  
  return 0;
}*/

/*#include <iostream>
using namespace std;
void f(int i , int n){
if(i < 1){
  cout<<n;
  return;
}

f(i - 1 , n + i);
   
}

int main(){
int i , n;
cin>> i >> n;
f(i , n);
}*/
// parameterized way of doing recursion 
#include <iostream>

using namespace std;


int f( int n ){

  if(n == 0){
    return 1;
  }

  return n * f(n -1);
}

   


int main(){
int n;
cin>> n;
int ans = f(n);
cout<<ans;
}