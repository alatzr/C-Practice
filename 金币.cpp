#include <bits/stdc++.h>

using namespace std;

void func(int day)
{   
    int sum = 0;
    int salary = 1;  // ��ǰн��
    int n = 1; // ��������
    for (int i = 1; i <= day; i ++)  // 6 , 1 2 2 3 3 3 4 
        {
            sum += salary;
            if (n == salary)  // ������������нˮ��ƽ���͸ü�н��
            {
                salary ++;
                n = 0;
            }
            n++;
        }
    cout << sum << endl;
}

int main()
{
    int day;
    cin >> day;
    func(day);
    
    return 0;
}


