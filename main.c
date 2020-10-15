#include <stdio.h>
int main(void) {
  int i, j, k;
  int A[6][4], B[4][5];
  int Sum[6][5]={{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
  printf("\n\tProgram for even number\n");
  for(i=0;i<6;i++){
    printf("Data A[%d][0-5]\n",i);
    for(j=0;j<4;j++){
      printf("\t A[%d][%d] : ",i,j);
      scanf("%d",&A[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<4;i++){
    printf("Data B[%d][0-2]\n",i);
    for(j=0;j<5;j++){
      printf("\t B[%d][%d] : ",i,j);
      scanf("%d",&B[i][j]);
    }
    printf("\n");
  }
  printf("Number A[6][4]\n");
  for(i=0;i<6;i++){
    for(j=0;j<4;j++){
      printf("%-3d ",A[i][j]);
    }
    printf("\n");
  }
  printf("Number B[4][5]\n");
  for(i=0;i<4;i++){
    for(j=0;j<5;j++){
      printf("%-3d ",B[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<6;i++){
    for(j=0;j<5;j++){
      for(k=0;k<4;k++){
        Sum[i][j] += (A[i][k] * B[k][j]);
      }
    }
  }
  printf("\n\n\t=== Answer ===\n\n");
  for(i=0;i<6;i++){
    for(j=0;j<5;j++){
      printf("\t%-5d",Sum[i][j]);
    }
    printf("\n");
  }
}