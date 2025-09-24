#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int exit, enter;
    int capacity = 0;
    int thisStepCapacity = 0;
    for(int i = 0; i < n; i ++){
        cin >> exit >> enter;
        thisStepCapacity = thisStepCapacity + enter - exit;
        if(capacity < thisStepCapacity){
            capacity = thisStepCapacity;
        }
    }
    cout << capacity << "\n";
}