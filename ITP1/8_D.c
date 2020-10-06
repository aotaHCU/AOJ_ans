#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void){
    char s[1000],p[1000],q[1000];
    scanf("%s",s);
    scanf("%s",p);
    strcpy(q,s);
    strcat(s,q);
    
    if((strstr(s,p))==NULL){printf("No\n");}
    else{printf("Yes\n");}

}