#include<stdio.h>
int main(){

    int n;
    int sump=0,sumn=0;
    scanf("%d",&n);
int array[n];

    for(int i = 0; i<n;i++){
        scanf("%d",&array[i]);
    }


 for(int i = 0;i<n;i++){
    if(array[i]>0){
sump = sump + array[i];
    }
       if(array[i]<0){
        sumn = sumn + array[i];
       } 

    }

   



   
printf("%d %d", sump,sumn);

return 0;
}