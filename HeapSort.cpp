/*
- Constrói um heap máximo;

- Troca a raiz com o elemento da última posição do vetor;

- Diminui o tamanho do heap em 1;

- Rearranja o heap máximo;

- Pior caso: O(nlog(n))
- Caso médio: O(nlog(n))
- Melhor caso: O(nlog(n))
- Tem desempenho em tempo de execução muito bom em conjuntos ordenados aleatoriamente
- Tem uso de memória moderado
- O desempenho no pior cenário é praticamente igual ao no cenário médio 
- Para n razoavelmente grande, o termo log(n) é quase constante, de modo que o tempo de ordenação é quase linear com o número de itens
- O heapsort não é estável, porém é possível adaptar a estrutura a ser ordenada de modo que torne a ordenação estável
*/

void heap(int* v, int n){
    bool houveTroca = true;
    int aux;

    while(houveTroca == true){
        houveTroca = false;
        for(int i=0; i<n; i++){
            if(2*i+1 < n && v[2*i+1] > v[i]){
                aux = v[2*i+1];
                v[2*i+1] = v[i];
                v[i] = aux;
                houveTroca = true;
            }
            if(2*i+2 < n && v[2*i+2] > v[i]){
                aux = v[2*i+2];
                v[2*i+2] = v[i];
                v[i] = aux;
                houveTroca = true;
            }
        }
    }
}

void heapSort(int* v, int n){
    int aux;

    while(n > 1){
        heap(v, n);
        aux = v[0];
        v[0] = v[n-1];
        v[n-1] = aux;
        n--;
    }
}
