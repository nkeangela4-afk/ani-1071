#include <cstdio>
int chiffresRecursif(int n){
    n=(n<0)?-n:n;
    return (n<10)?1:1+chiffresRecursif(n/10);
}
int sommeChiffresRecursif(int n){
    n=(n<0)?-n:n;
    return (n<10)?n:(n%10)+sommeChiffresRecursif(n/10);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",chiffresRecursif(n));
    printf("%d\n",sommeChiffresRecursif(n));
    return 0;
}
