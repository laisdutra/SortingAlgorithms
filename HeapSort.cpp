/*
- Constrói um heap máximo (max-heap) a partir do vetor;

- Coloca o maior valor na raiz (início do vetor);

- Troca a raiz com o último elemento da parte não ordenada do vetor;

- Reduz o tamanho do heap em 1;

- Rearranja o heap chamando heapify na raiz, garantindo que o próximo maior valor volte para o topo;

- Repete esse processo até restar apenas um elemento não ordenado;

- Complexidade:
    Melhor caso:  O(n log n)
    Caso médio:   O(n log n)
    Pior caso:    O(n log n)
- Tem desempenho em tempo de execução muito bom em conjuntos distribuídos aleatoriamente;
- Tem uso de memória moderado;
- O desempenho no pior cenário é praticamente igual ao no cenário médio; 
- Para n razoavelmente grande, o termo log(n) é quase constante, fazendo o tempo se comportar quase linearmente em relação ao número de itens.
*/

void heapify(int* v, int n, int i) {
    while (true) {
        int maior = i;                 
        int esquerda = 2*i + 1;        
        int direita  = 2*i + 2;        

        if (esquerda < n && v[esquerda] > v[maior]){
            maior = esquerda;
        }
        if (direita < n && v[direita] > v[maior]){
            maior = direita;
        }
        if (maior != i) {
            swap(v[i], v[maior]);
            i = maior; 
        } else {
            break; 
        }
    }
}

void heapSort(int* vetor, int tamanho) {
    for (int i = tamanho / 2 - 1; i >= 0; i--) {
        heapify(vetor, tamanho, i);
    }
    for (int i = tamanho - 1; i > 0; i--) {
        swap(vetor[0], vetor[i]); 
        heapify(vetor, i, 0); 
    }
}
