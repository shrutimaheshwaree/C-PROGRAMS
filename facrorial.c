# include<stdio.h>
# include<conio.h>

int main() {
                    int n,F=1;
                    printf("enter a number : ");
                    scanf("%d" , &n);
                    while(n!=0){
                     F =F*n;
                     n--;
                    }
                    printf("factorial of %d is %d" , n,F);
                    return 0;
}