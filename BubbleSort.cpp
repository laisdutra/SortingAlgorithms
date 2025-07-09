/*
- Percorre o vetor repetidas vezes;

- A cada passagem, faz o maior elemento “flutuar” para o final do vetor;

- Compara pares de elementos adjacentes e os troca de lugar se estiverem fora de ordem;

- O processo se repete até que não sejam mais necessárias trocas;

- Complexidade:
  Melhor caso:   O(n)
  Caso médio:    O(n^2)
  Pior caso:     O(n^2)

- Não recomendado para conjuntos de dados grandes;
- Não recomendado para aplicações que exigem alta performance.
*/

void bubbleSort(int* vetor, int tamanho){
    bool houveTroca = true;
    int temporario;

    while (houveTroca == true){
        houveTroca = false;
        for (int i = 0; i < n-1; i++){
            if (v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = temporario;
                houveTroca = true;
            }
        }
    }
}
