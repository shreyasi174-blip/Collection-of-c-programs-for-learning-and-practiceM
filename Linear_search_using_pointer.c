#include <stdio.h>
int linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main()
{
    int Arr[100]={1,2,5,7,8,9};
    int size=sizeof(Arr) / sizeof(Arr[0]);
    int key=5;
    int result=linearsearch(Arr,size,key);
    if(result!=-1){
        printf("Element %d found at index: %d\n",key,result);
    }else{
         printf("Element %d not found at index.\n",key);
    }

    return 0;
}
