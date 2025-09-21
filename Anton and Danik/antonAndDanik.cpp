#include <iostream>

using namespace std;

int main(){
    int n;
    string str;
    cin >> n;
    cin >> str;
    int result = 0;
    for(int i = 0; i < n; i ++){
        if(str[i] == 'A'){
            result ++;
        }
        else{
            result --;
        }
    }
    if(result < 0){
        cout << "Danik" << "\n";
    }
    else if(result > 0){
        cout << "Anton" << "\n";
    }
    else{
        cout << "Friendship" << "\n";
    }
}