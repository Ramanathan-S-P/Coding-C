#include<stdio.h>
int main(){
//2d array using single pointer
int * a=malloc(3*4*sizeof(int));
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
scanf("%d",(a+i*4+j));
} 
}
for(int i=0;i<3;i++){
for(int j=0;j<4;j++){
printf("%d ",*(a+i*4+j));
}
printf("\n");
}
//2d array using double pointer and parameter passing
/*#include<stdio.h>
#include<stdlib.h>

#define MAX 100


void print_matrix(int *matrix[]) {
	for(int i = 0; i < MAX; i++) {
		for(int j = 0; j < MAX; j++) {
			printf("%d ", matrix[i][j]);
		}
		puts("");
	}
}

int main(int argc, char *argv[]) {
	// int matrix[MAX][MAX];

	// for(int i = 0; i < MAX; i++) {
	// 	for(int j = 0; j < MAX; j++) {
	// 		int data;
	// 		scanf("%d", &data);
	// 		matrix[i][j] = data;
	// 	}
	// }

	int** point_mat = malloc(sizeof(int*) * MAX);

	for (size_t i = 0; i < MAX; i++) {
		point_mat[i] = malloc(sizeof(int) * MAX);
		for(size_t j = 0; j < MAX; j++) {
			point_mat[i][j] = i + 1;
		}
	}

	print_matrix(point_mat);
	return 0;
}*/
}

