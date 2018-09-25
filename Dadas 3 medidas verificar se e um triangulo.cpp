#include <stdio.h>	
#include <math.h>
int main()                            
{
    int med1, med2, med3, med4, med5;                          
  
    printf( "Insira a primeira medida:\n" );  
    scanf( " %d", &med1 );
	printf( "Insira a segunda medida:\n" );  
    scanf( " %d", &med2 );
	printf( "Insira a terceira medida:\n" );  
    scanf( " %d", &med3 );
	
	med4 = med1 + med2;
	med5 = med1 + med3;
	   
    if ( med4 > med3 ) {                  

		if ( med5 > med1 ) {

         	
			if ( med5 > med2 ) {
		
				printf("E um triangulo\n");
			}
			else {
            printf( "Nao e um triangulo\n" );     
            }
		}
		else {
        printf( "Nao e um triangulo\n" );     
        }
    }
    
    else {
        printf( "Nao e um triangulo\n" );     
    }
    
  return 0;
}
