#include <cstdio>

long long pgcd(long long a,long long b){
    if(a<0){
        a=-a;
    }
    if(b<0){
        b=-b;
    }
    while(b!=0){
        int x=a%b;
        a=b;
        b=x;
    }
    return a;
}

long long ppcm(long long a,long long b){
    if(a==0 || b==0){
        return 0;
    }
    return(a/pgcd(a,b))*b;
}
int main(){
    long long a,b;
    
    scanf("%lld %lld",&a,&b);
    printf("%lld\n",pgcd(a,b));
    printf("%lld\n",ppcm(a,b));

    return 0;
}
