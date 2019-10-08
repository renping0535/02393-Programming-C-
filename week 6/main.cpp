#include <iostream>
#include <string>

using namespace std;

class fraction
{
private:
    int numerator;
    int denominator;

public:
    // constructor
    fraction();
    fraction(int n, int d);

    // methods to update, addition, multiplication, division
    fraction add(fraction f);
    fraction mult(fraction f);
    fraction div(fraction f);
    // method to find the biggest common divisor
    int gcd(int n, int d);
    // method to display
    void display(void);

};
// constructor
fraction::fraction()
{
    numerator = 0;
    denominator = 1;
}
fraction::fraction(int n, int d)
{
    numerator = n;
    denominator = d;
    if(d==0)
        cout << "Error! The value of denominator couldn't be 0!" << endl;
}
// member function outside class definition
fraction fraction::add(fraction f)
{
    numerator = numerator*f.denominator + denominator*f.numerator;
    denominator = denominator*f.denominator;

    int common_divisor = gcd(numerator,denominator);
    numerator = numerator/common_divisor;
    denominator = denominator/common_divisor;

    return fraction(numerator,denominator);
}
fraction fraction::mult(fraction f)
{
    numerator = numerator*f.numerator;
    denominator = denominator*f.denominator;

    int common_divisor = gcd(numerator,denominator);
    numerator = numerator/common_divisor;
    denominator = denominator/common_divisor;

    return fraction(numerator,denominator);
}
fraction fraction::div(fraction f)
{
    numerator = numerator*f.denominator;
    denominator = denominator*f.numerator;

    int common_divisor = gcd(numerator,denominator);
    numerator = numerator/common_divisor;
    denominator = denominator/common_divisor;

    return fraction(numerator,denominator);
}
// find the biggest common divisor
int fraction::gcd(int n, int d)
{
    int reminder;
    while(d != 0)
    {
        reminder = n % d;
        n = d;
        d = reminder;
    }
    return n;
}
void fraction::display()
{
    cout << numerator << " / " << denominator << endl;
}

int main()
{
    int n1, d1, n2, d2;
    string act1, act2, act3;

    int flag = 2;
    while(flag >= 0)
    {
        cin >> n1 >> act1 >> d1 >> act2 >> n2 >> act3 >> d2;
        fraction c;
        if(act2 == "+")
        {
            fraction a(n1,d1);
            fraction b(n2,d2);
            c = a.add(b);
            c.display();
        }
        if(act2 == "*")
        {
            fraction a(n1,d1);
            fraction b(n2,d2);
            c = a.mult(b);
            c.display();
        }
        if(act2 == "div")
        {
            fraction a(n1,d1);
            fraction b(n2,d2);
            c = a.div(b);
            c.display();
        }
        flag = flag - 1;
    }
    return 0;
}
