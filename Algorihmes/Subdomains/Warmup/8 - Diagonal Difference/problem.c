#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long arr[n][n];

    int i = 0;
    while (i < n) {
        int j = 0;
        while (j < n) {
            scanf("%ld", &arr[i][j]);
            j++;
        }
        i++;
    }

    long first_diagonal = 0, second_diagonal = 0;
    i = 0;
    while (i < n) {
        first_diagonal += arr[i][i];
        second_diagonal += arr[i][n - 1 - i];
        i++;
    }
     long diagnoal = first_diagonal - second_diagonal ;
    
    if (diagnoal < 0)
    {
         diagnoal = diagnoal * -1 ;
    }
   
    printf("%ld",diagnoal);
}
