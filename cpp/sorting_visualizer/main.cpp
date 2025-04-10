#include <iostream>
#include <vector>
#include <iomanip>
#include <thread>
#include <chrono>

using namespace std;

void printArray(const vector<int>& arr, int highlight1 = -1, int highlight2 = -1) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (i == highlight1 || i == highlight2)
            cout << "[" << setw(2) << arr[i] << "] ";
        else
            cout << " " << setw(2) << arr[i] << "  ";
    }
    cout << endl;
}

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    cout << "\n🔁 Starting Bubble Sort...\n\n";

    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            printArray(arr, j, j + 1);
            this_thread::sleep_for(chrono::milliseconds(500));

            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        cout << "\n";
        if (!swapped) break;
    }

    cout << "✅ Sorting complete!\n\n";
    printArray(arr);
}

int main() {
    cout << "📊 Welcome to Sorting Visualizer (C++)\n\n";
    cout << "Enter number of elements to sort: ";

    int n;
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " numbers separated by spaces:\n";

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bubbleSort(arr);

    return 0;
}
