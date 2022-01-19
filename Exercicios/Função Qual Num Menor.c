int menor(int a, int b){
	if(a<=b){
		return a;
	}else{
		return b;
	}
}

int main(){
	int x, y;
	
	printf("Informe dois valores inteiros: ");
	scanf("%d %d", &x, &y);
	
	printf("O menor numero e: %d", menor(x, y));
	
}