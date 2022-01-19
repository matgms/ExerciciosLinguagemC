int troca(int *a, int *b){
	int aux=*a;
	*a=*b;
	*b=aux;
}

int main(){
	int a, b;
	
	printf("Informe o valor de A e B: ");
	scanf("%d %d", &a, &b);
	
	printf("Valor de A: %d Valor de B: %d", a, b);
	
	troca(&a, &b);
	
	printf("\nValores invertidos A: %d B: %d", a, b);
	
}