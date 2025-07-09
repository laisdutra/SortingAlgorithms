/*
- A cada passo, procura o menor valor do vetor e o coloca na primeira posição;

- Descarta-se a primeira posição do vetor e repete-se o processo para a segunda posição;

- Feito para todos os n elementos;

- Melhor caso: O(n^2)
- Caso médio: O(n^2)
- Pior caso: O(n^2)
- Um dos algoritmos mais rápidos para vetores pequenos
- Um dos mais lentos para grandes conjuntos de dados
*/

void selectionSort(int* v, int n){
    int i_minimo, aux;

    for(int i=0; i<n-1; i++){
        i_minimo = i;
        for(int k=i+1; k<n; k++){
            if(v[k] < v[i_minimo]){
                i_minimo = k;
            }
        }
        if(v[i] != v[i_minimo]){
            aux = v[i];
            v[i] = v[i_minimo];
            v[i_minimo] = aux;
        }
    }
}
