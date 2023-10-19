#include <iostream>
using namespace std;
int main() {
    int P, X;
    cin >> P >> X;
    int prevPopulation = X * 100 / (100 + P);
    cout << prevPopulation << endl;
    return 0;
}

