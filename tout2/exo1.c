#include <stdio.h>
#include <stdlib.h>
int* Creat_display(int N){

   int *arr = malloc(N * sizeof(int));

   if (arr == NULL)
   return NULL;

   for (int i = 0; i < N; i++)
   {
    printf("arr[%d]: ", i + 1 );
    scanf("%d", arr + i);
   }
   for (int i = 0; i < N; i++)
  {
    printf("%d ", *(arr + i));
  }

   free(arr);
   return arr;

}

int main (){
 Creat_display(10);

  return 0;
  
}