#include <iostream>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int height;
    int totalWidth = 0;
    for(int i = 0; i < n; i ++){
        cin >> height;
        if(height > h){
            totalWidth += 2;
        }
        else{
            totalWidth ++;
        }
    }
    cout << totalWidth << "\n";
}