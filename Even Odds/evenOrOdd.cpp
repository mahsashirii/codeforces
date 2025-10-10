#include <iostream>
using namespace std;

int main() {
    long long n, index;
    cin >> n >> index;
    long long half = (n + 1) / 2;
    if (index <= half) {
        cout << (2 * index - 1) << '\n';
    } else {
        cout << (2 * (index - half)) << '\n';
    }
    return 0;
}
