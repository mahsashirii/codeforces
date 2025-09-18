#include <iostream>

using namespace std;

int main(){
    int k, w;
    long long int n;
    cin >> k >> n >> w;
    int cost = 0;
    for(int i = 1; i <= w; i ++){
        cost += k * i;
    }
    if(n < cost){
        cout << cost - n << "\n";
    }
    else{
        cout << 0 << "\n";
    }
    
}