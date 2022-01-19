int main () {
	
	float a, b, media;
	
	scanf("%f", &a);
	scanf("%f", &b);
	
	media = (a+b)/2;
	
	printf("%.2f\n", media);
	
	if(media >= 7.0) {
		printf("Aprovado");
		
	} else if(media >= 5.0) {
		printf("Recuperacao");
		
	} else printf("Reprovado");
	
	
	
	
	
	
return 0;	
}