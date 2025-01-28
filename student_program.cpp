#include <stdio.h>

void GetMatrix( int **value, int *row, int *col ) ;
void PrintMatrix( int **value, int row, int col ) ;

int main() {
    int *data, m = 2, n = 3 ;
    data = new int[ m * n ] ; 

    GetMatrix( &data, &m, &n ) ;
    PrintMatrix( &data, m, n ) ;

    return 0 ;

}//end function

void GetMatrix( int **value, int *row, int *col ) {
 
 printf ("Enter the elements of the matrix (%d x %d):\n" , *row , *col ) ;

 for ( int i=0 ; i < *row ; i++ ) {
    for ( int j=0 ; j < *col ; j++ ) {
      printf("Element at [%d][%d]: ", i, j) ;  
      scanf ( "%d", &value[i * (*col) + j] ) ;

    }
  }
}

void PrintMatrix( int **value, int row, int col ) {

 printf( "Matrix (%dx%d):\n" , row , col ) ;
 
 for ( int i=0 ; i < row ; i++ ) {
   for ( int j=0 ; j < col ; j++ ) {
     printf ( "%d " , value[i * col + j] ) ;  

   }
   printf("\n");
 }
}
