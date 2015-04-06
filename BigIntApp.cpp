#include <iostream>
#include "BigInt.h"

using namespace std;

int main()
{
    char ch;
    string a, b;
    while (cin >> ch && ch != '@') {
        cin >> a >> b;
        if (!isnum(a) || !isnum(b)) {
            cout << "ERROR: illegal number." << endl;
            continue;
        }

        switch (ch) {
            case '+':
                cout << add(a, b) << endl;
                break;

            case '-':
                if (cmp(a, b) < 0)
                    cout << "ERROR: a is less than b." << endl;
                else
                    cout << sub(a, b) << endl;
                break;

            case '*':
                cout << mul(a, b) << endl;
                break;

            case '/':
                if (cmp(b, "0") == 0)
                    cout << "ERROR: divided by zero." << endl;
                else
                    cout << div(a, b) << endl;
                break;

            default:
                cout << "ERROR: illegal operator." << endl;
        }
    }
    return 0;
}
