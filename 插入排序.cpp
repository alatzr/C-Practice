#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k;
    int a[110];
    
    cin >> n;
    for (i = 0; i < n; i++) cin >> a[i];
    for (i = 1; i < n; i++)
    {   
        k = a[i];
        for (j = i-1; j >= 0; j--)
        {
            if (k < a[j]) 
                a[j+1] = a[j];
            else
                break;
        }
        a[j+1] = k;
    }
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}
