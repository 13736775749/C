#include<stdio.h>
int min(int x,int y);
int mul(int x,int y);
int div(int x,int y);
/*计算2个正整数的和、差、积、商并输出。
输入格式：
输入在一行中给出2个正整数A和B。
输出格式：
“A 运算符 B = 结果”顺序输出和、差、积、商。*/
int add(int x,int y) {
    return x+y;
}
int min(int x,int y) {
    return x-y;
}
int mul(int x,int y) {
    return x*y;
}
int div(int x,int y) {
    return x/y;
}
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);

    printf("%d + %d = %d\n", A, B, add(A,B));
    printf("%d - %d = %d\n", A, B, min(A,B));
    printf("%d * %d = %d\n", A, B, mul(A,B));
    printf("%d / %d = %d\n", A, B, div(A,B));

    return 0;
}
