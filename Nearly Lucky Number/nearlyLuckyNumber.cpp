#include <iostream>

using namespace std;

int main(){
    string number;
    cin >> number;
    int cnt = 0;
    for(int i = 0; i < number.size(); i ++){
        if(number[i] == '4' || number[i] == '7'){
            cnt ++;
        }
        if(cnt > 7){
            cout << "NO" << "\n";
            return 0;
        }
    }
    if(cnt == 4 || cnt == 7){
        cout << "YES" << "\n";
    }
    else{
        cout << "NO" << "\n";
    }
}