#include <cstdio>
int main(){
    char format[20000];
    int arguments[50];
    int n,replaces=0,manquants=0;
    fgets(format,20000,stdin);
    int i=0;
    while(format[i]!='\0'){
        if(format[i]=='\n'){
            format[i]='\0';
            break;
        }
        i++;
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arguments[i]);
    }
    for(int i=0;format[i]!='\0';i++){
        if(format[i]=='{' && format[i+1]>='0' && format[i+1]<='9' && format[i+2]=='}'){
            int numero=format[i+1]-'0';
            if(numero<n){
                printf("%d",arguments[numero]);
                replaces++;
            }
            else{
                printf("{%d}",numero);
                manquants++;
            }
            i+=2;
        }
        else{
            printf("%c",format[i]);
        }
    }
    printf("REPLACES %d\n",replaces);
    printf("MANQUANTS %d\n",manquants);

    return 0;
}
