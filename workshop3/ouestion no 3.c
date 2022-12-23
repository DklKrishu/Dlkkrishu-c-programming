#include <stdio.h>

void main(){
    int arr[5] = {3,35,49,16,92};
    int i; int sum=0; int current;
    
    for(i=0;i<5;i++){
        current = arr[i];
        if(current%7==0 && current%2!=0 && current%3!=0){
            sum += current;
        }
    }
    
    printf("%d", sum);
}
