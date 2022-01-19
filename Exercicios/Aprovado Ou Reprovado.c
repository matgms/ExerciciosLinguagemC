int main () {
	
	int a, b, media;
	
	scanf("%d%d", &a, &b);
	media = (a+b)/2;
	
	if (media >= 7) {
		printf("Aprovado");
		
	}else if (media >=4) {
		printf("Recuperacao");
		
	}else {
		printf("Reprovado");
	} 
	
	
	
return 0;	
}