5.	Find Error/Output in follwing code :

#include <stdio.h> 
int tmp=20; 
main( ) 
{    
    printf("%d ",tmp);    
    func( );    
    printf("%d ",tmp); 
} 
func() 
{    
    static int tmp=10;    
    printf("%d ",tmp); 
}

OUTPUT :  20 10 20

