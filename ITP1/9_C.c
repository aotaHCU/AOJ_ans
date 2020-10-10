#include <stdio.h>
#include <string.h>
int main(void){
    char s[105],ss[105];
    int n,taro=0,hanako=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s %s",s,ss);
        if((strcmp(s,ss))>0){taro += 3;}
        else if((strcmp(s,ss))<0){hanako += 3;}
        else{taro++;hanako++;}
    }
    printf("%d %d\n",taro,hanako);
    

}