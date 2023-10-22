// start playing with data structures again after 2 months, forgot to use some STLs. Sucks but it is the price you pay for being inconsistent.
#include<iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {2 , 2 , 2 , 4 , 4 , 5};
    map<int,int> mp;
    for(auto i:v){
        mp[i]++;
    }
    for(auto i: mp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    

    return 0;
}
// feeling really silly right now, I mean it doesn't take much to solve one data structure problem a day, right \(o__o)/