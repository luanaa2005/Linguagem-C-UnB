#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

   
    char conjunto1[n][80];
    char conjunto2[m][80];

    for (int i = 0; i < n; i++) {
        scanf("%s", conjunto1[i]);
    }

    
    for (int i = 0; i < m; i++) {
        scanf("%s", conjunto2[i]);
    }

    
    for (int i = 0; i < m; i++) {         
        for (int j = 0; j < n; j++) {      
            int iguais = 1;                
            int k = 0;
            while (conjunto2[i][k] != '\0' && conjunto1[j][k] != '\0') {  
                if (conjunto2[i][k] != conjunto1[j][k]) {
                    iguais = 0;           
                    break;
                }
                k++;
            }
            
            if (iguais && conjunto2[i][k] == '\0' && conjunto1[j][k] == '\0') {
                printf("1\n");            
                return 0;
            }
        }
    }

    

    return 0;
}
