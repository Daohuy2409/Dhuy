string pigLatin(string word){
    char s[]={'e','u','o','a','i'};
    bool check=false;
    int size=word.size();
    for(int i=0;i<5;i++){
        if(word[0]==s[i]) {
            check=true;
            break;
        }
    }
    if(check){
        word=word+"way";
    }
    else{
        char tmp=word[0];
        for(int i=0;i<size-1;i++){
            word[i]=word[i+1];
        }
        word[size-1]=tmp;
        word=word+"ay";
    }
    return word;
}