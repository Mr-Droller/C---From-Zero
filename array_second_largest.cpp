#include <stdio.h>

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    int length = sizeof(array) / sizeof(array[0]);

    int largest = array[0];
    int second_largest = array[1];

    if (second_largest > largest) {
        int temp = largest;
        largest = second_largest;
        second_largest = temp;
    }

    for (int x = 2; x < length; x++) {
        if (array[x] > largest) {
            second_largest = largest;
            largest = array[x];
        }
        else if (array[x] > second_largest) {
            second_largest = array[x];
        }
    }
    
    printf("%d", second_largest);
	// hard jump from beginner level arrays 

    return 0;
}
