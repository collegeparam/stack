#include<stdio.h>
#include<stdlib.h>
int array[100];
int n;
void sort(int lb,int mid,int ub){
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    int* ptr= malloc(n*sizeof(int));// remind to free the memory
    while(i<=mid && j<=ub){
        if(array[i]<=array[j]){
            ptr[k]=array[i];
            i++;
        }
        else if(array[i]>array[j]){
            ptr[k]=array[j];
            j++;
        }
        k++;
    }
    if(i<=mid){
    while(i<=mid)
    {
        ptr[k]=array[i];
        i++;
        k++;
    }
    }
    else if(j<=ub){
    while(j<=ub){
        ptr[k]=array[j];
        j++;
        k++;
    }
    }
    for(int a=lb;a<=ub;a++){
        array[a]=ptr[a];
    }
    free(ptr);

}
void split(int lb,int ub){
    if(lb<ub){
        int mid=(lb+ub)/2;
        split(lb,mid);
        split(mid+1,ub);
        sort(lb,ub,mid);
    }
}
int main(){
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the element at %dth position:",i);
        scanf("%d",&array[i]);
    }
    split(0,n-1);
    for(int i=0;i<n;i++){
        printf("%d\t",array[i]);
        
    }
}