#include<stdio.h>
void push();
void pop();
void traverse();
int arr[4],top;
int size =4;
int main(){

int n,top=-1;
while(1){
printf("                 STACK\n");
printf("PUSH                PRESS 1\nPOP                 PRESS 2\nTRAVERSE            PRESS 3\nEXIT                PRESS 4");
printf("\nEnter your choice:");
scanf("%d",&n);
top=-1;
switch (n)
{
case 1:
   
    push();
    
    break;
case 2:
    pop();
    break;
case 3:
    traverse();
    break;
case 4:
   break;
   break;
default:
    break;
}
    
}
}
void push(){
    if(top==size-1){
        printf("Stack overflow.\n");
        return; 
    }
    else {
        int num;
        printf("Enter the element to be enter in to the stack:");
        scanf("%d",&num);
        top++;
        arr[top]=num;
        return top;
        
    }
}
void pop(){
    if (top==-1){
        printf("UNDERFLOW\n");
    }
    else{
        printf("popped element:%d\n",arr[top]);
        top=top-1;
        return top;

    }
}
void traverse(){
    if(top==-1){
        printf("Underflow\n");

    }
    else {
        printf("Elements present in the stack:\n");
        for(int i=top;i>=0;--i){
            printf("%d\n",arr[i]);
            
        }
        return top;

    }
}