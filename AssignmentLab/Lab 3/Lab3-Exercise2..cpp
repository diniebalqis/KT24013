#include <iostream>
#include <string>
#include <stack>

using namespace std;

char openingBracket(char closing_bracket){
	
    char opening_bracket;
    
    if (closing_bracket == '}'){
    	return '{' ;
    	
	}else if (closing_bracket == ')'){
		return '(' ;
		
	}else if (closing_bracket == ']'){
		return '[' ;

	} 
}

void ParenthesisBalanced(string symbol){
	
    stack<char> s;
    bool isBalanced = true;
    
    for(int i=0; i<symbol.length(); i++){
    	
        if( symbol[i] == '(' || symbol[i] == '{' || symbol[i] == '[' ){
        	s.push(symbol[i]);
        	
        }else if(symbol[i] == ')' || symbol[i] == '}' || symbol[i] == ']'){
        	
            if( (s.empty() && i!=symbol.length()) || (s.top()!= openingBracket(symbol[i]) )){
            	isBalanced = false;
            	break;
            	
            }else{
            	s.pop();

            }
        }
    }
    
    if(isBalanced){
        cout<< "TRUE\n";
        
    }else if(!isBalanced){
    	cout << "FALSE\n";
    }
}

int main(){
	
	cout << "Nur Dinie Balqis Binti Abdul Yazid\nBI19110029" << endl;
	cout << "Lab Assignment 3 - Exercise 2\n" << endl;	
	
    string symbol;
    cout << "\nEnter an expression of parenthesis symbols: ";
    getline(cin,symbol);
    cout << "\nParenthesis symbols are opened and closed prfectly: ";
    ParenthesisBalanced(symbol);

    return 0;
}
