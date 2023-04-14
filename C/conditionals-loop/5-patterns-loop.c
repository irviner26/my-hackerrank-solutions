#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int pr;
    int pw;
    int matrx = (2*n)-1;
  	for (int i = 1; i <= n; i++) {
          if (i == 1) {
              for (int k1 = 1; k1 <= matrx; k1++)
              {printf("%d ", n);}
              printf("\n");
          }
          if (i >= 2 && i <= n) {
          for (int j = 0; j <= matrx-1; j++) {
              if (j >= 0 && j <= i-2) {
                    pr = n - j;
                    printf("%d ", pr);
              }
              else if (j > i-2 && j <= matrx-i) {
                    pw = n - (i-1);
                    printf("%d ", pw);
              }
              else if (j > matrx-i) {
                    printf("%d ", pr++);
              }
          }
          printf("\n");
          }
          
      }
    for (int l = n-1; l >= 1; l--) {
          if (l == 1) {
              for (int k2 = 1; k2 <= matrx; k2++)
              {printf("%d ", n);}
              printf("\n");
          }
          if (l <= n-1 && l >= 2) {
          for (int j = 0; j <= matrx-1; j++) {
              if (j >= 0 && j <= l-2) {
                    pr = n - j;
                    printf("%d ", pr);
              }
              else if (j > l-2 && j <= matrx-l) {
                    pw = n - (l-1);
                    printf("%d ", pw);
              }
              else if (j > matrx-l) {
                    printf("%d ", pr++);
              }
          }
          printf("\n");
          }
          
      }
    return 0;
}
