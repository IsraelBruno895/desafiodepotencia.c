/* codigo desafio de potência 01 
autor: Israel Bruno ciência da computação 2023.2 manhã
data: 25/08/2023
*/

# include <stdio.h>
# include <math.h>
# include <stdlib.h>


int main(){
   double numero,expoente,test;
   int aux;

      printf("digite um numero:\n");
      scanf("%lf",&numero);
      
      
      test = log(numero) / log(2);
      aux = test;
       if(test == aux ){
       	
       	system("cls");
       	system("color 02");
            expoente = log2(numero);
                printf("%0.0lf = 2^%0.0lf\n",numero,expoente);
}
else{
        
        system("cls");
        system("color 04");
        
        printf("%0.0lf nao eh potencia de 2\n",numero);
        

}

return 0;

}
