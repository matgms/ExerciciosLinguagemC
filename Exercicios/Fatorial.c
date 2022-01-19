int fatorial(int f){
	if(f==0){
		return 1;
		
	}else{
		return f*fatorial(f-1);
	}
}
int main(){
	int n;
	
	scanf("%d", &n);
		
	printf("%d", fatorial(n));
}	