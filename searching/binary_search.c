#include <stdio.h>

int binary_search(int array[], int higher, int lower,int num);
void sortcres(int array[], int size);
void sortdecres(int array[],int size);

int main(){
    int size;
    int search;
    int result;

    printf("Input the size of the array: ");
    scanf("%d",&size);
    int array[size];

    for(int i = 0; i < size; i++){
        printf("Input the %d term of your array: ",i+1);
        scanf("%d",&array[i]);
    }

    sortcres(array,size);

    printf("\nNow input the number that you want to find: ");
    scanf("%d",&search);

    result = binary_search(array,size-1,0,search);
    if (result >= 0){
        printf("\nThe number %d is the %d in the array\n",search,result);
    }
    
    else{
        printf("\nThe number %d is not present in the array!\n",search);
    }

    return 0;
}

int binary_search(int array[], int higher, int lower,int num){ /*Recebe uma array, seu ponto mais alto (inicialmente definido como o meio dela), 
o mais baixo(inicialmente definido como zero), o tamanho da array e o numero buscado*/
    if (higher >= lower){
        int start = lower + (higher - lower)/2;

        if(array[start] == num){
            return start;
        }

        else if(array[start]>num){
            return binary_search(array,start-1,lower,num);
        }

        else{
            return binary_search(array,higher,start+1,num);
        }

    }
    return -1;
}

void sortcres(int list[], int size){ //A função recebe a lista e seu tamanho, para deixar a array em ordem crescente
    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - 1; j++){
            if (list[j] > list[j + 1]){
            int save = list[j];
            list[j] = list[j + 1];
            list[j + 1] = save;
            }
        }
    }
}

void sortdesc(int list[],int tam){
    for (int i = 0; i < tam - 1; i++){
        for (int j = 0; j < tam - 1; j++){
            if (list[j] < list[j + 1]){
            int save = list[j];
            list[j] = list[j + 1];
            list[j + 1] = save;
            }
        }
    }
}