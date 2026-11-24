#include <stdio.h>
int factorial(int n);
int main(){
  int n = 1;

  printf("%d", factorial(n));
}

int factorial(int n){
  if (n == 0 || n == 1)
  {
    return 1;
  }else{
    return n * factorial(n - 1);
  }

}