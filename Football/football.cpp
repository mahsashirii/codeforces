#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    char flag = '0';
    int cnt = 0;
    for(int i = 0; i < str.size(); i ++){
        if(flag == str[i]){
            cnt ++;
        }
        else{
            cnt = 1;
            if(flag == '0'){
                flag = '1';
            }
            else{
                flag = '0';
            }
        }
        if(cnt == 7){
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
}