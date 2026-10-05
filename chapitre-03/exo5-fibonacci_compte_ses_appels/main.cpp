#include <cstdio>
long long fibonacci(int n,long long& appels){
    appels++;
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1,appels)+fibonacci(n-2,appels);
}
int main(){
    int n;
    long long appels=0;
    scanf("%d",&n);
    printf("%lld\n",fibonacci(n,appels));
    printf("%lld\n",appels);
    return 0;
}
