#include <iostream>

using namespace std;
class stack{
    public:
    int top;
    int size;
    char* sop;
};
int isEmty(stack* sp){
if(sp->top==-1){
    return 1;
}
else{
    return 0;
}
}
int isFull(stack* sp){
    if(sp->top==sp->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(stack* sp,char val){
    if(isFull(sp)){
        cout<<"STACK IS IN OVERFLOW CONDITION "<<endl;
    }
    else{
       sp->top++;
       sp->sop[sp->top]=val;
    }
}
char pop(stack* sp){
if(isEmty(sp)){
    cout<<"STACK IS IN UNDERFLOW CONDITION "<<endl;
}
else{
    char val;
    sp->top--;
    sp->sop[sp->top]=val;
    return val;
}
}
int checkparan(stack* sp){
    stack* op;
    op->size=100;
    op->top=-1;

    op->sop=new stack;

    for(int i=0;sp[i]!=NULL;i++){
        if(sp[i]=="("){
            push(op,"(");
        }
        else if(sp[i]==")"){
            if(isEmty(sp)){
                return 0;
            }
            pop(sp);
        }
if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    char * exp = "((8)(*--$$9))";
    // Check if stack is empty
    if(parancheck(exp)){
        cout<<("The parenthesis is matching");
    }
    else{
        cout<<("The parenthesis is not matching");
    }
    return 0;
}