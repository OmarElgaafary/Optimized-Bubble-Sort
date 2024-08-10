#include <iostream>
void printarr(int arr[], int length) {
    std::cout << "[";
    for (int i = 0; i < length; i++) {
        std::cout << arr[i];
        if (i <length - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]";

}

void BubbleDoWhile (int arr[], int length);


int main() {
    int data[9] = {5, 7, 8 ,1, 2, 3, 9 , 4, 6};


    BubbleDoWhile(data, 9);
    printarr(data, 9);

}

void BubbleDoWhile (int arr[], int length) {

    bool swapped;

    do {
        swapped = false;
        for (int i = 0 ; i < length -1; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = true;

            }
        }


    } while (swapped);

}
