#include <stdio.h>
int main(){
    
    int n;
    int sum = 0;
    int integer;
    
    //indicate the number of to search
    scanf("%d", &n);
    while (integer != n){
        scanf("%d", &integer);
        sum++;
       
       if (integer > n){
            printf("it is less\n");
        }else if (integer < n){
            printf("it is more\n");
        }
    }
        //sum++;
        printf("Number of tries needed:\n %d", sum);

    return 0;
}
