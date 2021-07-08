# include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd1(a, b)<< endl;
    return 0;
}

int gcd(int a, int b)
{
    int r;
    r = a % b;
    while (r)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}