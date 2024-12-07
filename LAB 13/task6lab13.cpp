#include <iostream>
using namespace std;

template <class T>
class ArrayStats {
    T *data;
    int length;

public:
    ArrayStats(int size) {
        length = size;
        data = new T[length];
    }

    ~ArrayStats() {
        delete[] data;
    }

    void setValue(int idx, T val) {
        if (idx >= 0 && idx < length) {
            data[idx] = val;
        }
    }

    T getMax() {
        T maxVal = data[0];
        for (int i = 1; i < length; i++) {
            if (data[i] > maxVal) {
                maxVal = data[i];
            }
        }
        return maxVal;
    }

    T getMin() {
        T minVal = data[0];
        for (int i = 1; i < length; i++) {
            if (data[i] < minVal) {
                minVal = data[i];
            }
        }
        return minVal;
    }
};

int main() {
    cout << "NAME: MAHNOOR HUSSAIN " << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    int size = 5;
    ArrayStats<int> intArray(size);
    ArrayStats<float> floatArray(size);

    cout << "Enter 5 integer values: ";
    for (int i = 0; i < size; i++) {
        int value;
        cin >> value;
        intArray.setValue(i, value);
    }

    cout << "Maximum (int): " << intArray.getMax() << endl;
    cout << "Minimum (int): " << intArray.getMin() << endl;

    cout << "Enter 5 float values: ";
    for (int i = 0; i < size; i++) {
        float value;
        cin >> value;
        floatArray.setValue(i, value);
    }

    cout << "Maximum (float): " << floatArray.getMax() << endl;
    cout << "Minimum (float): " << floatArray.getMin() << endl;

}
