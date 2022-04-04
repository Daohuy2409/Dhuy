void rFilter(char *s) {
    int n=strlen(s);
    int i=0;
    while(i<n){
        if(((*(s+i)>='a')&&(*(s+i)<='z'))||((*(s+i)>='A')&&(*(s+i)<='Z'))) {
            ++i;
            continue;
        }
        break;
    }
    while(i<n){
        *(s+i)='_';
        ++i;
    }
}