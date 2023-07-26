//temperature tracker
#include <iostream>
using namespace std;

int main() {
    float temperature[7];
    string dayNames[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "Enter temperatures for this week" << endl;

    for (int i = 0; i < 7; i++) {
        cout << dayNames[i] << ": ";
        cin >> temperature[i];
    }

    float sum = 0;
    for (int i = 0; i < 7; i++) {
        sum += temperature[i];
    }
    float average = sum / 7;

    cout << "Average temperature for the week: " << average << endl;

    return 0;
}
