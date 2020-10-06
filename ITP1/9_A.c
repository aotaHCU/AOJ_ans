#include <stdio.h>
#include <string.h>
int main(void){
    char w[1000];
    char t[1200];
    int yes=0;
    scanf("%s",w);
    while(1){
        scanf("%s",t);
        if((strcmp(t,"END_OF_TEXT"))==0){break;}
        for(int i=0;t[i]!='\0';i++){
            if(65<=t[i]&&t[i]<=90){t[i] += 32;}
            //printf("%d\n",i);
        }
        if(strcmp(t,w)==0){yes += 1;}
    }
    printf("%d\n",yes);

}