#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "interfaces/funcoes.h"

int main(void){  
    int i;  


    while(1){        
        switch(tela_inicial()){
        case 1:
            break;
        case 2:            
            instrucoes();
            break;
        case 3:
            break;
        case 4:
            printf("\n\n\t\t\t\t\t\t\t\t     FIM DE iOGO\n");
            for(i = 0; i < 555555555; i++) ; /* Loop para o delay */
            limpa_tela();
            return 0;
            break;
        }
    }

    
    return 0;
}