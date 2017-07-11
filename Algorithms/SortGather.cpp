#include<iostream>
using namespace std;

/*冒泡排序*/
void bubble(int a[], int count) {
	int temp;
	for (int i = 0;i < count;i++) {
		for (int j = 0;j < count - i;j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0;i < count;i++) {
		cout << a[i]<<endl;
	}
}

/*插入排序*/
void insertArray(int a[], int n) {
	int cmp, time, tmp;
	time = 0;
	for (int i = 0;i < n-1;i++) {
		cmp = i;
		while (a[i+1]<a[cmp]) {
			time++;
			cmp--;
		}
		tmp = a[i + 1];
		for (int j = 0;j < time;j++) {
			a[i + 1 - j] = a[i - j];
		}
		a[cmp+1] = tmp;
	}

}

/*打印数组*/
void printArray(int a[], int n) {
	for (int i = 0;i < n;i++) {
		cout << a[i] << endl;
	}
}

void quickSort(int a[], int left, int right) {
	int i, j, index;
	if (left>=right) {
		return;
	}
	i = left;
	j = right;
	index = a[left];
	while (i != j) {
		while (a[j] >= index&&i<j) {
			j--;
		}
		while (a[i] <= index&&i<j) {
			i++;
		}
		if (i < j) {
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	
	a[left] = a[i];
	a[i] = index;
	quickSort(a, left, i - 1);
	quickSort(a, i + 1, right);
}

int fib(int n) {
	if (n == 1 || n == 2) {
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}


int main() {
	int a[10] = { 2,34,5,6,7,2,12,32,1,5 };
	//bubble(a, 10);
	//quickSort(a, 0, 9);
	//int fibo = fib(8);
	//cout << fibo;
	insertArray(a,10);
	printArray(a, 10);
	system("pause");
	return 0;
}
