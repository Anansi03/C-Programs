#include<stdio.h>                                                               
                                                                                                                                                                                                                                                                          
int main()                                                                     
{                                                                               
  int i, j, limit;                                                              
  int composite = 0;                                                            
  printf("Enter number of choice: ");                                                      
  scanf("%d", &limit);                                                          
                                                                                
  printf("The following  composite numbers within the entered number's range is: ", limit);                               
  for(i = 2;i <= limit;i++)                                                     
  {                                                                             
    composite = 0;                                                              
    for(j = i-1; j > 1 ; j--)                                                   
    {                                                                           
       if(i%j == 0)                                                             
         composite = 1;                                                         
    }                                                                           
    if(composite == 1)                                                          
     printf("%d\t", i);                                                         
  }                                                                             
  printf("\n");                                                                 
} 
