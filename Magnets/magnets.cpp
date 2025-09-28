#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n ;
    string str1, str2;
    cin >> str1;
    int cnt = 0;
    for(int i = 0; i < n - 1; i ++){
        str2 = str1;
        cin >> str1;
        if(str1 != str2){
            cnt ++;
        }
    }
    cout << cnt + 1 << "\n";
}