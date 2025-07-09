/*
- Dividir para conquistar;

- Divide recursivamente o conjunto de dados até que cada subconjunto possua 1 elemento;

- Combina 2 subconjuntos de forma a obter 1 conjunto maior e ordenado;

- Melhor caso: O(nlog(n))
- Caso médio: O(nlog(n))
- Pior caso: O(nlog(n))
- Recomendado para ordenação de vetores grandes
- Estável: não altera o ordem de dados iguais
- Requer o dobro de memória (recursão)
- Exige uma segunda lista de mesmo tamanho
*/

void merge(int* v, int c, int m, int f){
    int p = 0;
    int p1 = c;
    int p2 = m+1;
    int t = f-c+1;
    int *aux = new int[t];

    while(p1 <= m && p2 <= f){
        if(v[p1] < v[p2]){
            aux[p++] = v[p1++];
        }else{
            aux[p++] = v[p2++];
        }
    }
    while(p1 <= m){
        aux[p++] = v[p1++];
    }
    while(p2 <= f){
        aux[p++] = v[p2++];
    }
    for(int i=0; i<t; i++){
        v[c++] = aux[i];
    }
    delete[] aux;
}

void mergeSort(int* v, int c, int f){
    if(c < f){
        int m = (c+f)/2;
        mergeSort(v, c, m);
        mergeSort(v, m+1, f);
        merge(v, c, m, f);
    }
}
