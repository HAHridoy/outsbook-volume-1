#include <iostream>
using namespace std;
int main() {
    int X, M, Y;
    cin >> X >> M >> Y;
    int totalFood = X * M;
    int foodWillLast = totalFood / (X + Y);
    cout <<foodWillLast << endl;
    return 0;
}

