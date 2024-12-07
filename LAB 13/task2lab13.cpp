#include <iostream>
using namespace std;

template <class T>
class Sorter {
public:
    void bubbleSort(T arr[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    T temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    void display(T arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    int intArray[] = {12, 44, 3, 55, 7};
    int intSize = 5;

    Sorter<int> intSorter;
    cout << "Before sorting Integers array: ";
    intSorter.display(intArray, intSize);

    intSorter.bubbleSort(intArray, intSize);
    cout << "After sorting Integers array: ";
    intSorter.display(intArray, intSize);

    double doubleArray[] = {12.4,6.8,3.14,2.71,5.20};
    int doubleSize = 5;

    Sorter<double> doubleSorter;
    cout << "Before sorting Doubles array: ";
    doubleSorter.display(doubleArray, doubleSize);

    doubleSorter.bubbleSort(doubleArray, doubleSize);
    cout << "After sorting Doubles array: ";
    doubleSorter.display(doubleArray, doubleSize);

}
