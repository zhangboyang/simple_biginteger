#include <iostream>
#include "BigInt.h"

using namespace std;

int main()
{
    char ch;
    int af, bf;
    string a, b;
    while (cin >> ch && ch != '@') {
        cin >> a >> b;
        af = bf = 0;
        if (a.length() > 1 && a[0] == '-') {
            a = a.substr(1);
            if (cmp(a, "0") != 0)
                af = 1;
        }
        if (b.length() > 1 && b[0] == '-') {
            b = b.substr(1);
            if (cmp(b, "0") != 0)
                bf = 1;
        }
        if (!isnum(a) || !isnum(b)) {
            cout << "ERROR: illegal number." << endl;
            continue;
        }

        switch (ch) {
            case '-':
                if (cmp(b, "0") != 0) bf = !bf;
            case '+':
                if (af == bf) {
                    if (af) cout << '-';
                    cout << add(a, b) << endl;
                } else {
                    if (af) swap(a, b);
                    if (cmp(a, b) >= 0)
                        cout << sub(a, b) << endl;
                    else
                        cout << '-' << sub(b, a) << endl;
                }
                break;

            case '*':
                if (af != bf && cmp(a, "0") != 0 && cmp(b, "0") != 0)
                    cout << '-';
                cout << mul(a, b) << endl;
                break;

            case '/':
                if (cmp(b, "0") == 0)
                    cout << "ERROR: divided by zero." << endl;
                else {
                    if (cmp(a, b) < 0)
                        cout << "0" << endl;
                    else {
                        if (af != bf && cmp(a, "0") != 0)
                            cout << '-';
                        cout << div(a, b) << endl;
                    }
                }
                break;

            default:
                cout << "ERROR: illegal operator." << endl;
        }
    }
    return 0;
}
