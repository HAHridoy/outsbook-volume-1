#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a>>b;
    int loss = a- b;
    int percentage = (loss*100)/a;
    cout << percentage << endl;
    return 0;
}

