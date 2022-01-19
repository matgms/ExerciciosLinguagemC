int main(){
	int x[10], i;
	
	for(i=0; i<10; i++){
		scanf("%d", &x[i]);
	}
	for(i=9; i>=0; i--){
		printf("%d\n", x[i]);
	}
}