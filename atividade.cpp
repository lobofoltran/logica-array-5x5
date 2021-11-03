#include "atividade.h"

int main () {
    srand(time(NULL));

    std::cout << "Atividade com Array " << LINHA << " X  " << COLUNA << "\n";

    int vetor[LINHA][COLUNA];

/*
       			//colunas
		    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 |
//linhas    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 |
		    | 0 | 1 | 2 | 3 | 4 | 
*/

			

	// o preechimento com números aleatórios no array
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
            vetor[linha][coluna] = rand() % 10;
            std::cout << "| " << vetor[linha][coluna] << " |";
        }
        std::cout << "\n";
    }
	
	std::cout << "\n";
	std::cout << "Soma Linhas\n";
    somaLinhas(vetor);
    
    std::cout << "\n";
	std::cout << "Soma Colunas\n";
    somaColunas(vetor);
    
    std::cout << "\n" << "\n";
	std::cout << "Diaginais Primarias\n";
    DiagonalP(vetor);
    
    std::cout << "\n" << "\n";;
	std::cout << "Diaginais Secundarias\n";
    DiagonalS(vetor);
    
    return 0;
}

int somaLinhas(int vetor[LINHA][COLUNA]) {
    // SOMA LINHAS
    int linhasSomadas[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
		    std::cout << "| " << vetor[linha][coluna] << " |";        	
            linhasSomadas[linha] += vetor[linha][coluna];
        }
        std::cout << " = " << linhasSomadas[linha] << "\n";
    }
    return 0;
}

int somaColunas(int vetor[LINHA][COLUNA]) {
    // SOMA COLUNAS
    int colunasSomadas[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
    	for (int coluna = 0; coluna < COLUNA; coluna++) {
    		std::cout << "| " << vetor[linha][coluna] << " |";  
    		colunasSomadas[coluna] += vetor[linha][coluna];
		}
		std::cout << "\n";		
	}	
	std::cout << "=========================\n";		
	for (int i = 0; i < COLUNA; i++) {
		std::cout << "| " << colunasSomadas[i] << " |"; 
	}
    return 0;
}

int DiagonalP(int vetor[LINHA][COLUNA]) {
    int diaginaisP[] = {0,0,0,0,0};
    int somaDiagonais[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
        	if (linha == coluna) {
        		std::cout << "| " << vetor[linha][coluna] << " |";  	
            	diaginaisP[linha] += vetor[linha][coluna];
            	for (int i = 0; i < LINHA; i++) {
					somaDiagonais[i] += vetor[linha][coluna];
				}
			} else {
				std::cout << "| " << " " << " |";
			}
        }
        std::cout << "\n";
    }
    	std::cout << "=========================\n";		
		for (int i = 0; i < LINHA; i++) {
		std::cout << "| " << diaginaisP[i] << " |";
	}
	std::cout << "\n";	
		for (int i = 0; i < 1; i++) {
			std::cout << "\n Soma = | " << somaDiagonais[i] << " |";
	}
    return 0;
}

int DiagonalS(int vetor[LINHA][COLUNA]) {
	int diaginaisS[] = {0,0,0,0,0};
    int somaDiagonais[] = {0,0,0,0,0};
    for (int linha = 0; linha < LINHA; linha++) {
        for (int coluna = 0; coluna < COLUNA; coluna++) {
        	if (linha + coluna == 4) {
        		std::cout << "| " << vetor[linha][coluna] << " |";	
            	diaginaisS[linha] += vetor[linha][coluna];
				for (int i = 0; i < LINHA; i++) {
					somaDiagonais[i] += vetor[linha][coluna];
				}
			} else {
				std::cout << "| " << " " << " |";
			}
        }
        std::cout << "\n";
    }
    std::cout << "=========================\n";
		for (int i = 0; i < LINHA; i++) {
		std::cout << "| " << diaginaisS[i] << " |";
		}
		std::cout << "\n";	
		for (int i = 0; i < 1; i++) {
			std::cout << "\n Soma = | " << somaDiagonais[i] << " |";
	}
    return 0;
}
