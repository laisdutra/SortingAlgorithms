/*
- Constr�i um heap m�ximo;

- Troca a raiz com o elemento da �ltima posi��o do vetor;

- Diminui o tamanho da heap em 1;

- Rearranja o heap m�ximo;

- Pior caso: O(nlog(n))
- Caso m�dio: O(nlog(n))
- Melhor caso: O(nlog(n))
- Tem desempenho em tempo de execu��o muito bom em conjuntos ordenados aleatoriamente
- Tem uso de mem�ria moderado
- O desempenho no pior cen�rio � praticamente igual ao no cen�rio m�dio
- Para n razoavelmente grande, o termo log(n) � quase constante, de modo que o tempo de ordana��o � quase linear com o n�mero de itens
- O heapsort n�o � est�vel, por�m � poss�vel adaptar a estrutura a ser ordenada de forma a tornar a ordena��o est�vel
*/

void heap(int *v, int n){
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

void heapSort(int *v, int n){
    int aux;

    while(n > 1){
        heap(v, n);
        aux = v[0];
        v[0] = v[n-1];
        v[n-1] = aux;
        n--;
    }
}
