/*
- Dividir para conquistar;

- Um elemento � escolhido como piv�;

- Valores menores que o piv� s�o colocados antes dele, e os maiores colocados depois;

- Recursivamente ordena as parti��es;

- Pior caso: O(n^2) (raro)
- Caso m�dio: O(nlog(n))
- Melhor caso: O(nlog(n))
- Muito r�pido em m�dia, mas lento no pior caso
- O passo da divis�o � a parte cr�tica do algoritmo
*/

int particiona(int *v, int c, int f){
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

void quickSort(int *v, int c, int f){
    if(c < f){
        int pivo = particiona(v, c, f);
        quickSort(v, c, pivo-1);
        quickSort(v, pivo+1, f);
    }
}
