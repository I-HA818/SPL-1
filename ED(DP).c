#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int ED[100][100];
int m,n;
int min(int a,int b,int c){

    if(a<=b && a<=c) return a;
    if(b<=a && b<=c) return b;
    if(c<=a && c<=b) return c;
}


void printTable(){
for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        printf("%d ",ED[i][j]);
    }
    printf("\n");
   }
    printf("\n\n\n");
}
int main()
{
    char s1[100],s2[100];
int i,j;
   printf("Enter the first string: ");
   scanf("%s",s1);
   printf("Enter the second string: ");
   scanf("%s",s2);

   m=strlen(s1);
   n=strlen(s2);

    char one[m+1],two[n+1];

   for(int i=0;i<=m;i++){
    one[i+1]=s1[i];
   }
   for(int j=0;j<=n;j++){
    two[j+1]=s2[j];
   }
   for(int i=0; i<=m; i++)ED[i][0] = i;
    for(int i=0; i<=n; i++)ED[0][i] = i;

   printTable();

   for(i=1;i<=m;i++){
    for(j=1;j<=n;j++){
        if(one[i]==two[j]){
            ED[i][j]=ED[i-1][j-1];
        }
        else{
            ED[i][j]=min(ED[i-1][j-1],ED[i-1][j],ED[i][j-1])+1;
        }
    }
   }

   printTable();
   printf("%d",ED[i][j]);
    return 0;
}
