#include <stdio.h>

int main() {
    int array[5] = {2, 1, 4, 3, 5};
    int length = sizeof(array) / sizeof(array[0]);

    int largest = array[0];
    int second_largest = array[1];
	int third_largest = array[2];
	int temp1 = largest;
	int temp2 = second_largest;
	
	if (largest > second_largest && largest > third_largest){
		if(second_largest > third_largest){
			
		}else{
			second_largest = third_largest;
			third_largest = temp2;
		}
	}else if(second_largest > largest && second_largest > third_largest){
		largest = second_largest;
		second_largest = temp1;
		if(second_largest > third_largest){
			
		}else if(third_largest > second_largest){
			second_largest = third_largest;
			third_largest = temp2;
		}
	}else{
		largest = third_largest;
		third_largest = temp1;
		if(third_largest > second_largest){
			second_largest = third_largest;
			third_largest = temp2;
		}
	}
	
	for(int x = 3; x < length; x++){
		if(array[x] > largest){
			third_largest = second_largest;
			second_largest = largest;
			largest = array[x];
		} else if (array[x] > second_largest){
			third_largest = second_largest;
			second_largest = array[x];
		}else if (array[x] > third_largest){
			third_largest = array[x];
		}
	}
	
    printf("%d", third_largest);
    
	/*  Done by my own wit, I'm so proud of this lol.
		Needs alot of optimization for sure, Especially in the if and else statement  */	
    return 0;
}
