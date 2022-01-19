int main(){
    int A, B, maior, menor;
    
    scanf("%d", &A);
    scanf("%d", &B);

    if (A >= B) {
        maior = A;
        menor = B;
    }

    if(B > A) {
        maior = B;
        menor = A;
    }

    for(menor; menor <= maior; menor++){
       printf(" %d", menor);
    
    }
    
return 0;    
}