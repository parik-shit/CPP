#include<iostream>
using namespace std;
bool isPrime(int number){
    bool PrimeFlag = true;
    for(int i = 2 ; i < number ; i++){
        if(number % i == 0){
            PrimeFlag = false;
            break;
        } 
    }
    return PrimeFlag;

}
int main(){
    int number;
    cout << "Enter a number: \n";
    cin >> number;
    bool PrimeFlag = isPrime(number);

    if(PrimeFlag){
        cout << "Prime";
    }else{
        cout << "Not a Prime";
    }
    return 0;
}