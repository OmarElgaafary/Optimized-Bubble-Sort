#include <iostream>



void funcprint(int array[], int length);
void BubbleDo(int arr[], int n);





int main() {
	

	int a[10] = { 5, 2, 6, 4, 3, 1,10 ,6 ,4 , 7 };

	BubbleDo(a, 10);

}

void funcprint(int array[], int length) {
	std::cout << "[";
	for (int i = 0; i < length; i++) {
		std::cout << array[i];
		if (i < length - 1) {
			std::cout << ", ";
		}
	}
	std::cout << "]";
}


void BubbleDo(int arr[], int n) {
	bool swapped;
	int counter = 0;
	do {
		swapped = false;
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				swapped = true;
			}

		}
		if (swapped) {
			counter++;
			funcprint(arr, n);
			std::cout << "passes #" << counter;
			std::cout << std::endl;
		}

	} while (swapped);
}
