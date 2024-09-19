#include <stdio.h>
int main(){
int N,X,Y,Z;
scanf("%d %d %d %d",&N,&X,&Y,&Z);
if(N>=1&&N<=100&&X>=1&&Z<=N){
    if(X>Y&&X>Z&&Z>Y){
        printf("Yes\n");
    }
    else if (Y>X&&Y>Z&&Z>X){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}
return 0;
}
