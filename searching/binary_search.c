#include <stdio.h>

int binary_search(int array[], int higher, int lower,int num);

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

int binary_search(int array[], int higher, int lower,int num){ ///Receives array, the highest point of the array, lower and the number that you want to search 
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