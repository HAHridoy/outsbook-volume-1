#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a>>b;
    int profit = b - a;
    int percentage = (profit*100)/a;
    cout << percentage << endl;
    return 0;
}

