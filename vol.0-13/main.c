#include <stdio.h>

int stack[10];
int data[20];
int i;
int j;
int n;

int main(int argc, const char * argv[]) {
    i = 0;
    j = 0;
    while (scanf("%d",&data[i])!=EOF) {
        i ++;
        j ++;
    }
    for (i = 0; i < j; i ++) {
        if (data[i] == 0) {
            n --;
            printf("%d\n",stack[n]);
        } else {
            stack[n] = data[i];
            n ++;
        }
    }
    return 0;
}
