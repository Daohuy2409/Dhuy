long long int factorial(int n){
    long long int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}