#include <iostream>

using namespace std;

int main(){
    int distance;
    int step = 0;
    cin >> distance;
    for(int i = 5; i > 0; i --){
        step += distance / i;
        distance = distance % i;
        if(distance == 0){
            cout << step << "\n";
            return 0;
        }
    }
}