void readArray(int a[], int n){
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}
bool compareArray(int array1[], int array2[], int n){
    bool check=true;
    for(int i=0;i<n;i++){
        if(array1[i]!=array2[i]) {
            check=false;
            break;
        }
    }
    return check;
}