#include <iostream>

/*
	Learned that:

	+adding '()' to the end of 'new int [x]' will initialize all elements to 0
	+you can initialize an entire array to 0 in declaration without an '=' by doing 'int arr[x] {};'

*/


using namespace std;

int main()
{
	const int size = 10;
	unique_ptr<int[]> pIntArr(new int[size]());	//are all values initailized for me to 0?
	unique_ptr<int[]> pIntArr2(new int[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
	

	int iSecondArr[size] {};

	//output sizes
	cout << "Size of pIntArr:" << sizeof(pIntArr);
	cout << "\nSize of iSecondArr:" << sizeof(iSecondArr) << endl;

	//output elements
	for (size_t i = 0; i < size; i++)
	{
		cout << "pIntArr[" << i << "]=" << pIntArr[i] << endl;
		cout << "iSecondArr[" << i << "]=" << iSecondArr[i] << endl;
		cout << "pIntArr2[" << i << "]=" << pIntArr2[i] << endl;
	}
}