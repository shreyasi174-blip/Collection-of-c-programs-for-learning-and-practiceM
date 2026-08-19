#include <stdio.h>
void traversearray(int *arr,int size){
   for(int i=0;i<size;i++){
    printf("Elements at index %d: %d\n",i,arr[i]);
   }
}

int main(){
    int Array[]={10,20,30,40,50};
    int length=sizeof(Array) / sizeof(Array[0]);
    printf("Traversing the array using function: \n");
    traversearray(Array,length);
    return 0;
}
