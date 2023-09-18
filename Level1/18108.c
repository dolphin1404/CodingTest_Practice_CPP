#include <stdio.h>

int main(){
  int year_t = 0;
  int year_g = 0;
  scanf("%d", &year_t);

  if(year_t >= 1000 && year_t <= 3000 ){
    year_g = year_t - 543;
    printf("%d", year_g);
  }
  return 0;
}
