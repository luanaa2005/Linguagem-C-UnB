 #include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n][m];


    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int maior1 =0;
    for(int i=0; i<n; i++){
        int soma =0;
        for(int j=0; j<m; j++){
            soma = soma+ a[i][j];
        }
        if(soma> maior1){
            maior1 = soma;
        }
        
        
    }

    int maior2 =0;
    for(int j=0; j<m; j++){
        int soma =0;
        for(int i=0; i<n; i++){
            soma = soma+ a[i][j];
        }
        if(soma> maior2){
            maior2 = soma;
        }
        
        
    }


    if(maior1>maior2){
        printf("%d", maior1);

    }
    else{
        printf("%d", maior2);
    }
    return 0;
}