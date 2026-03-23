#include <iostream>
#include <string>
using namespace std;

int main()
{
    string password;
    cout << "Enter password: ";
    cin >> password;

    int hasUpper = 0;
    int hasLower = 0;
    int hasDigit = 0;
    int hasSymbol = 0;

    int len = password.length();

    // length check
    if (len < 6)
    {
        cout << "Password is NOT strong (length less than 6)";
        return 0;
    }

    // character checking
    for (int i = 0; i < len; i++)
    {
        char ch = password[i];

        if (ch >= 'A' && ch <= 'Z')
        {
            hasUpper = 1;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            hasLower = 1;
        }
        else if (ch >= '0' && ch <= '9')
        {
            hasDigit = 1;
        }
        else
        {
            hasSymbol = 1;
        }
    }

    // final check
    if (hasUpper == 1 && hasLower == 1 && hasDigit == 1 && hasSymbol == 1)
    {
        cout << "Password is STRONG";
    }
    else
    {
        cout << "Password is NOT strong";
    }

    return 0;
}
