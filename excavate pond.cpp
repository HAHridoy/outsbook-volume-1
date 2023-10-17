#include<iostream>
using namespace std;
int main()
{
    int x,d1,d2;
    cin>>x>>d1>>d2;
    int totalPerson = (x*d1)/d2;
    int extraPerson = totalPerson - x;
    cout<<extraPerson<<endl;
    return 0;
}
