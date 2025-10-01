#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int give[n];
    int take[n];
    for(int i = 0; i < n; i ++){
        cin >> give[i];
    }
    for(int i = 0; i < n; i ++){
        take[i] = 0;
    }
    for(int i = 0; i < n; i ++){
        take[give[i] - 1] = i + 1;
    }
    for(int i = 0; i < n; i ++){
        cout << take[i];
        if(i != n - 1){
            cout << " ";
        }
    }
    cout << "\n";
}