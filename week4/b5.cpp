bool isPrime (int number){
    if(number<2) return false;
    else if(number<4) return true;
    else{
        bool check=true;
        for(int i=2;i<=sqrt(number);i++){
            if(number%i==0){
                check=false;
                break;
            }
        }
        return check;
    }
}