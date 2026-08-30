#include <stdio.h>

int main(){
    int n,maxcoll=0,coll=0;
    scanf("%d",&n);
    int m[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&m[i][j]);
    
    for(int j=0;j<n;j++){
        int maxaux = 0;
        for(int i=0;i<n;i++)
            maxaux += m[i][j]*m[i][j];
        if(maxaux<=maxcoll)
            continue;
        maxcoll = maxaux;
        coll = j;
    }
    printf("%d\n",coll);
        
return 0;

}