#include <stdlib.h>

int* create_array(int n, int initial_value){
    int* arr = malloc(n * sizeof(int));

    if(arr = NULL){
        return NULL;
    }

    for(int i = 0; i < n; i++){
        arr[i] = initial_value;
    }
    return arr;
}