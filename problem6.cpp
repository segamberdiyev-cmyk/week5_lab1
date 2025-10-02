#include <iostream>
using namespace std;

int main() {
    float sum = 0, x;

    for (int i = 0; i < 3; i++) {
        cin >> x;
        sum += x;
    }
    cout <<" Your Total GPA is "<< sum /3<< endl;
    return 0;
}
