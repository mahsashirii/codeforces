#include <iostream>

using namespace std;

int main(){
    string str1, str2;
    cin >> str1;
    cin >> str2;
    string reverseStr1= "";
    for(int i = str1.size() - 1; i >= 0; i --){
        reverseStr1 = reverseStr1 + str1[i];
    }
    if(reverseStr1 == str2){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}