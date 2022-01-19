int soma(int a, int b){
	int s=a+b;
return s;	
}

int main(){
	int x, y;
	
	printf("Informe dois numeros inteiros: ");
	scanf("%d %d", &x, &y);
	
	printf("A soma e: %d", soma(x, y));
	
	
}