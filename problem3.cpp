#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 5 == 0) continue; // skip numbers divisible by 5
        cout << i << " ";
    }
    return 0;
}
