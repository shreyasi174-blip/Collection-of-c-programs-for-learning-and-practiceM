#include<stdio.h>
void bubble_sort(int array[],int size){
    for(int step=0;step<size-1;++step){
       for(int i=0;i<size-step-1;++i){
       if(array[i]>array[i+1]){
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
       }
     }
        for(int i=0;i<size;i++)
     printf("%d ",array[i]); 
     printf("\n");
 }
}
int main(){
    int data[]={9,4,5,6,8,2,1};
    int size=sizeof(data)/sizeof(data[0]);
    bubble_sort(data,size);
    printf("\n sorted array: ");
    for(int i=0;i<size;i++){
        printf(" %d ",data[i]);
    }
    return 0;
}
