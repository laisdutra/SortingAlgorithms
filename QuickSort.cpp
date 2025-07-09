/*
- Dividir para conquistar;

- Um elemento é escolhido como pivô;

- Valores menores que o pivô são colocados antes dele, e os maiores colocados depois;

- Recursivamente ordena as partições;

- Pior caso: O(n^2) (raro)
- Caso médio: O(nlog(n))
- Melhor caso: O(nlog(n))
- Muito rápido em média, mas lento no pior caso
- O passo da divisão é a parte crítica do algoritmo
*/

int particiona(int* v, int c, int f){
    int aux;
    int l = c;
    int r = f;
    int pivo = v[f];

    while(l < r){
        while(v[l] < pivo){
            l++;
        }
        while(v[r] >= pivo){
            r--;
        }
        if(l < r){
            aux = v[l];
            v[l] = v[r];
            v[r] = aux;
        }
    }
    v[f] = v[l];
    v[l] = pivo;
    return l;
}

void quickSort(int* v, int c, int f){
    if(c < f){
        int pivo = particiona(v, c, f);
        quickSort(v, c, pivo-1);
        quickSort(v, pivo+1, f);
    }
}
