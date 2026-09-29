#include <stdio.h>

int main()
{
    int arr1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    int arr2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
	
	int x,y,z;
	int temp[3][3] = {};
	
	for(x = 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			for(z = 0; z < 3; z++){
				temp[x][y] = temp[x][y] + arr1[x][z] * arr2[z][y];
			}
		}
	}
	
	for(x = 0; x < 3; x++){
		for (y = 0; y < 3; y++){
			printf("%d\t", temp[x][y]);
		}
		printf("\n");
	}	
	
	//DONE WITHOUT USING ANY HELP
	
	return 0;
}
	
