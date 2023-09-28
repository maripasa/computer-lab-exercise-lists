#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, y;
    char oper;

    int *px = NULL;
    int *py = NULL;

    puts("== POINTER CALCULATOR ==\n\n- As operações são: \"+, -, *, /\".\n- Digite 0 q 0 para encerrar.\n");

    while (1) {
      
	printf("\nDigite a operação\n> ");
        scanf("%d %c %d", &x, &oper, &y);

        px = &x;
        py = &y;

        printf("\nx; [%p]: %d\ny; [%p]: %d\n", (void *)px, *px, (void *)py, *py);

        switch (oper) {
            case '+':
                printf("\n%d + %d = %d\n", *px, *py, *px + *py);
                break;
            case '-':
                printf("\n%d - %d = %d\n", *px, *py, *px - *py);
                break;
            case '*':
                printf("\n%d * %d = %d\n", *px, *py, *px * *py);
                break;
            case '/':
                if (*py != 0) {
                    printf("\n%d / %d = %f\n", *px, *py, (float)*px / *py);
                } else {
                    printf("\nDivision by zero is not allowed.\n");
                }
                break;
	    case 'q':
		printf("\nPrograma encerrado.\n");
		return 0;
            default:
                printf("\nInvalid operator: %c\n", oper);
        }
    }

    return 0;
}
