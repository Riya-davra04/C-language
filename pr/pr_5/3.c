#include<stdio.h>
main()
{
    int r,c;
    printf("Enter array size: ");
    scanf("%d",&r);

     printf("Enter array size: ");
    scanf("%d",&c);

    int a[r][c];

    int i,j,n=0;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        } 
        printf("\n");
     }

      for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf(" %d",a[j][i]);

        } 
        printf("\n");
     }
     
}