
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int Note100 = 0;
    int Note50 = 0;
    int Note20 = 0;
    int Note10 = 0;
    int Note1 = 0;

    switch (1) {
        case 1:
            Note100 = n / 100;
            n = n % 100;

        case 2:
            Note50 = n / 50;
            n = n % 50;

        case 3:
            Note20 = n / 20;
            n = n % 20;

        case 4:
            Note10 = n / 10;
            n = n % 10;

        case 5:
            Note1 = n;
    }

    cout << "100 notes: " << Note100 << endl;
    cout << "50 notes: " << Note50 << endl;
    cout << "20 notes: " << Note20 << endl;
    cout << "10 notes: " << Note10 << endl;
    cout << "1 notes: " << Note1 << endl;

    return 0;
}
//when case 1 moves to other cases without a break we call it fall through.