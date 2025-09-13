#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    int cnt[26] = {0};
    int counter = 0;
    for(int i = 0; i < str.size(); i ++){
        if(cnt[str[i] - 97] == 0){
            counter ++;
        }
        cnt[str[i] - 97] ++;
    }
    if(counter % 2 == 0){
        cout << "CHAT WITH HER!" << "\n";
    }
    else{
        cout << "IGNORE HIM!" << "\n";
    }
}