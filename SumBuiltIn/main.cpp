#include <iostream>
using namespace std;

int sumArray(int arr[], int arraySize);

int main()
{
	int myArray[] {2, 4, 12, 13, 20, 15, 200, 35};
	int sumArr = sumArray(myArray, 8);
	cout << "Sum of the array of elements is: " << sumArr << endl;
}

int sumArray(int arr[], int arraySize)
{
	int sum = 0;
	
	for (int i = 0; i < arraySize; i++)
	{
		sum += arr[i];
	}

	return sum;
}