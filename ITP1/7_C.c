#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void){
    int r,c,table[101][101];
    int row[101],column[101];
    scanf("%d %d",&r,&c);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&table[i][j]);
        }
    }
    //入力終了

    //計算(row行)
    int sum;
    for(int i=0;i<r;i++){
        sum=0;
        for(int j=0;j<c;j++){
            sum=sum+table[i][j];
        }
        row[i]=sum;
    }

    //計算(column行)
    for(int j=0;j<c;j++){
        sum=0;
        for(int i=0;i<r;i++){
            sum=sum+table[i][j];
        }
        column[j]=sum;
    }
    //出力開始

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",table[i][j]);
        }
        printf("%d\n",row[i]);
    }

    for(int i=0;i<c;i++){
        printf("%d ",column[i]);
    }

    sum=0;
    for(int i=0;i<c;i++){
        sum=sum+column[i];
    }
    printf("%d\n",sum);
}