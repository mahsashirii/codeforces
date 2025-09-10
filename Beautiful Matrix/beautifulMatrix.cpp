#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int matrix [5][5];
    int row, column;
    for(int i = 0; i < 5; i ++){
        for(int j = 0; j < 5; j ++){
            cin >> matrix[i][j];
            if(matrix[i][j] != 0){
                row = i;
                column = j;
            }
        }
    }
    int ans = 0;
    if (row > 2){
        ans += row - 2;
    }
    else{
        ans += 2 - row;
    }
    if (column > 2){
        ans += column - 2;
    }
    else{
        ans += 2 - column;
    }
    cout << ans << "\n";
}