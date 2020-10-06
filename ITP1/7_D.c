#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main(void){
    long long int n,m,l,a[111][111],b[111][111];
    long long int c[111][111];
    long long int sum;
    int i,j,k;
    int count,count2;
    scanf("%lld %lld %lld",&n,&m,&l);

    //入力
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%lld",&a[i][j]);
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            scanf("%lld",&b[i][j]);
        }
    }
    //計算

    for(count=0;count<n;count++){
        for(count2=0;count2<l;count2++){
            sum=0;
            for(int count3=0;count3<m;count3++){
                sum=sum+a[count][count3]*b[count3][count2];
            }
            c[count][count2]=sum;
        }
    }

    //出力
    for(i=0;i<n;i++){
        printf("%lld",c[i][0]);
        for(j=1;j<l;j++){
            printf(" %lld",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}