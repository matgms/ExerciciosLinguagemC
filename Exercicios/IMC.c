float calcularIMC() {
    float peso, altura, imc;
    
    printf("\nInforme seu peso: ");
    scanf("%f", &peso);    
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    
    imc=peso/(altura*altura);
    
    return imc;
}

int main(){
    float imc = calcularIMC();
	
	printf("IMC: %.2f\n", imc);
	
	if(imc<18.5){
		printf("Abaixo do peso");
	}else if(imc<=24.9){
		printf("Peso ideal");
	}else printf("Acima do peso");
	
}