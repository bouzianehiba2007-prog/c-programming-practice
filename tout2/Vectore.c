#include <stdio.h>
#include <stdlib.h>

/*A vector of integer is defined by the following two information: the number n (of elements) and
the array T of its components. The empty vector has a number n=0 and an array T=nil.*/

//Q 1: Define a Vector type to represent vectors of integers.
//Q 2: Write a function that returns the empty vector. 
//Q 3: function AllocateVector (I/nbr : integer) : Vector which dynamically allocates space for the nbr components of the vector and returns this vector.
//Q 4: Write the fill and display actions for a vector of integers.


typedef struct {
    int  n;
    int *T;
} Vector;

 Vector EmptyVector();
 Vector AllocateVector(int nbr);
 void FillVector(Vector *v);
 void DisplayVector(Vector v);

 
int main(){
    int nbr;
    printf("Number of elements: ");
    scanf("%d", &nbr);

    Vector V = AllocateVector(nbr);
    FillVector(&V);
    DisplayVector(V);

    free(V.T);
  
  return 0;
}

 Vector EmptyVector(){
  Vector V;

  V.n = 0;
  V.T = NULL;
  return V;
 }

  Vector AllocateVector(int nbr){
    Vector V;

    V.n = nbr;
    V.T = malloc(nbr * sizeof(int));
    return V;
  }


  void FillVector(Vector *v)
{
    for (int i = 0; i < v->n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &v->T[i]);
    }
}

void DisplayVector(Vector v){
    if (v.n == 0) {
        printf("Empty vector\n");
        return;
    }
    printf("[ ");
    for (int i = 0; i < v.n; i++)
        printf("%d ", v.T[i]);
    printf("]\n");
}
