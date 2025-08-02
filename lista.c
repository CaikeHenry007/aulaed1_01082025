#include <stdio.h>
#include <stdlib.h>

void primeiraOpcao(int matriz[20][9]) {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 9; j++) {
			matriz[i][j] = 0;
		}
	}
}

void segundaOpcao(int matriz[20][9]) {
	int andar, unidade, moradores;

	printf("Qual o andar?\n");
	scanf("%d", &andar);

	printf("Qual o numero da Unidade?\n");
	scanf("%d", &unidade);

	printf("Qual o numero de moradores?\n");
	scanf("%d", &moradores);

	matriz[andar-1][unidade-1] = moradores;
}

void terceiraOpcao(int matriz[20][9]) {
	int andar, unidade;

	printf("Qual o andar?\n");
	scanf("%d", &andar);

	printf("Qual o numero da Unidade?\n");
	scanf("%d", &unidade);

	printf("No andar %i Unidade %i moram %i pessoas\n", andar, unidade, matriz[andar-1][unidade-1]);
}

void quartaOpcao(int matriz[20][9]) {
	for (int i = 0; i < 20; i++) {
		printf("%d |", i+1);
		for (int j = 0; j < 9; j++) {
			printf(" %i |", matriz[i][j]);
		}
		printf("\n");
	}
}

void quintaOpcao(int matriz[20][9]){
    int totalMoradores = 0;
    
    for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 9; j++) {
			totalMoradores+=matriz[i][j];
		}
	}
	printf("Existem %d pessoas morando no predio.\n", totalMoradores);
}

void sextaOpcao(int matriz[20][9]){
    
    int totalAndar[20] = [0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0];
    for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 9; j++) {
			totalAndar[i]+=matriz[i][j];
		}
	}
}

int main() {
	int opcao;
	char continuar;
	int matriz[20][9];

	do {
		printf("\nMenu:\n");
		printf("1) Inicializar o predio\n");
		printf("2) Alterar o numero de moradores de um apartamento\n");
		printf("3) Consultar o numero de moradores de um apartamento\n");
		printf("4) Imprimir o numero de moradores de cada apartamento\n");
		printf("5) Imprimir o numero total de moradores do predio\n");
		printf("6) Imprimir o numero total de moradores de cada andar\n");
		printf("7) Informar quais apartamentos estao vazios (ou seja, sem moradores)\n");
		printf("8) Identificar o apartamento com o maior numero de moradores\n");
		printf("9) Finalizar programa\n");
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1:
			primeiraOpcao(matriz);
			break;

		case 2:
			segundaOpcao(matriz);
			break;

		case 3:
			terceiraOpcao(matriz);
			break;

		case 4:
			quartaOpcao(matriz);
			break;

		case 5:
			quintaOpcao(matriz);
			break;

		case 6:
			sextaOpcao(matriz);
			break;

		case 7:
			printf("Executando opcao 2...\n");
			break;

		case 8:
			printf("Executando opcao 2...\n");
			break;

		case 9:
			printf("Saindo...\n");
			return 0;

		default:
			printf("Opcao invalida!\n");
		}

		printf("Deseja voltar ao menu? (s/n): ");
		scanf(" %c", &continuar);

	} while (continuar == 's' || continuar == 'S');

	return 0;
}
