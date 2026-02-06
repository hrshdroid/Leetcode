#include <string.h>
bool isValid(char* s) {
    char stack[10000];
    int top=-1;
    if (strlen(s)<2){
        return false;
    }

    for (int i=0;s[i]!='\0';i++){

        if (s[i]=='{'||s[i]=='['||s[i]=='('){
            top++;
            stack[top]=s[i];
        }
        else{
            if (top==-1){
            return false;
            }        

            if (stack[top]!='{' && s[i]=='}'||stack[top]!='(' && s[i]==')'||stack[top]!='[' && s[i]==']'){
                return false;
            }
            top--;
        }
        
    }
    return top==-1;
}