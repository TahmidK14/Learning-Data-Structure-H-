#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 1, 2, 3, 4, 5, 4, 5};

    int counts[10] = {0};


    for (int i = 0; i < 10; ++i) {
        int currentElement = arr[i];
        counts[currentElement]++;
    }


    cout << "Element\tCount" <<endl;
    for (int i = 0; i < 10; ++i) {
        if (counts[i] > 0) {
            cout<< i << "\t" << counts[i] <<endl;
        }
    }

    return 0;
}
