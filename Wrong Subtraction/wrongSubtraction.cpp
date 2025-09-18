#include <iostream>

using namespace std;

int main(){
    long long n;
    int iteration;
    cin >> n >> iteration;
    for(int i = 0; i < iteration; i ++){
        if(n % 10 == 0){
            n = n / 10;
        }
        else{
            n = n - 1;
        }
    }
    cout << n << "\n";
}