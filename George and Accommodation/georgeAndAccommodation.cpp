#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int occupied, capacity;
    int empty = 0;
    for(int i = 0; i < n; i ++){
        cin >> occupied >> capacity;
        if(capacity - 2 >= occupied){
            empty ++;
        }
    }
    cout << empty << "\n";
}
