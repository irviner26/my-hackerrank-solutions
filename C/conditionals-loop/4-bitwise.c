#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  int maxand;
  int maxor;
  int maxxor;
  int opand;
  int opor;
  int opxor;
  maxand = 0;
  maxor = 0;
  maxxor = 0;
  for (int a = 1; a < n; a+=1) 
  {
      for (int b = a+1; b <= n; b+=1)
      {
          opand = a & b;
          if (maxand < opand && opand < k) {maxand = opand;}
          opor = a | b;
          if (maxor < opor && opor < k) {maxor = opor;}
          opxor = a ^ b;
          if (maxxor < opxor && opxor < k) {maxxor = opxor;}
      }
  }
  printf("%d\n", maxand);
  printf("%d\n", maxor);
  printf("%d", maxxor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
