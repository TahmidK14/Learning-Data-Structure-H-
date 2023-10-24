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
    float temp=0;
    for (i = 0; i < n ; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].cgpa > arr[j + 1].cgpa) {
                temp=arr[j].cgpa;
                arr[j].cgpa=arr[j+1].cgpa;
                arr[j+1].cgpa=temp;

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



int bS(Student arr[], int low, int high, float cgpa) {
    if (high >= low) {
        int mid = (low + high)/ 2;
        if (arr[mid].cgpa == cgpa) {
            return mid;
        }
        if (arr[mid].cgpa > cgpa) {
            return bS(arr, low, mid - 1, cgpa);
        }
        return bS(arr, mid + 1, high, cgpa);
    }
    return -1;
}



int main() {
    const int SIZE = 4;
    Student students[SIZE];



    cout << "Enter student infoermation:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> students[i].name;
        cout << "Enter ID: ";
        cin >> students[i].id;
        cout << "Enter CGPA: ";
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
    selectionSort(students, SIZE);
    displayElements(students, SIZE);
    break;

        case 2:
    bubbleSort(students, SIZE);
    displayElements(students, SIZE);
    break;

        case 3:
    insertionSort(students, SIZE);
    displayElements(students, SIZE);
    break;


        }
        float cg;
    cout << "Enter CGPA to search: ";
    cin >> cg;



    int index = bS(students, 0, SIZE - 1, cg);



    if (index == -1) {
        cout << "CGPA not found." << endl;
    } else {
        cout << "CGPA found of "<< students[index].name <<" at index " << index << "." << endl;

    }



    return 0;
}
