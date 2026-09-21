#include <stdio.h>
int main(){
	int array[] = {2,2,3,4,5};
	int input, i;
	int count = 0;
	int length = sizeof(array) / sizeof(array[0]);
	printf("Enter a Number: ");
	scanf("%d", &input);
	for(i = 0; i < length; i++){
		if(input == array[i]){
			count = count + 1;
		}
	}
	printf("Your number is in the array %d times!", count);
	return 0;
}
