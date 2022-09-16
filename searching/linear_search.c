#include <stdio.h>
int search(int array[],int num,int size);

int main(){
    int size;
    int num;
    int index; 

    printf("Input the size of the array: ");
    scanf("%d",&size);
    int array[size];

    for (int i = 0; i < size; i++){
        printf("Input the %d term  of your array: ",i+1);
        scanf("%d",&array[i]);        
    }
    
    printf("\nNow input the number that you want to find in your array: ");
    scanf("%d",&num);
    index = search(array,num,size);
    if (index >= 0){
        printf("\nThe number %d is the %dº index your array!\n",num,index+1);
    }
    else{
        printf("\nThe number %d isn't in your array!\n",num);
    }
    return 0;
}

int search(int array[],int num, int size){
    for(int i = 0; i < size;i++){
        if (array[i] == num){
            return i;
        }
    }
    return -1;
}

