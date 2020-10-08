

#include <stdio.h>
int main() {
int n;
  while(1){
    int flag = 0;
    printf("\n\nEnter Number : "); 
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; ++i) {

        if (n % i == 0 ) {
            flag = 1;
            printf("\n\nNot prime number ! ! ! ");    
            break;
        }
    }

    if (n < 0) {
      printf("\n.\n.\nExit program ");
      break;
    }

    if (n == 1 || n == 0){
      printf("\n\nNot prime number ! ! ! "); 
    }
    else {
        if (flag == 0)
            for(int j=1;j<=12;j++)
            {
              printf("\n %d X %d = %d",n,j,n*j);
            }
}}}