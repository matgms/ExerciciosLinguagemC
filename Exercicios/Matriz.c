int main(){
    int m[2][3]; 
     for(int linha=0;linha<2;linha++){
        for(int coluna=0;coluna<3;coluna++){
            scanf("%d", &m[linha][coluna]);
        }
	}
    
     for(int linha=0;linha<2;linha++){
        for(int coluna=0;coluna<3;coluna++){
            printf("%d ", m[linha][coluna]);
        }
        printf("\n");
    }
}