#include <iostream>
using namespace std;
int main() {
    int X;
    cin >> X;
    int fatherAge = 4 * (X / 5);
    int daughterAge = X / 5;
    cout << fatherAge << " " << daughterAge << endl;
    return 0;
}
