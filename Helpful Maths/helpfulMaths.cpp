#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;
    string ans = "";
    int cnt[3] = {0};
    for(int i = 0; i < str.size(); i += 2){
        if(str[i] == '1'){
            cnt[0] ++;
        }
        else if(str[i] == '2'){
            cnt[1] ++;
        }
        else{
            cnt[2] ++;
        }
    }
    for(int i = 0; i < cnt[0]; i ++){
        if(ans != ""){
            ans.push_back('+');
        }
        ans.push_back('1');
    }
    for(int i = 0; i < cnt[1]; i ++){
        if(ans != ""){
            ans.push_back('+');
        }
        ans.push_back('2');
    }
    for(int i = 0; i < cnt[2]; i ++){
        if(ans != ""){
            ans.push_back('+');
        }
        ans.push_back('3');
    }
    cout << ans << "\n";
}