int main(){
	int a, b, maior, menor;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a > b){
		maior = a;
		menor = b;
		
	}
	if(b > a){
		maior = b;
		menor = a;
		
	}
	for(menor; menor <= maior; menor++){
		printf("%d\n", menor);
		
	}
	
	
	
}