#include <iostream>
using namespace std;

int main() {
    
    int ganjil[10];
    int index = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            ganjil[index] = i;
            index++;
        }
    }

    for (int i = 0; i < 10; i++) {
        int *ptr = &ganjil[i];

        cout << "" << ganjil[i] << " : " << ptr << endl;
    }
    return 0;
}