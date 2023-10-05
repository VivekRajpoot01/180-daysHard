// #include <iostream>
// using namespace std;
// void insertionSort(int arr[], int n){
//     for (int i = 1; i <= n-1; ++i) {
//         int temp = arr[i];
//         int j = i - 1;
//     }
// }
// int main() {
//     return 0;
// }

//cpp

//cpp
// #include<iostream>
// using namespace std;

// void insertionSort(int arr[], int n)
// {
//     int i, key, j;
//     for (i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while (j >= 0 && arr[j] < key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6, 7 };
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);

//     cout << "Sorted array in decreasing order: \n";
//     printArray(arr, n);

//     return 0;
// }
#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string inputSentence;

    // Prompt the user for input
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, inputSentence); // Read the entire line

    std::istringstream iss(inputSentence);
    std::string word;
    int wordCount = 0;

    while (iss >> word) {
        wordCount++;
    }

    std::cout << "Number of words in the sentence: " << wordCount << std::endl;

    return 0;
}

