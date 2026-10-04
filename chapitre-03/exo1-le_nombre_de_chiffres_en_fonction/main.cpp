#include <cstdio>

int nombreDeChiffres(long long n){
     if(n==0){
        return 1;
    }
    if(n<0){
        n=-n;
    }
    

    int i=0;

    while(n>0){
        i++;
        n=n/10;
    }
    return i;
}

  
int main(){
    long long n;
    while(scanf("%lld",&n)==1){
        printf("%d\n",nombreDeChiffres(n));
    }
    return 0;
}

