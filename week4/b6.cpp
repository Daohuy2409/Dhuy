double calculate (double a, char operat, double b){
    double result=0;
    switch(operat){
        case '+':{
        	result=a+b;
        	break;
        }
        case '-':{
        	result=a-b;
        	break;
        }
        case '*':{
        	result=a*b;
        	break;
        }
        case '/':{
        	result=a/b;
        	break;
        }
    }
    return result;
}