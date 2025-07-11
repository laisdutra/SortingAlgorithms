/*
- Percorre o vetor repetidas vezes;

- A cada passagem, faz o maior elemento “flutuar” para o final do vetor;

- Compara pares de elementos adjacentes e os troca de lugar se estiverem fora de ordem;

- O processo se repete até que não sejam mais necessárias trocas;

- Complexidade:
  Melhor caso:   O(n)
  Caso médio:    O(n²)
  Pior caso:     O(n²)

- Não recomendado para conjuntos de dados grandes;
- Não recomendado para aplicações que exigem alta performance.
*/

void bubbleSort(int* vetor, int tamanho){
    bool houveTroca = true;

    while (houveTroca == true){
        houveTroca = false;
        for (int i = 0; i < tamanho - 1; i++){
            if (vetor[i] > vetor[i+1]){
                swap(vetor[i], vetor[i+1]);
                houveTroca = true;
            }
        }
    }
}
