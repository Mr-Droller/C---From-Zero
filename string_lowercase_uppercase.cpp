#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char string1[] = "PROGRAMMING";
	char string2[] = "gay";
	
	int length1 = strlen(string1);
	int length2 = strlen(string2);
	
	char lowercase[length1 + 1];
	char uppercase[length2 + 1];
	
	for(int i = 0; i < length1; i++){
		lowercase[i] = tolower(string1[i]);
	}
	
	for(int i = 0; i < length2; i++){
		uppercase[i] = toupper(string2[i]);
	}
	
	lowercase[length1] = '\0';
	uppercase[length2] = '\0';
	
	printf("%s\t%s", uppercase, lowercase);
	
	return 0;
}
