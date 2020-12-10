#include <stdio.h>
#include <math.h>

void getMatrix(int i, int j, int matrix[][j]);
int main(void)
{

	int i, j, a, b;

	scanf("%d %d", &i, &j);
	
	void getMatrix(int row, int cols, int matrix[][cols]);
	
	int fst[i][j];

	for (a = 0; a < i; a++) {
		for (b = 0; b < j; b++) {
			scanf("%d", &fst[a][b]);
		}
	}
	printf("\n");
	getMatrix(i, j, fst);
	}
	
	void getMatrix(int i, int j, int fst[][j]){
		
		int a, b, p, maior_de_todos, maior1 = -9999999, maior2 = -9999999, maior3 = -9999999, maior4 = -9999999, c, diagonal1 = 0, diagonal2 = 0, diagonal3 = 0, diagonal4 = 0, primo = 0;
		
		for (a = 0; a < (i-1); a++){
			for (b = 0; b < (j-1); b++){
				if (a == b){
					for(c = 1; c <= fst[a][b]; c++){
						if (fst[a][b] % c == 0){
							primo = primo + 1;
						}	
					}
					if (primo == 2){
						diagonal1 = fst[a][b] + diagonal1;
						if (fst[a][b] > maior1){
							maior1 = fst[a][b];
						}
					}
				}
				
			}
			}
		for (a = 1 ; a < i; a++){
			for (b = 0; b < (j-1); b++){
				if (a == b){
					for(c = 1; c <= fst[a][b]; c++){
						if (fst[a][b] % c == 0){
							primo = primo + 1;
						}	
					}
					if (primo == 2){
						diagonal1 = fst[a][b] + diagonal1;
						if (fst[a][b] > maior1){
							maior1 = fst[a][b];
						}
					}
				}
				
			}
		}
		for (a = 0 ; a < (i-1); a++){
				for (b = 1; b < j; b++){
					if (a == b){
						for(c = 1; c <= fst[a][b]; c++){
							if (fst[a][b] % c == 0){
								primo = primo + 1;
							}	
						}
						if (primo == 2){
							diagonal1 = fst[a][b] + diagonal1;
							if (fst[a][b] > maior1){
								maior1 = fst[a][b];
							}
					}
				}
			}
	}
		for (a = 1 ; a < i; a++){
				for (b = 1; b < j; b++){
				if (a == b){
					for(c = 1; c <= fst[a][b]; c++){
						if (fst[a][b] % c == 0){
							primo = primo + 1;
						}	
					}
						if (primo == 2){
							diagonal1 = fst[a][b] + diagonal1;
							if (fst[a][b] > maior1){
								maior1 = fst[a][b];
							}
					}
				}
			}
			}
		printf("%d %d %d %d", maior1, maior2, maior3, maior4);
		printf("\n");
		if((diagonal1 >= diagonal2) && (diagonal1 >= diagonal3) && (diagonal1 >= diagonal4)){
			if(diagonal1 == diagonal2){
				if(maior1 > maior2){
					maior_de_todos = maior1;
					p = 1;
				}
				else{
					maior_de_todos = maior2;
					p = 2;
				}
			}
			else if(diagonal1 == diagonal3){
				if(maior1 > maior3){
					maior_de_todos = maior1;
					p = 1;
				}
				else{
					maior_de_todos = maior3;
					p = 3;
				}
			}
			else if(diagonal1 == diagonal4){
				if(maior1 > maior4){
					maior_de_todos = maior1;
					p = 1;
				}
				else{
					maior_de_todos = maior4;
					p = 4;
				}
			}
			else{
				maior_de_todos = maior1;
				p = 1;
			}
		}
		else if((diagonal2 >= diagonal1) && (diagonal2 >= diagonal3) && (diagonal2 >= diagonal4)){
			if(diagonal2 == diagonal1){
				if(maior2 > maior1){
					maior_de_todos = maior2;
					p = 2;
				}
				else{
					maior_de_todos = maior1;
					p = 1;
				}
			}
			else if(diagonal2 == diagonal3){
				if(maior2 > maior3){
					maior_de_todos = maior2;
					p = 2;
				}
				else{
					maior_de_todos = maior3;
					p = 3;
				}
			}
			else if(diagonal2 == diagonal4){
				if(maior2 > maior4){
					maior_de_todos = maior2;
					p = 2;
				}
				else{
					maior_de_todos = maior4;
					p = 4;
				}
			}
			else{
				maior_de_todos = maior2;
				p = 2;
			}
		}
		else if((diagonal3 >= diagonal1) && (diagonal3 >= diagonal2) && (diagonal3 >= diagonal4)){
			if(diagonal3 == diagonal1){
				if(maior3 > maior1){
					maior_de_todos = maior3;
					p = 3;
				}
				else{
					maior_de_todos = maior1;
					p = 1;
				}
			}
			else if(diagonal3 == diagonal2){
				if(maior3 > maior2){
					maior_de_todos = maior3;
					p = 3;
				}
				else{
					maior_de_todos = maior2;
					p = 2;
				}
			}
			else if(diagonal3 == diagonal4){
				if(maior3 > maior4){
					maior_de_todos = maior3;
					p = 3;
				}
				else{
					maior_de_todos = maior4;
					p = 4;
				}
			}
			else{
				maior_de_todos = maior3;
				p = 3;
			}
		}
		else if((diagonal4 >= diagonal1) && (diagonal4 >= diagonal2) && (diagonal4 >= diagonal3)){
			if(diagonal4 == diagonal1){
				if(maior4 > maior1){
					maior_de_todos = maior4;
					p = 4;
				}
				else{
					maior_de_todos = maior1;
					p = 1;
				}
			}
			else if(diagonal4 == diagonal2){
				if(maior4 > maior2){
					maior_de_todos = maior4;
					p = 4;
				}
				else{
					maior_de_todos = maior2;
					p = 2;
				}
			}
			else if(diagonal4 == diagonal3){
				if(maior4 > maior3){
					maior_de_todos = maior4;
					p = 4;
				}
				else{
					maior_de_todos = maior3;
					p = 3;
				}
		}
			else{
				maior_de_todos = maior4;
				p = 4;
			}
		}
			switch (i){
				case 1: 
					for (a = 0; a < (i-1); a++){
						for (b = 0; b < (j-1); b++){
							printf("%d ", fst[a][b]);
						}
						printf("\n");
					}
				case 2: 
					for (a = 1 ; a < i; a++){
						for (b = 0; b < (j-1); b++){
							printf("%d ", fst[a][b]);
						}
						printf("\n");
					}
				case 3: 
					for (a = 0 ; a < (i-1); a++){
						for (b = 1; b < j; b++){
							printf("%d ", fst[a][b]);
						}
						printf("\n");
					}
				case 4: 
					for (a = 1 ; a < i; a++){
						for (b = 1; b < j; b++){
							printf("%d ", fst[a][b]);
						}
						printf("\n");
					}
			}
}

