#include<iostream>
using namespace std;
int main()
{
    int D,Q;
    cin>>D>>Q;
    int remaider = D/3;
    int dividend = (D*Q)+remaider;
    cout<<dividend<<endl;
    return 0;
}
