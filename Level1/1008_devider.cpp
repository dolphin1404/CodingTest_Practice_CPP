#include <iostream>
//부동 소수점 문제, 문제에서 요구하는 것은 오차범위 10^-9까지
// 허나 float의 오차범위는 10^-7까지 표현한다. double형은 오차범위 10^-15까지 표현한다.
using namespace std;

int main(){
  double A, B;
  cin>> A >> B;
  cout.precision(12);
    cout << fixed;
    cout << A / B;
    return 0;
}