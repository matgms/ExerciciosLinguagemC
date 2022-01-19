float media(float a, float b){
	return (a+b)/2;
}

int main(){
	float x, y, soma;
	
	printf("Informe as notas: ");
	scanf("%f %f", &x, &y);
	
	soma=x+y;
	printf("Soma das notas: %.2f", soma);
	
	printf("\nA media e: %.2f", media(x, y));
}