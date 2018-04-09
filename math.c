#include <iostream>
#include <string>
#include <stack>

using namespace std;


char stack[len];
int top = -1;


void convert(char infix[],char postfix[],int ln){
   int i,j,symbol = 0;
    stack[++top] = '#';
}
   for(i = 0; i<len; i++) {
      symbol = infix[i];

      if(isOperator(symbol) == 0) {
         postfix[j] = symbol;
         j++;
      } else {
         if(symbol == '(') {
            push(symbol);
         }else {
            if(symbol == ')') {

               while(stack[top] != '(') {
                  postfix[j] = pop();
                  j++;
               }

               pop();
            }


int main()
{
    string in;
    cout << "Enter a Equation:\n";
    cin >> in;

    int len = in.size();
    char infix[len];
    char postfix[len];
    char a;



    for(int i=0; i<len; i++){
        if(in[i] != '+' && in[i] != '-' && in[i] != '*' && in[i] != '/' && in[i] != '(' && in[i]!=')'){
            cout << "Enter the value of: " << in[i] << " = ";
            cin >> a;
            infix[i] = a;

        }else{
            infix[i] = in[i];
        }
    }
    cout << "\nEquation is: ";
    for(int i=0; i<len; i++){
        cout << infix[i];
    }


    return 0;
}



