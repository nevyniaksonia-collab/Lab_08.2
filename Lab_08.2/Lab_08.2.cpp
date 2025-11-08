#include <iostream>
#include <string>
using namespace std;

size_t MaxLength(const string s)
{
    size_t maxLen = 0;
    size_t start = 0;
    size_t finish = 0;
    size_t len = 0;

    while ((start = s.find_first_of("0123456789", finish)) != string::npos)
    {
        finish = s.find_first_not_of("0123456789", start);
        if (finish == string::npos)
            finish = s.length();

        len = finish - start;
        if (len > maxLen)
            maxLen = len;

        start = finish;
    }

    return maxLen;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    size_t maxDigits = MaxLength(str);
    cout << "Maximum number of consecutive digits: " << maxDigits << endl;

    return 0;
}
