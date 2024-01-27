#include <stdio.h>
#include <string.h>

int main() {
    int n;
    int sco=1;
    int sco1;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        char ps[81]= {0};
        sco1 = 0;
        scanf("%s", ps);
        for (int j=0; j<strlen(ps); j++){
            if (ps[j] == 'O') {
                sco1 += sco;
                sco++;
            }
            else if (ps[j] == 'X') sco = 1;
        }
        printf("%d\n", sco1);
        sco = 1;
    }
    return 0;
}