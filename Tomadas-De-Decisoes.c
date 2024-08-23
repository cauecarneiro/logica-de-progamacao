#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(0,"Portuguese");
    char cd, est, td, ec, ep; 
    printf("Responda com S/N");
	
	printf("\nTenho compromisso no dia? ");
    scanf("%c", &cd);
    fflush(stdin);
    
	printf("Vou estar na cidade? ");
    scanf("%c", &est);
    fflush(stdin);
    
	printf("Tenho dinheiro? ");
    scanf("%c", &td);
    fflush(stdin);
    
	printf("Está chovendo? ");
    scanf("%c", &ec);
    fflush(stdin);
    
	printf("É perto? ");
    scanf("%c", &ep);
    fflush(stdin);
    
    if(cd == 'N' && est == 'S' && td == 'S' && ec == 'N' || cd == 'N' && est == 'S' && td == 'S' && ep == 'N') {
    	printf("Vou!");
	}else if (cd == 'S' && est == 'N' && ec == 'S' && ep == 'N'){
		printf("Não vou!");
	}else{
		printf("Digite algo valido");
	}
}

    
