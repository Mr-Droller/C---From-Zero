#include <stdio.h>
int main(){
	int array[] = {1,2,3,4,5};
	int smallest = array[0];
	int second_smallest = array[1];
	int temp = smallest;
	int length = sizeof(array) / sizeof(array[0]);
	
	if(second_smallest < smallest){
		smallest = second_smallest;
		second_smallest = temp;
	}
	
	for (int x = 2; x < length; x++){
		if (smallest > array[x]){
			second_smallest = smallest;
			smallest = array[x];
		} else if (second_smallest > array[x]){
			second_smallest = array[x];
		}
	}
	
	printf("%d", second_smallest);
}
