/*
- Usa um array auxiliar de tamanho igual ao maior valor a ser ordenado, k, mais 1;

- O array é usado para contar quantas vezes cada valor aparece;

- O valor a ser ordenado é tratado como índice no array auxiliar;

- Após contar, percorre o array auxiliar verificando quais valores exitem e reescreve o vetor original em ordem crescente;

- Complexidade:
  Melhor caso:   O(n + k)
  Caso médio:    O(n + k)
  Pior caso:     O(n + k)

- Funciona para valores inteiros não negativos (pode ser adaptado para negativos com transformações);
- Eficiente e não baseado em comparações;
- Requer espaço extra proporcional a k, o que pode ser problemático para k muito grande;
*/

void countingSort(int* vetor, int tamanho){
    int maiorValor = 0, k = 0;
    
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }
    }
    
    int* vetorTemporario = new int[maiorValor+1];

    for (int i = 0; i < maiorValor + 1; i++){
        vetorTemporario[i] = 0;
    }
    for(int i = 0; i < tamanho; i++){
        vetorTemporario[vetor[i]]++;
    }
    for(int i = 0; i < maiorValor + 1; i++){
        for(int j = 0; j < vetorTemporario[i]; j++){
            vetor[k++] = i;
        }
    }
    delete[] vetorTemporario;
}
