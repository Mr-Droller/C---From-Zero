#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char string1[] = "madam";
	int length = strlen(string1);
	int count = 0;
	
	for(int i = 0; i < length/2; i++){
		if(string1[i] == string1[length - 1 - i]){
			count = count + 1;
		}
	}
	
	if(count == length/2){
		printf("It is a palindrome");
	}else{
		printf("It is not a palindrome");
	}
	return 0;
}
