#include <stdio.h>

int main(void) {
  int m;
  printf("Enter Number :");
  scanf("%d",&m);
  
  for(int i=1;i <= m;i++){
    for(int n = 1;n<=i;n++){
  printf("*");
      
    }
    printf("\n");
  }
  return 0;
}
