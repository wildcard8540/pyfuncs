# pyfuncs
Бибилотека с функциями Python которых очень не хватает в C++

Пример использования:

```cpp
#include <iostream>
#include <vector>
#include "main.cpp"

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    string separator = ", ";
    vector<string> splited = split(str, ", ");

    for(string i : splited)
    {
        cout << i << endl;
    }
}
```
