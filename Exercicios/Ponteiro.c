int main(){
	int x;
	int *p;
	
	printf("Informe o valor de x: ");
	scanf("%d", &x);
	
	p=&x;
	
	printf("O valor de x e: %d", *p);
}