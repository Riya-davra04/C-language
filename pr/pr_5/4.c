#include<stdio.h>
main()
{
    int r,c;
    printf("Enter array size: ");
    scanf("%d",&r);

     printf("Enter array size: ");
    scanf("%d",&c);

    int a[r][c];

    int i,j,n=0,r1,c1;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("Enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        } 
        printf("\n");
     }
            printf("Enter row number:");
            scanf("%d",&r1);

            printf("The elements of row %d: ",r1);

            int r_sum=0;

      
        for(j=0;j<c;j++){
            printf("%d, ",a[r1][j]);
            r_sum+=a[r1][j];
        } 
        printf("\n");
        printf("The sum of row %d : %d\n\n",r1,r_sum);
       
         printf("Enter column number:");
            scanf("%d",&c1);

            printf("The elements of column %d: ",c1);

            int c_sum=0;

      
        for(i=0;i<r;i++){
            printf("%d, ",a[i][c1]);
            c_sum+=a[i][c1];
        } 
        printf("\n");
        printf("The sum of row %d : %d",c1,c_sum);

}