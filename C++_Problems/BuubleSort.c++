#include <iostream>
using namespace std;

void inputArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
}

int main()
{
  int n;
  cout << "Enter the number of element:" << endl;
  cin >> n;

  if (n <= 0) {
        cout << "Invalid number of elements. Please enter a positive number." << endl;
        return 1; // Early exit for invalid input
    }

  int arr[n];
  inputArray(arr, n);

  // Bubble sort with optimization
    bool swapped;
  int i, j, temp;
  for (i = (n - 1); i >= 0; i--)
  {
    swapped = false;
    for (j = 1; j <= i; j++)
    {
      if (arr[j - 1] > arr[j])
      {
        temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        swapped = true;
      }
    }
     if (!swapped)
            break; // Array is sorted
  }

  // printing the sorted array
  cout << "Sorted array using Bubble Sort" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}