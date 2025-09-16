#include <iostream>

using namespace std;

int main(){
    string str;
    cin >> str;
    string result = "";
    for(int i = 0; i < str.size(); i ++){
        if(tolower(str[i]) != 'a' && tolower(str[i]) != 'i' && tolower(str[i]) != 'e' && tolower(str[i]) != 'u' &&  tolower(str[i]) != 'o' && tolower(str[i]) != 'y' ){
            char ch = tolower(str[i]);
            result = result + '.' + ch;
        }
    }
    cout << result << "\n";
}