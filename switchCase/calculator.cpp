#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    char op;
    cin >> op;

    switch (op) {
        case '+': {
            cout << a + b << endl;
            break;
        }

        case '-': {
            cout << a - b << endl;
            break;
        }

        case '*': {
            cout << a * b << endl;
            break;
        }

        case '/': {
            if (b != 0)
                cout << a / b << endl;
            else
                cout << "Division by zero not allowed";
            break;
        }

        default:
            cout << "Invalid operator";
    }

    return 0;
}