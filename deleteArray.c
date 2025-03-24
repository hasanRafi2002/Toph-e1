#include <stdio.h>

void deleteElement(int arr[], int*size, int index){
    if(index<0 || index>*size){
        printf("Invalid index!\n");
        return;
    }
    for(int i=index; i<*size-1; i++){
        arr[i] = arr[i+1];
    }
    (*size)--;
}

void printArray(int arr[], int size){
    printf("Array elements: ");
    for (int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[100], size, index;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter index number to delete: ");
    scanf("%d", &index);

    deleteElement(arr, &size, index);

    printArray(arr, size);

    return 0;
}