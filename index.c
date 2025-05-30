#include <stdio.h>

// 関数プロトタイプ宣言
int code1(); int code2(); int code3(); int code4(); int code5();
int code6(); int code7(); int code8(); int code9(); int code10();

int main(void) {
    // ユーザー入力
    char User_Choice;
    printf("A~Jを入力してください！！");
    scanf("%c", &User_Choice);

    // 改行対策
    getchar();

    // Switch文で条件分岐
    switch(User_Choice) {
        case 'A': code1(); break;
        case 'B': code2(); break;
        case 'C': code3(); break;
        case 'D': code4(); break;
        case 'E': code5(); break;
        case 'F': code6(); break;
        case 'G': code7(); break;
        case 'H': code8(); break;
        case 'I': code9(); break;
        case 'J': code10(); break;
        default:
            printf("A~J 以外の文字が入力されました。\n");
            break;
    }

    return 0;
}

int code1() {
    int number[128] = {1, 2, 3, 4, 5};
    int sum = 0, i;
    for (i = 0; i < 5; i++) {
        sum += number[i];
    }
    printf("配列の合計値は %d\n", sum);
    return 0;
}

int code2() {
    int number[128] = {1, 2, 3, 4, 5};
    int sum = 0, i;
    int array = 5;
    int average = 0;

    for (i = 0; i < 5; i++) {
        sum += number[i];
    }

    average = sum / array;
    printf("平均は%d\n", average);
    return 0;
}

int code3() {
    int number[128] = {1, 2, 3, 4, 5};
    int i;
    for (i = 4; i >= 0; i--) {
        printf("%d ", number[i]);
    }
    printf("\n");
    return 0;
}

int code4() {
    int hairetu[] = {12, 23, 1, 50, 123};
    int n = sizeof(hairetu) / sizeof(hairetu[0]);
    int max = hairetu[0];
    int i;
    for (i = 1; i < n; i++) {
        if (hairetu[i] > max) {
            max = hairetu[i];
        }
    }
    printf("最大値は %d です。\n", max);
    return 0;
}

int code5() {
    int hairetu[] = {12, 23, 1, 50, 123};
    int n = sizeof(hairetu) / sizeof(hairetu[0]);
    int min = hairetu[0];
    int i;
    for (i = 1; i < n; i++) {
        if (hairetu[i] < min) {
            min = hairetu[i];
        }
    }
    printf("最小値は %d です。\n", min);
    return 0;
}

int code6() {
    char E[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    char userText[128];
    printf("文字を入力してください\n");
    scanf("%s", userText);

    if (userText[0] == E[0]) {
        printf("文字がありました\n");
    } else {
        printf("文字がありません\n");
    }
    return 0;
}

int code7() {
    int array1[5] = {10, 20, 30, 40, 50};
    int array2[5];

    for (int i = 0; i < 5; i++) {
        array2[i] = array1[i];
    }

    printf("array2の要素:\n");
    for (int i = 0; i < 5; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;
}

int code8() {
    int array1[5] = {10, 20, 30, 50, 50};
    int num1;
    int count = 0;

    printf("数字を入力してください: ");
    scanf("%d", &num1);

    for (int i = 0; i < 5; i++) {
        if (num1 == array1[i]) {
            count++;
        }
    }

    printf("同じ数字の個数は、%d個あります\n", count);
    return 0;
}

int code9() {
    int array[5] = {30, 10, 50, 20, 40};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    printf("昇順に並べた結果：");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

int code10() {
    int number[128] = {1, 2, 3, 4, 5};
    int sum = 0, i;
    for (i = 0; i < 5; i++) {
        sum += number[i];
    }
    printf("配列の合計値は%d\n", sum);
    return 0;
}
