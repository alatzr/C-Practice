# Vector 容器的例子

```
# include <iostream>
# include <vector>

using namespace std;

int main() {
    
    vector<int>add;   // vector<数据类型> 名字
    for (int i = 0; i <= 10; i++)
    {
        add.push_back(i);      // push_back(arrt)往容器末尾增加内容
        cout << add[i] << '|';
    }
    cout << endl;
    
    int n = 10;
    while(n > 5) 
    {
        add.pop_back();  // pop_back()默认删除末尾内容
        n--;
    }
    
    for (int i = 0; i < add.size(); i++) cout << add[i] << '|';
    
	return 0;
}

```
*输出：*

0|1|2|3|4|5|6|7|8|9|10|

0|1|2|3|4|5|
