#include <stdio.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
}//end function
 
char* reverse( char str1[]) {

int i ;
int channel = 0 ;
char temp ;

printf( "Enter a string: ") ;
scanf("%[^\n]", str1) ;

while ( str1[channel] != '\0'){
    channel++ ;
}
  
 for( i = 0 ; i < channel / 2 ; i++ ) {
    temp = str1[i] ;
    str1[i] = str1[channel - i - 1] ;
    str1[channel - i - 1] = temp ;

 }
 printf( "FUNC : %s\n", str1 ) ;

 return str1 ;
}
