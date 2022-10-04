#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter any character :";
    cin >> ch;
    switch (ch)
    {
        case 'A':
        case 'a':
        case 'U':
        case 'u':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
            cout << "vowel";
            break;
        default:
            cout << "consonant";
    }
    return 0;
}