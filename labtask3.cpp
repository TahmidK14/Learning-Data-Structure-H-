#include <iostream>
using namespace std;



struct Student {
    string name;
    int id;
    float cgpa;
};



void insertionSort(Student arr[], int n) {
    int i, j;
    Student key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;



        while (j >= 0 && arr[j].cgpa > key.cgpa) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}



void bubbleSort(Student arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].cgpa > arr[j + 1].cgpa) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}



void selectionSort(Student arr[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j].cgpa < arr[minIndex].cgpa) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}



void displayElements(Student arr[], int n) {
    cout << "Student Details:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Name: " << arr[i].name << ", ID: " << arr[i].id << ", CGPA: " << arr[i].cgpa << endl;
    }
    cout << endl;
}



int binarySearch(Student arr[], int low, int high, float cgpa) {
    if (high >= low) {
        int mid = low + (high - low) / 2;
        if (arr[mid].cgpa == cgpa) {
            return mid;
        }
        if (arr[mid].cgpa > cgpa) {
            return binarySearch(arr, low, mid - 1, cgpa);
        }
        return binarySearch(arr, mid + 1, high, cgpa);
    }
    return -1;
}



int main() {
    const int SIZE = 4;
    Student students[SIZE];



    cout << "Enter student details:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "ID: ";
        cin >> students[i].id;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
        cout << endl;
    }

        cout<<"select an option to sort cgpa"<<endl;
        cout<<"1. Selection sort"<<endl;
        cout<<"2. Bubble sort"<<endl;
        cout<<"3. Insertion sort"<<endl;

        int option;
        cin>>option;

        switch (option)
        {
        case 1:
    cout << "Applying Selection Sort..." << endl;
    selectionSort(students, SIZE);
    displayElements(students, SIZE);
    break;

        case 2:
    cout << "Applying Selection Sort..." << endl;
    selectionSort(students, SIZE);
    displayElements(students, SIZE);
    break;

        case 3:
    cout << "Applying Insertion Sort..." << endl;
    insertionSort(students, SIZE);
    displayElements(students, SIZE);
    break;


        }
        float searchCGPA;
    cout << "Enter CGPA to search: ";
    cin >> searchCGPA;



    int result = binarySearch(students, 0, SIZE - 1, searchCGPA);



    if (result == -1) {
        cout << "CGPA not found." << endl;
    } else {
        cout << "CGPA found at index " << result << "." << endl;
        cout << "Name: " << students[result].name << ", ID: " << students[result].id << ", CGPA: " << students[result].cgpa << endl;
    }



    return 0;
}
