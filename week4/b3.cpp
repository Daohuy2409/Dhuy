void printArrow(int n, bool left){
    if(left){
        for(int i=0;i<n;i++){
            for(int j=n-1-i;j>0;j--){
                cout<<" ";
            }
            for(int j=i;j<n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<" ";
            }
            for(int j=-1;j<i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                cout<<"  ";
            }
            for(int j=0;j<=n-i-1;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=1;i<n;i++){
        	for(int j=0;j<n-i-1;j++){
        		cout<<"  ";
        	}
        	for(int j=-1;j<i;j++){
        		cout<<"*";
        	}
        	cout<<endl;
        }
    }
}