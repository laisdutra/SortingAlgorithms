/*
- Reordena diferentes pares de itens separados por um salto, que � calculado a cada passagem;

- Semelhante ao Bubble Sort;

- Pior caso: O(n^2)
- Melhor caso: O(nlog(n))
- Mais eficaz em passagens anteriores do que durante o passo final, quando se assemelha ao Bubble Sort
- Fator de encolhimento sugerido 1.3 para o intervalo;
- Melhoria no Comb Sort 1.247330950103979;
*/

void combSort(int* v, int n){
    bool houveTroca = true;
    int aux, gap = n;

    while(houveTroca == true || gap > 1){
        houveTroca = false;
        gap = (int)(gap/1.247330950103979);
        if(gap < 1){
            gap = 1;
        }
        int i = 0;
        while(i+gap < n){
            if(v[i] > v[i+gap]){
                aux = v[i];
                v[i] = v[i+gap];
                v[i+gap] = aux;
                houveTroca = true;
            }
            i++;
        }
    }
}
