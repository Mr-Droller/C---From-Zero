#include <stdio.h>
int main(){
	int array[] = {2,2,3,4,5};
	int index;
	int num = 2;
	int length = sizeof(array) / sizeof(array[0]);
	for(int x = length - 1; x >= 0; x--){
		if(num == array[x]){
			index = x;
			break;
		}
	}
	
	printf("%d", index);
	return 0;
}
