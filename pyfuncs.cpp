#include <vector>
#include <string>
#include <cmath>
using namespace std;

vector<string> split(string str, string separator)
{
    vector<string> strv = {""};

    int from = 0, to = 0;

    for(int i = 0; i < str.length(); i++)
    {
        if(i >= to && i <= from - 1)
        {
            continue;
        }
        else if(str[i] == separator[0] && i + separator.length() < str.length())
        {
            string temp_str;
            for(int j = i; j < i + separator.length(); j++)
            {
                temp_str += str[j];
            }

            if(temp_str == separator)
            {
                if(!strv[strv.size() - 1].empty()){
                    strv.push_back("");
                }

                to = i;
                from = i + separator.length();
            }
        }
        else
        {
            strv[strv.size() - 1] += str[i];
        }
    }

    return strv;
}

int toInt(string str)  // Тоже самое что int() в python
{
    int result = 0, i = 0; 
	
    for(i; i < str.length(); i++)
    {
        if(str[i] < 48) continue;
        result += (str[i] - 48) * pow(10, str.length() - i - 1);
    }
	
    if(str[0] == 45) result = -(result);
	
    return result;
}
