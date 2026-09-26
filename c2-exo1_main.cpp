#include <cstdio>

int main(){
    int a,b;
    for(a=1;a<=12;a++){
        for(b=1;b<=40;b++){
            if(a==1||a==12||b==1||b==40){
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}