#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "Enter the size of string: ";
    cin >> str;


    int n = str.length();

    cout << "The frequency of elements in the string is: " << endl;
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        if (str[i] != '@')
        {
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                {
                    count++;
                    str[j] = '@'; // Mark as counted
                }
            }
            cout << str[i] << " occurs " << count << " times" << endl;
        }
    }

    return 0;
}