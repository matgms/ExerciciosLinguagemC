int main(){
	int x, v[10], marcador=1, i;
	
	for(i=0; i<10; i++){
		scanf("%d", &v[i]);
	}
	scanf("%d", &x);
	
	for(i=0; i<10; i++){
		if(v[i]==x){
			printf("SIM");
			marcador=0;
			break;
			
		}
		
	}
	if(marcador==1){
		printf("NAO");
	}

}