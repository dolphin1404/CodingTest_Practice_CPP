#include <stdio.h>
// 중요 char >> int 문제 ASCII 코드
int main(){
  int A;
  char B[4];
  scanf("%d", &A);
  scanf("%s", B);
  
  int x, y, z, w;
  x = A * ((int)B[2] -'0'); // '0'을 해주는 이유 > 우리가 문자로 저장된 숫자가 아닌 우리가 보는 숫자 그대로의 값을 쓰기 위함
  y = A * ((int)B[1]- '0');
  z = A * ((int)B[0]- '0');
  w = x + 10*y + 100*z;
  printf("%d\n", x);
  printf("%d\n", y);
  printf("%d\n", z);
  printf("%d\n", w);
  return 0;
}