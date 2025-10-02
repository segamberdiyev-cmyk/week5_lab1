#include <iostream>
using namespace std;

int main() {
    int count = 0;

    for (int i = 65; i <= 90; i++){
        cout << static_cast<char>(i)<< ":" << i << " ";
        count++;
        if (count % 5 == 0) {
            cout << endl;
        }
    }
    return 0;
}
