#include <cstdio>
void renverser(int t[],int n){
    int i,temporaire;
    for(i=0;i<n/2;i++){
        temporaire=t[i];
        t[i]=t[n-1-i];
        t[n-1-i]=temporaire;
    }
}
int main(){
    int t[5]={1,2,3,4,5};
    int i,n=5;
    renverser (t,n);
     for(i=0;i<n;i++){
        printf("%d\n",t[i]);
    }

    return 0;
}
