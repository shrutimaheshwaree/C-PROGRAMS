#include<stdio.h>
#include<conio.h>
int main() {
                    int n, s=0,r,m;
                    printf("enter a number : ");
                    scanf("%d",&n);
                    m=n;
                    while(n!=0){
                                        r=n%10;
                                        s=s*10+r;
                                        n = n/10;
                    }
                    if(m==s) {
                                        printf("palindrome");
                    }
                    else{
                                        printf("not palindrome");
                    }
                    
}