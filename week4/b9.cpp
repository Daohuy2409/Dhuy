void reverseArray(float array[], int size){
    for(int i=0;i<size/2;i++){
        swap(array[i],array[size-i-1]);
    }
}
void sort(float array[], int size, bool isAscending){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(array[j]>array[j+1]) swap(array[j],array[j+1]);
        }
    }
    if(!isAscending) reverseArray(array,size);
}