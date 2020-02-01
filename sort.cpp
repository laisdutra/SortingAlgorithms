#include "sort.h"

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

void combSort(int *v, int n){
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

void countingSort(int *v, int n, int k){
    int l = 0;
    int *aux = new int[k+1];

    for(int i=0; i<k+1; i++){
        aux[i] = 0;
    }
    for(int i=0; i<n; i++){
        aux[v[i]]++;
    }
    for(int i=0; i<k+1; i++){
        for(int j=0; j<aux[i]; j++){
            v[l++] = i;
        }
    }
    delete[] aux;
}

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

void merge(int *v, int c, int m, int f){
    int p = 0;
    int p1 = c;
    int p2 = m+1;
    int t = f-c+1;
    int *aux = new int[t];

    while(p1 <= m && p2 <= f){
        if(v[p1] < v[p2]){
            aux[p++] = v[p1++];
        }else{
            aux[p++] = v[p2++];
        }
    }
    while(p1 <= m){
        aux[p++] = v[p1++];
    }
    while(p2 <= f){
        aux[p++] = v[p2++];
    }
    for(int i=0; i<t; i++){
        v[c++] = aux[i];
    }
    delete[] aux;
}

void mergeSort(int *v, int c, int f){
    if(c < f){
        int m = (c+f)/2;
        mergeSort(v, c, m);
        mergeSort(v, m+1, f);
        merge(v, c, m, f);
    }
}

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

void selectionSort(int *v, int n){
    int i_minimo, aux;

    for(int i=0; i<n-1; i++){
        i_minimo = i;
        for(int k=i+1; k<n; k++){
            if(v[k] < v[i_minimo]){
                i_minimo = k;
            }
        }
        if(v[i] != v[i_minimo]){
            aux = v[i];
            v[i] = v[i_minimo];
            v[i_minimo] = aux;
        }
    }
}
