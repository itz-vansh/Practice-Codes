#include <stdio.h>  
#include <conio.h>  
  
int main ()  
{  
    int n, temp, rev = 0, digit, sum = 0;   
    printf (" Enter a Number: \n");  
    scanf (" %d", &n); 
        
    temp = n;   
      
     while ( temp > 0)  
    {  
         
        sum = sum + temp % 10;   
        temp = temp / 10;  
    }  
      
    
    temp = sum;   
    printf (" \n digit sum = %d", temp);  
        
    while ( temp > 0)  
    {  
        rev = rev * 10 + temp % 10;  
        temp = temp / 10;  
    }  
      
    printf (" \n The reverse of sum = %d", rev);  
    printf (" \n The product of %d * %d = %d", sum, rev, rev * sum);
    
   if ( rev * sum == n)  
    {  
        printf (" \n %d is a Magic Number. ", n);  
    }  
    else  
    {  
        printf (" \n %d is not a Magic Number. ", n);  
    }  
    return 0;  
      
}  

 

