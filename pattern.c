/*
1234
1234
1234
1234*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",j+1);
        }printf("\n");
    }
    return 0;
}

/*
****
****
****
****
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
}

/*
ABCD
ABCD
ABCD
ABCD
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(char j='A';j<='D';j++){
            printf("%c",j);
        }
        printf("\n");
    }
}


/*
AAAA
BBBB
CCCC
DDDD
*/

#include<stdio.h>
int main(){
    int n=4;
    for(char j='A';j<='D';j++){
        for(int i=0;i<n;i++){
            printf("%c",j);
        }
        printf("\n");
    }
}

/*
123
456
789
*/
#include<stdio.h>
int main(){
    int n=3;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
}

/*
ABC
DEF
GHI
*/
#include<stdio.h>
int main(){
    char ch='A';
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",ch);
            ch++;
        }printf("\n");
    }
}

/*
*
**
*** 
****
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*",j+1);
        }
        printf("\n");
    }
}

/*
1
22
333
4444
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",i+1);
        }printf("\n");
    }
}

/*
1
12
123
1234
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d",j+1);
        }
        printf("\n");
    }
}

/*
A
BB
CCC
DDDD
EEEEE
*/
#include<stdio.h>
int main(){
    int n=5;
        for(char ch='A';ch<='E';ch++){
            for(int i=0;i<=ch-'A';i++){
           printf("%c",ch);
        }
        printf("\n");
    }
}

/*
1
21
321
4321
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j>0;j--){
            printf("%d",j);
        }
        printf("\n");
    }
}

/*
1
2 3
4 5 6
7 8 9 10*/
#include<stdio.h>
int main(){
    int n=4;
    int num=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}

/*
A
AB
ABC
ABCD
ABCDE
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}

/*
A
BC
DEF
GHIJ
*/
#include<stdio.h>
int main(){
    char ch='A';
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
}

/*
A
BA
CBA
DCBA
*/
#include<stdio.h>
int main(){
    int n=4;
        for(char ch='A';ch='D';ch++){
            for(int i=0;i<n;i++){

        }
        
    }
}

/*
1111
 222
  33
   4
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        for(int j=n-1;j>=i;j--){
            printf("%d",i+1);
        }
        printf("\n");
    }
}

/*
AAAA
 BBB
  CC
   D
*/
#include<stdio.h>
int main(){
    int n=4;
    for(char ch='A';ch<='D';ch++){
        for(int i=0;i<ch-'A';i++){
            printf(" ");
        }
        for(int i=0;i<n-(ch-'A');i++){
            printf("%c",ch);
        }
        printf("\n");
    }
}

/*
Right-Aligned Star Triangle:

    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i)-1;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
    }

    /*
    Inverted Right-Aligned Star Triangle:

*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<(n-i)-1;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }printf("\n");
    }
    return 0;
    }

/*
Square of Stars:

*****
*****
*****
*****
*****
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("*",j+1);
        }
        printf("\n");
    }return 0;
}

/*
Hollow Square of Stars:

*****
*   *
*   *
*   *
*****
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

/*
Inverted Number Triangle:

12345
1234
123
12
1
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=n-1;j>=i;j--){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}

/*
Centered Pyramid of Stars:

    *
   ***
  *****
 *******
*********
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            printf(" ");
        }
        for(int j=0;j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }       return 0;
}

/*
Diamond Pattern 
Write a C program to print the following diamond pattern:

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/
#include<stdio.h>
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<n-(i+1);j++){
            printf(" ");
        }
        for(int j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

/*
    1
   121
  12321
 1234321
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d",j+1);
        }
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
  return 0;
}

/*
    *
   *  *
 *     *
*       *
 *     *
  *  *
   *
*/

#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            printf(" ");
        }
        printf("*");
        
        if(i!=0){
            for(int j=0;j<=2*i-1;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
       for(int i=n-2;i>=0;i--){
        for(int j=0;j<n-(i+1);j++){
            printf(" ");
        }
        printf("*");
        if(i>0){
            for(int j=0;j<=2*i-1;j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    
}

/*
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *
butterfly oattern
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int j=0;j<2*(n-i-1);j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            printf("*");
        }
        for(int j=0;j<2*(n-i-1);j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}

/*
   1
  1 1
 1 2 1
1 3 3 1
*/
#include<stdio.h>
int main(){
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            printf(" ");
        }
        int value=1;
        for(int j=0;j<=i;j++){
            printf("%d ",value);
            value=value * (i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}