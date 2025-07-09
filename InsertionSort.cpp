/*
- Similar a ordenação de cartas de baralho com as mãos;

- Pega-se uma carta por vez e a coloca em seu devido lugar, sempre deixando as cartas da mão em ordem;

- Constrói uma matriz final com um elemento de cada vez;

- Percorre o vetor da esquerda para a direita e, conforme avança, os elementos mais à esquerda ficam ordenados;

- Cada nova posição é como uma nova carta recebida e é inserida no lugar correto no subarray ordenado à esquerda daquela posição;

- Melhor caso: O(n)
- Caso médio: O(n^2)
- Pior caso: O(n^2)
- Eficiente para conjuntos pequenos de dados
- O algoritmo mais eficiente entre os de ordem quadrática
- Estável: não altera a ordem de dados iguais
- Capaz de ordenar os dados a medida em que os recebe (tempo real)
*/

void insertionSort(int* v, int n){
    int aux, j;

    for(int i=1; i < n; i++){
        aux = v[i];
		j = i;
        while(j > 0 && aux < v[j-1]){
            v[j] = v[j-1];
            j--;
        }
        v[j] = aux;
    }
}
