#include <stdio.h>

main(){
	
	int numero, fact=1,i;
	
	//printf("Ingrese el numero que desea saber su factorial: ");
	//scanf("%d", &numero);
	
	//for(i=1; i<=numero; i++){
	//	fact=fact*i;
		
		
	//}
	//printf("\nEl factorial es %d"  ,fact );
	
	printf("Ingrese el numero que desea saber su factorial: ");
	scanf("%d", &numero);
	
	while(i<=numero){
		fact=fact*i;
		i++;
	}
	//aca va el resultado
	printf("\nEl factorial es %d"  ,fact );
	
}
