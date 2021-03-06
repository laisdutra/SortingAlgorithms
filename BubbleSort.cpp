/*
- Percorre o vetor v�rias vezes;

- A cada passagem faz flutuar para o topo da lista o maior elemento;

- Compara pares de elementos adjacentes e os troca de lugar se estiverem na ordem errada;

- O processo se repete at� que mais nenhuma troca seja necess�ria;

- Melhor caso: O(n)
- Caso m�dio: O(n^2)
- Pior caso: O(n^2)
- N�o recomendado para grandes conjuntos de dados
- N�o recomendado para programas que precisem de velocidade
*/

void bubbleSort(int *v, int n){
    bool houveTroca = true;
    int aux;

    while(houveTroca == true){
        houveTroca = false;
        for(int i=0; i < n-1; i++){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
                houveTroca = true;
            }
        }
    }
}
