int main () {
	
	float N1, N2, media;
	
	scanf("%f", &N1);
	scanf("%f", &N2);
	
	media = ((N1*2)+(N2*3))/5;
	
	
	if(media >= 7.0) {
		printf("Aprovado");
		
	} else if(media < 3.0) {
		printf("Reprovado");
		
	} else printf("Final");
	
	
	
	
return 0;	
}