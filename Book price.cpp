#include<iostream>
using namespace std;
int main()
{
    int X,M;
    cin>>X>>M;
    int onePrice = (X/7);
    int manyPrice = onePrice*M;
    cout<<manyPrice<<endl;
    return 0;
}
