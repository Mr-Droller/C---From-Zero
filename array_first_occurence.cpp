#include <stdio.h>
int main(){
	int array[] = {2,2,2,4,5};
	int index;
	int num = 2;
	int length = sizeof(array) / sizeof(array[0]);
	for(int x = length; x < length; x++){
		if(num == array[x]){
			index = x;
			break;
		}
	}
	
	printf("%d", index);
	return 0;
}
