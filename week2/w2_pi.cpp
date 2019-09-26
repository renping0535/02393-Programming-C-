#include <iostream>
#include <cmath>

using namespace std;

double pi(int n);

int main()
{
    int n;
    cin>>n;
    double sum = 0.0;
    double item;
    for(int i=0;i<n;i++)
    {
        item = pi(i+1);
        sum = sum+item;
    }
    cout<<4*sum<<endl;
    return 0;
}

double pi(int n)
{
    double item;
    item = double(pow(-1,n-1))/(2.0*(n-1)+1.0);
    return item;
}
