#ifndef MAXMIN_HPP
#define MAXMIN_HPP

int maxmin(int A[], int tam, int ori){
    if(!(ori == 1 || ori == -1)) return false;

    int retorno = A[0];

    for(int i = 0; i < tam; i++){
        if(ori == 1){
            if(retorno < A[i]) retorno = A[i];
        } else {
            if(retorno > A[i]) retorno = A[i];
        }
    }

    return retorno;
}

#endif