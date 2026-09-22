#include <stdio.h>
int main(){
	int array[5] = {1,2,3,4,5};
	int length = sizeof(array) / sizeof(array[0]);
	int size = length;
	int temp[5];
	int i;
	for(i=0;i<length;i++){
		temp[i] = array[size - 1];	// Note:  temp[i] = array[length - 1 - i];
		size = size - 1;
		printf("%d ", temp[i]);
	}
	
	return 0;
}
