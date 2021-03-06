/*
- Similar a ordena��o de cartas de baralho com as m�os;

- Pega-se uma carta por vez e a coloca em seu devido lugar, sempre deixando as cartas da m�o em ordem;

- Constr�i uma matriz final com um elemento de cada vez;

- Percorre o vetor da esquerda para a direita e, conforme avan�a, os elementos mais � esquerda ficam ordenados;

- Cada nova posi��o � como uma nova carta recebida e � inserida no lugar correto no subarray ordenado � esquerda daquela posi��o;

- Melhor caso: O(n)
- Caso m�dio: O(n^2)
- Pior caso: O(n^2)
- Eficiente para conjuntos pequenos de dados
- O algoritmo mais eficiente entre os de ordem quadr�tica
- Est�vel: n�o altera a ordem de dados iguais
- Capaz de ordenar os dados a medida em que os recebe (tempo real)
*/

void insertionSort(int *v, int n){
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
