int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int n=lenArr1+lenArr2;
    int *arr=new int [n];
    int index1=0;
    int index2=0;
    int i=0;
    if(firstArr[0]<firstArr[lenArr1-1]){
        while(index1<lenArr1&&index2<lenArr2){
            if(firstArr[index1]<secondArr[index2]) {
                arr[i]=firstArr[index1];
                index1++;
            }
            else{
                arr[i]=secondArr[index2];
                index2++;
            }
            i++;
        }
        while(index1<lenArr1){
            arr[i]=firstArr[index1];
            index1++;
            i++;
        }
        while(index2<lenArr2){
            arr[i]=secondArr[index2];
            index2++;
            i++;
        }
    }
    else{
        while(index1<lenArr1&&index2<lenArr2){
            if(firstArr[index1]>secondArr[index2]) {
                arr[i]=firstArr[index1];
                index1++;
            }
            else{
                arr[i]=secondArr[index2];
                index2++;
            }
            i++;
        }
        while(index1<lenArr1){
            arr[i]=firstArr[index1];
            index1++;
            i++;
        }
        while(index2<lenArr2){
            arr[i]=secondArr[index2];
            index2++;
            i++;
        }
    }
    return arr;
}