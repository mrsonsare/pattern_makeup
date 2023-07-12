#include <stdio.h>

int main(void) {
  int i = 1,n = 1,a = 1;
  int c;
  printf("\t_____________Print____________\n\n\n");
  printf("1.To Print H\n\n");
  printf("Enter The Value intput :");
  scanf("%d",&c);
  printf("\n");
  switch (c){ 
    case 1 :{
  while (i <=8){
  printf("\t0000000\t\t\t\t\t0000000\n");
    i++;
    continue;
  }
  while (n <=4){
  printf("\t0000000000000000000000000000000\n");
    n++;
  }
  while (a <=8){
  printf("\t0000000\t\t\t\t\t0000000\n");
    a++;
    continue;
  }
    }
  }
  return 0;
}
