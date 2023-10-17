#include<iostream>
using namespace std;
int main()
{
    int r1,r2;
    cin>>r1>>r2;
    int batsmen = r1*6;
    int bowlers = r2*4;
    int avg = (batsmen + bowlers)/10;
    cout<<avg<<endl;
    return 0;
}
