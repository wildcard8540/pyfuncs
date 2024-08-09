#include <vector>
#include <string>
using namespace std;

vector<string> split(string str, string separator)
{
    vector<string> strv;

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
                temp_str.clear();

                for(int k = from; k < i; k++)
                {
                    temp_str += str[k];
                }

                if(!temp_str.empty())
                {
                    strv.push_back(temp_str);
                }

                to = i;
                from = i + separator.length();
            }
        }
    }

    if(str.length() - 1 > from)
    {
        string temp_str;

        for(int i = from; i < str.length(); i++){
            temp_str += str[i];
        }

        strv.push_back(temp_str);
    }

    return strv;
}
