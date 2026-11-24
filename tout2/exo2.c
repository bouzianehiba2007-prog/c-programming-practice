#include <stdio.h>
#include <stdlib.h>

int* AllocateArray(int N){
   int *arr = malloc(N * sizeof(int));

   if (arr == NULL)
    return NULL;

   for (int i = 0; i <= N; i++)
     *(arr + i) = (i + 1) * 5;
     
   return arr;
}

int main(){
  int N;
  printf("Enter number of elements:");
  scanf("%d", &N);


  int *T = AllocateArray(N);

  if (T == NULL)
  {
    printf("Memory allocation falied\n");
    return 1;
  }

  printf("The first %d multiples of 5 are:\n", N);

  for (int i = 0; i < N; i++)
  {
    printf("%d ", *(T + i));
  }
  
  free(T);

  return 0;

}