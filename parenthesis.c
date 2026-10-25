#include<stdio.h>
int top =-1;
char stack[50];
int size=50;

void push(char val){
    if(top== size-1){
        printf("Stack is full");
    }
    else{
        stack[++top] =val;
    }
}
char pop(){
    if(top==-1){
        printf("Stack is empty");
        return '\0';
    }else{
        return stack[top--];
    }
}
int validate(char open,char close){
    if(
        (open=='(' && close==')')|| (open=='{' && close=='}')||(open=='[' && close==']')
    ){
        return 0;
    }
    return 1;
}
int main(){

    char exp[100];
    printf("Enter expression : ");
    // fgets(exp,100,stdin);
    scanf("%s",exp);
int flag=1;             //it is acting as a checkmark 1 means valid  0 means invalid         
    for(int i=0;exp[i] !='\0';i++){
        char ch=exp[i];
        if(ch == '(' || ch == '{' || ch == '['){
            push(ch);
        }
        else if(ch==')'|| ch ==']' || ch == '}'){
            if(top==-1){
                flag=0;
                break;
            }
            else{
                if(((validate( pop(),ch)))){
                    flag=0; 
                    break;
                }
            }
        }
    }
    if(top !=-1){
        flag=0;
    }
    if(flag ==1){
        printf("Valid parenthesis");
    }
    else printf("Invalid parenthesis");
    return 0;

    
}