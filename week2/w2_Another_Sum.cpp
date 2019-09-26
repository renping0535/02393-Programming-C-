#include <iostream>

using namespace std;

int main()
{
    int m, n;
    int sum = 0;
    cin >> n;
    if(n%2==0)
    {
        m = n/2;
        while(m>=0)
        {
            sum=sum+m;
            m=m-1;
        }
    }
    else
    {
        m = (n-1)/2;
        while(m>=0)
        {
            sum=sum+m;
            m=m-1;
        }
    }
    cout << 2*sum;
    return 0;
}
