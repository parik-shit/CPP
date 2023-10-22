#include<iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    vector<int> v = {1 , 1 , 2 , 3 , 3 , 3 , 7 , 7};
    set<int> s;
    for(auto i : v){
        s.insert(i);
    }
  for(auto i : s){
        cout<<i<<" ";
    }
    return 0;
}