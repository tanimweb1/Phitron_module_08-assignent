#include<stdio.h>
int main(){

    //01
    int n;
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        printf("%d. I Want More Assignments\n",i);
    }

return 0;
}






#include<stdio.h>
int main(){

  //02
    int n;
    scanf("%d",&n);

if(n>0){

   for(int i = 1;i<=n;i++){
    printf("%d ",i);}

}
 

 else if(n<=0){
  for(int i = n; i<=0;i++){
    printf("%d ",i);
  }
}
    



    

return 0;
}






#include<stdio.h>
int main(){

    //03
    int n;
    scanf("%d",&n);

    int array[n];
for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
for(int i=n-1;i>0;i = i-1){
    if(i%2!=0){
printf("%d ",array[i]);

    }
    }

return 0;
}







#include<stdio.h>
int main(){


//04
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
