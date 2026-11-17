#include <stdio.h>
#include <stdlib.h>

int main(){
 int **p;
 int n;

 printf("Enter the number of element: ");
 scanf("%d", &n);

 p = malloc(n * sizeof(int *));

 for(int i = 0 ; i < n ; i++)
  p[i] = malloc(n * sizeof(int));
 
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      if(j == 0 || j == i){
         p[i][j] = 1;
      }else if(j > i){
          p[i][j] = 0;
      }else{
        p[i][j] = p[i - 1][j - 1] + p[i - 1][j]; 
      }
    }
  }

  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
      printf("%d ",p[i][j] );
    }
    printf("\n");
  }

  //Free

  for(int i = 0 ; i < n ; i++){
      free(p[i]);
  }
  free(p);
  
  return 0;

}
