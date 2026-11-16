
#include <cstdio>
int egal(const char a[],const char b[]){
    int i=0;
    while(a[i]!='\0'&&b[i]!='\0'){
        if(a[i]!=b[i])return 0;
        i++;
    }
    return a[i]==b[i];
}
int niveau(const char mot[]){
    if(egal(mot,"DEBUG"))return 0;
    if(egal(mot,"INFO"))return 1;
    if(egal(mot,"WARN"))return 2;
    if(egal(mot,"ERROR"))return 3;
    return -1;
}
int main(){
    char seuil[10],niv[10],mot[200];
    int n,affiches=0,filtres=0;
    scanf("%s",seuil);
    scanf("%d",&n);
    int s=niveau(seuil);
    for(int i=0;i<n;i++){
        scanf("%s %s",niv,mot);
        int v=niveau(niv);
        if(s!=-1&&v!=-1&&v>=s){
            printf("%s %s\n",niv,mot);
            affiches++;
        }else{
            filtres++;
        }
    }
    printf("AFFICHES %d\n",affiches);
    printf("FILTRES %d\n",filtres);

    return 0;
}
