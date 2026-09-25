#include <stdio.h>

int main()
{
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
	
	int x,y;
	int temp[3][3];
	
	for(x = 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			printf("%d\t", arr[y][x]);
			}
			printf("\n");
		}
	
	
	for (x = 0; x < 3; x++){
		for(y = 0; y < 3; y++){
			printf("%d", arr[x][y]);
			}
			printf("\n");
	}
	return 0;
}
	
