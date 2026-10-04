#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int arr[SIZE] = { -10, 0, 12, 5, -8, 100, 64 };

    // Задание 1
    //for (int i = 0; i < SIZE; ++i) {
    //    for (int j = SIZE - 1; j > i; --j) {
    //        if (arr[j - 1] > arr[j]) {
    //            int temp = arr[j - 1];
    //            arr[j - 1] = arr[j];
    //            arr[j] = temp;
    //        }
    //    }
    //}

    //cout << "Bubble Sort: ";

    //for (int i = 0; i < SIZE; ++i) {
    //    cout << arr[i] << ' ';
    //}
    //cout << '\n';

    //int arr2[SIZE] = { -10, 0, 12, 5, -8, 100, 64 };
    //for (int i = 1; i < SIZE; ++i) {
    //    int temp = arr2[i];
    //    int j = i - 1;

    //    while (j >= 0 && arr2[j] > temp) {
    //        arr2[j + 1] = arr2[j];
    //        --j;
    //    }
    //    arr2[j + 1] = temp;
    //}

    //cout << "Insertion Sort: ";

    //for (int i = 0; i < SIZE; ++i) {
    //    cout << arr2[i] << ' ';
    //}
    //cout << "\n\n";

    // Задание 2
    //const int GRADES_SIZE = 10;
    //double grades[GRADES_SIZE];
    //cout << "Enter 10 grades:\n";

    //for (int i = 0; i < GRADES_SIZE; ++i) {
    //    cin >> grades[i];
    //}

    //cout << "Grades: ";

    //for (int i = 0; i < GRADES_SIZE; ++i) {
    //    cout << grades[i] << ' ';
    //}

    //cout << '\n';

    //int index;
    //double newGrade;

    //cout << "Enter element number to change (1-10): ";
    //cin >> index;

    //if (index >= 1 && index <= GRADES_SIZE) {
    //    cout << "Enter new grade: ";
    //    cin >> newGrade;

    //    grades[index - 1] = newGrade;
    //}

    //double sum = 0;

    //for (int i = 0; i < GRADES_SIZE; ++i) {
    //    sum += grades[i];
    //}

    //double average = sum / GRADES_SIZE;

    //cout << "Average grade: " << average << '\n';

    //if (average >= 10.7) {
    //    cout << "Student receives scholarship!\n";
    //}
    //else {
    //    cout << "Student does not receive scholarship.\n";
    //}

    // Задание 3
    //int arr3[SIZE] = { -10, 0, 12, 5, -8, 100, 64 };

    //int left = 0;
    //int right = SIZE - 1;

    //while (left < right) {

    //    int pivot = arr3[(left + right) / 2];

    //    int i = left;
    //    int j = right;

    //    while (i <= j) {

    //        while (arr3[i] < pivot) {
    //            ++i;
    //        }

    //        while (arr3[j] > pivot) {
    //            --j;
    //        }

    //        if (i <= j) {
    //            int temp = arr3[i];
    //            arr3[i] = arr3[j];
    //            arr3[j] = temp;

    //            ++i;
    //            --j;
    //        }
    //    }

    //    if (left < j) {
    //        right = j;
    //    }
    //    else if (i < right) {
    //        left = i;
    //    }
    //    else {
    //        break;
    //    }
    //}

    //cout << "Quick Sort: ";

    //for (int i = 0; i < SIZE; ++i) {
    //    cout << arr3[i] << ' ';
    //}

    //cout << "\n\n";

    // Задание 4
    //const int SIZE4 = 9;

    //int arr4[SIZE4] = {
    //    10, 3, 7, 2, 9, 1, 8, 4, 6
    //};

    //double sum4 = 0;

    //for (int i = 0; i < SIZE4; ++i) {
    //    sum4 += arr4[i];
    //}

    //double average4 = sum4 / SIZE4;

    //cout << "Average: " << average4 << '\n';

    //int sortSize;

    //if (average4 > 0) {
    //    sortSize = SIZE4 * 2 / 3;
    //}
    //else {
    //    sortSize = SIZE4 / 3;
    //}

    //int curIndex = 0;

    //while (curIndex < sortSize) {

    //    int minIndex = curIndex;

    //    for (int i = curIndex; i < sortSize; ++i) {
    //        if (arr4[i] < arr4[minIndex]) {
    //            minIndex = i;
    //        }
    //    }

    //    if (minIndex != curIndex) {
    //        int temp = arr4[curIndex];
    //        arr4[curIndex] = arr4[minIndex];
    //        arr4[minIndex] = temp;
    //    }

    //    ++curIndex;
    //}


    //int left4 = sortSize;
    //int right4 = SIZE4 - 1;

    //while (left4 < right4) {

    //    int temp = arr4[left4];
    //    arr4[left4] = arr4[right4];
    //    arr4[right4] = temp;

    //    ++left4;
    //    --right4;
    //}

    //cout << "Result: ";

    //for (int i = 0; i < SIZE4; ++i) {
    //    cout << arr4[i] << ' ';
    //}

    //cout << '\n';

    //return 0;
}