/*
- Usa um array auxiliar de tamanho igual ao maior valor a ser ordenado, k, mais 1;

- O array é usado para contar quantas vezes cada valor aparece;

- O valor a ser ordenado é tratado como um índice;

- Percorre o array auxiliar verificadno quais valores existem e os coloca no array ordenado;

- Pior caso: O(n+k)
- Caso médio: O(n+k)
- Melhor caso: O(n+k)
- Ordena valores positivos (pode ser modificado para outros valores)
- Estável
- Processamento simples
- Não recomendado para k muito grande
*/

void countingSort(int* v, int n, int k){
    int l = 0;
    int* aux = new int[k+1];

    for(int i=0; i<k+1; i++){
        aux[i] = 0;
    }
    for(int i=0; i<n; i++){
        aux[v[i]]++;
    }
    for(int i=0; i<k+1; i++){
        for(int j=0; j<aux[i]; j++){
            v[l++] = i;
        }
    }
    delete[] aux;
}
