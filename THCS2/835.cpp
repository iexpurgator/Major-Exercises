#include <bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void insertionSort(int arr[], int n)
{
	int insert;
	for (int i = 1; i < n; i++)
	{
		int k;
		insert = arr[i];
		k = i - 1;
		/*
		Tại vị trí k nếu phần tử của mảng lớn hơn insert đang sét thì chuyển giá trị arr[k] vào vị trí của insert(lúc này là k+1) sau đó dịch vị ví k lùi lại kiểm tra tiếp
		- nếu vẫn lớn hơn thì gán arr[k] vào vị trí k+1 (lặp lại)
		- nếu không thì gán insert vào vị trí k+1
		*/
		while (k >= 0 && arr[k] > insert)
		{
			arr[k + 1] = arr[k];
			k = k - 1;
		}
		arr[k + 1] = insert;
		print(arr, n);
	}
}

int main()
{
	int arr[100], n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	insertionSort(arr, n);
	return 0;
}