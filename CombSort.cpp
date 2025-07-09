/*
- Inicialmente, define-se um gap (intervalo) igual ao tamanho da lista a ser ordenada;

- Reordena pares de itens separados por um gap, que é reduzido a cada passagem;

- O processo continua até que não haja mais trocas e o gap seja igual a 1;

- Complexidade:
  Melhor caso:   O(n log n)
  Pior caso:     O(n²)

- Mais eficaz nas primeiras passagens, quando o gap é grande;
- No passo final, quando o gap é 1, se assemelha ao Bubble Sort;
- Fator de redução (shrink factor) sugerido inicialmente: 1.3;
- Melhoria atual: fator otimizado 1.247330950103979, que melhora a performance.
*/

void combSort(int* vetor, int tamanho){ 
    bool houveTroca = true;
    int gap = tamanho; 

    while (houveTroca || gap > 1){ 
        houveTroca = false;
        gap = (int)(gap / 1.247330950103979);
        if (gap < 1){ 
            gap = 1;
        }
        for (int i = 0; i + gap < tamanho; i++){ 
            if (vetor[i] > vetor[i+gap]){ 
                swap(vetor[i], vetor[i+gap]);
                houveTroca = true;
            }
        }
    }
}
