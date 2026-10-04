#include <cstdio>
unsigned int factorielle32(unsigned int n){
    unsigned int result=1 ;
    for(unsigned int cpt=1;cpt<=n;cpt++){
        result*=cpt;
    }
    return result;
}
unsigned long long factorielle64(unsigned long long n){
    unsigned long long result=1;
    for(unsigned long long cpt=1;cpt<=n;cpt++){
        result*=cpt;
    }
    return result;
}
int main(){
    unsigned int n;
    scanf("%u",&n);
    printf("%u\n",factorielle32(n));
    printf("%llu\n",factorielle64(n));

    return 0;

}
