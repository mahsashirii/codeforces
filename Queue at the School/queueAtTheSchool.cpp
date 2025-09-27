#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int iteration;
    cin >> iteration;
    string people;
    cin >> people;
    int person[n];
    for(int i = 0; i < iteration; i ++){
        for(int t = 0; t < n; t ++){
            person[t] = 0;
        }
        for(int j = 0; j < people.size() - 1; j ++){
            if(people[j] == 'B' && people[j + 1] == 'G' && person[j] == 0 && person[j + 1] == 0){
                people[j] = 'G';
                people[j + 1] = 'B';
                person[j] = 1;
                person[j + 1] = 1;
            }
        }
    }
    cout << people << "\n";
}