#include <iostream>

using namespace std;

bool isDistinc(int n){
    int digit[10] = { 0 };
    while(n > 0){
        if(digit[n % 10] == 1){
            return false;
        }
        else{
            digit[n % 10] = 1;
            n = n / 10;
        }
    }
    return true;
}
int main(){
    int number;
    cin >> number;
    while(true){
        number ++;
        if(isDistinc(number)){
            cout << number << "\n";
            return 0;
        }
    }
}
