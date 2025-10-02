#include <iostream>
using namespace std;

int main() {
    int num, maximum;
    bool first = true;

    while (true) {
        cin >> num;
        if (num == 0) break;
        if (first || num > maximum) {
            maximum = num;
            first = false;
        }
    }

    if (!first) cout << maximum;
    return 0;
}
