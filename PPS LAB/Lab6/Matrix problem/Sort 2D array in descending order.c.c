#define ROW 10
#define COL 10
# include <stdio.h>
  int main() {
        int mat[ROW][COL];
        int i, j, k, l, n, tmp;

        /* get the order of the matrix from the user */
        printf("Enter the order of the matrix:");
        scanf("%d", &n);

        /* get the matrix entries from the user */
        printf("Enter your entries for the input mat:\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        scanf("%d", &mat[i][j]);
                }
        }

        /* sort the contents of the two dimensional array */
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        tmp = mat[i][j];
                        l = j + 1;
                        for (k = i; k < n; k++) {
                                while (l < n) {
                                        /* swapping the data */
                                        if (tmp < mat[k][l]) {
                                                tmp = mat[k][l];
                                                mat[k][l] = mat[i][j];
                                                mat[i][j] = tmp;
                                        }
                                        l++;
                                }
                                l = 0;
                        }
                }
        }

        /* print the result */
        printf("\n");
        printf("Resultant Matrix:\n");
        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        printf("%d ", mat[i][j]);
                }
                printf("\n");
        }
        return 0;
  }