#include <iostream>
#include <cstdlib> // for rand()
using namespace std;

// ================== BUBBLE SORT ==================
void bubbleSort(int arr[], int n, bool ascending, int &comparisons, int &swaps) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
}

// ================== SELECTION SORT ==================
void selectionSort(int arr[], int n, int &comparisons, int &swaps) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            swaps++;
        }
    }
}

// ================== AUTOMATIC TESTING ==================
void testSizes() {
    int sizes[] = {1, 2, 3, 4, 5, 10, 250, 999, 9999};

    for (int s = 0; s < 9; s++) {
        int n = sizes[s];

        int *arrBubble = new int[n];
        int *arrSelection = new int[n];

        // Generate random values and copy to both arrays
        for (int i = 0; i < n; i++) {
            int value = rand() % 10000;
            arrBubble[i] = value;
            arrSelection[i] = value;
        }

        int compB = 0, swapsB = 0;
        int compS = 0, swapsS = 0;

        bubbleSort(arrBubble, n, true, compB, swapsB);
        selectionSort(arrSelection, n, compS, swapsS);

        cout << "\nSize: " << n << endl;
        cout << "Bubble Sort -> Comparisons: " << compB << ", Swaps: " << swapsB << endl;
        cout << "Selection Sort -> Comparisons: " << compS << ", Swaps: " << swapsS << endl;

        delete[] arrBubble;
        delete[] arrSelection;
    }
}

// ================== MAIN FUNCTION ==================
int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];
    int *arrCopy = new int[n];

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        arrCopy[i] = arr[i]; // copy for selection sort
    }

    int comparisons = 0, swaps = 0;

    // ----- Bubble Sort -----
    bubbleSort(arr, n, true, comparisons, swaps);
    cout << "\nBubble Sort Result: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nComparisons: " << comparisons << " Swaps: " << swaps << endl;

    // ----- Selection Sort -----
    comparisons = 0;
    swaps = 0;
    selectionSort(arrCopy, n, comparisons, swaps);
    cout << "\nSelection Sort Result: ";
    for (int i = 0; i < n; i++) cout << arrCopy[i] << " ";
    cout << "\nComparisons: " << comparisons << " Swaps: " << swaps << endl;

    delete[] arr;
    delete[] arrCopy;

    // ----- Automatic Testing -----
    cout << "\nRunning automatic tests on predefined sizes...\n";
    testSizes();

    return 0;
}