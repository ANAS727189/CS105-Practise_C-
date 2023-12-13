#include <stdio.h>
int N = 0;
float determinant(float matrix[N][N], int n) {
if (n == 1) {
return matrix[0][0];
}
int sign = 1;
float smallerDter[N][N], D = 0;
for (int f = 0; f < n; f++) {
int i = 0, j = 0;
for (int row = 0; row < n; row++) {
for (int col = 0; col < n; col++) {
if (row != 0 && col != f) {
smallerDter[i][j++] = matrix[row][col];
if (j == n - 1) {
j = 0;
i++;
}
}
}
}
D += sign * matrix[0][f] * determinant(smallerDter, n - 1);
sign = -sign;
}
return D;
}
int main() {
do {
printf("Enter matrix size(rows/columns) (min 1) (max 50): ");
scanf("%i", &N);
} while ((N < 1) || (N > 50));
float matrix[N][N];
printf("Enter the elements of the matrix: ");
for (int i = 0; i < N; i++) {
for (int j = 0; j < N; j++) {
printf("\nMatrix[%i][%i]: ", i + 1, j + 1);
scanf("%f", &matrix[i][j]);
}
}
printf("Determinant of the matrix is : %f\n", determinant(matrix, N));
return 0;
}