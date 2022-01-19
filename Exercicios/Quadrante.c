int main () {
	
	int X, Y;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if(X == 0 || Y == 0) {
		printf("eixos");
	
	}else if(X > 0 && Y > 0) {
		printf("Q1");
		
	}else if(X < 0 && Y > 0) {
		printf("Q2\n");
		
	}else if(X < 0 && Y < 0) {
		printf("Q3\n");
		
	}else {
		printf("Q4\n");
	} 
	
	
return 0;	
}