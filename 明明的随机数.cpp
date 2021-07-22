#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int sum = 0, arr[10010] = {0};
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        if (arr[x]) continue;
        else
        {
            arr[x]++;
            sum++;
        }
    }
    cout << sum << endl;
    for(int i = 0; i < 1000; i++)
        if(arr[i]) cout << i <<' ';
    cout << endl;
    
    return 0;
    
}

