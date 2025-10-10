#include <iostream>
#include <set>

using namespace std;

int main(){
    long long s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<long long> colors = {s1, s2, s3, s4};
    cout << 4 - colors.size() << "\n";
}