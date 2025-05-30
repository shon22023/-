#include <stdio.h>

int code1();
int code2();
int code3();
int code4();
int code5();
int code6();
int code7();
int code8();
int code9();
int code10();

int main(void){
    // ユーザー入力
    char User_Choice;
    printf("A~Jを入力してください！！");
    scanf("%c", &User_Choice);
    
    // バッファをクリア
    getchar(); //これをしないと

    // Switch文で条件分岐
    switch(User_Choice) {
        case 'A':
            printf("a が入力されました。\n");
            code1();
            break;
        case 'B':
            printf("b が入力されました。\n");
            code2();
            break;
        case 'C':
            printf("c が入力されました。\n");
            code3();
            break;
        case 'D':
            printf("d が入力されました。\n");
            code4();
            break;
        case 'E':
            printf("e が入力されました。\n");
            code5();
            break;
        case 'F':
            printf("f が入力されました。\n");
            code6();
            break;
        case 'G':
            printf("g が入力されました。\n");
            code7();
            break;
        case 'H':
            printf("h が入力されました。\n");
            code8();
            break;
        case 'I':
            printf("i が入力されました。\n");
            code9();
            break;
        case 'J':
            printf("j が入力されました。\n");
            code10();
            break;
        default:
            printf("a~j 以外の文字が入力されました。\n");
            break;
    }
    return 0;
}

int code1() {
    // 足し算する数字の配列
    int number[128] = {1, 2, 3, 4, 5};
    // 足し算結果を表示する変数
    int sum = 0, i; 
    
    // 配列の要素を足し算
    for (i = 0; i < 5; i++) {
        sum += number[i];
    }
    
    printf("配列の合計値は %d\n", sum);
    return 0;
}

int code2() {
    // Your code here!  
    
    //足し算する数字の配列
    int number[128] = {1, 2, 3, 4, 5};
    //足し算結果を表示する変数
    int sum = 0, i; 
    //配列の個数
    int array= 5;
    //平均を格納する変数
    int average = 0;
    
    
    for( i =0; i< 5; i++) {
        
    sum += number[i]; //足し算
   
    }
    
    average = sum/array;
    
     printf("平均は%d\n", average);
     return 0;

}

int code3() {

    int number[128] = {1, 2, 3, 4, 5};
    int i;

    // 逆順で表示
    for (i = 4; i >= 0; i--) {
        printf("%d ", number[i]);
    }

    return 0;


}

int code4() {
 
    int hairetu[] = {12, 23, 1, 50, 123};
    int n = 6;
    int max = hairetu[0];  // 初期値は最初の要素
    int i;

    for (i = 1; i < n ; i++) {
        
        //hairetuよりMAXのほうが大きいか確認する
        if (hairetu[i] > max) {
            max = hairetu[i];
        }
    }

    printf("最大値は %d です。\n", max);
    return 0;


}

int code5() {
     int hairetu[] = {12, 23, 1, 50, 123};
    int n = 6; //配列の個数
    int min = hairetu[0];  // 初期値は最初の要素
    int i;

    for (i = 1; i < n; i++) {
        
        //hairetuよりminのほうが小さいか確認する
        if (hairetu[i] < min) {
            min = hairetu[i];
        }
    }

    printf("最省値は %d です。\n", min);
    return 0;

}

int code6() {
      // Your code here![
   char E[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    char userText[128];
    printf("文字を入力してください\n");
   scanf("%s", userText);
  // userText[0] と E の文字を比較
    if (userText[0] == E[0]) {  
        printf("文字がありました\n");
    } else {
        printf("文字がありません\n");
    }
    return 0;

}

int code7() {
 
     // 配列array1の宣言と初期化
    int array1[5] = { 10, 20, 30, 40, 50 };

    // 配列array2の宣言
    int array2[5];

    // array1の要素をarray2にコピー
    for (int i = 0; i < 5; i++) {
        array2[i] = array1[i];
    }

    // array2の要素を表示
    printf("array2の要素:\n");
    for (int i = 0; i < 5; i++) {
        printf("array2[%d] = %d\n", i, array2[i]);
    }

    return 0;

}

int code8() {
      // 配列array1の宣言と初期化
    int array1[5] = {10, 20, 30, 50, 50};

    // 比較する数字の変数
    int num1;
    
    // 同じ数字の個数を数える変数
    int count = 0;
    
    // 数字の入力を促す
    printf("数字を入力してください: ");
    scanf("%d", &num1);  // &を追加し、フォーマット指定子を修正
    
    // array1の要素をチェックして同じ数字の個数を数える
    for (int i = 0; i < 5; i++) {
        if (num1 == array1[i]) {  // array1と比較
            count++;  // 同じ数字が見つかったらカウントを増やす
        }
    }
    
    // 結果を表示
    printf("同じ数字の個数は、%d個あります\n", count);

    return 0;

}

int code9() {
      int array[5] = {30, 10, 50, 20, 40};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
    // i回目の並び替え
    for (int j = 0; j < n - 1 - i; j++) {
        // j番目とj+1番目を比べる
        if (array[j] > array[j + 1]) {
            // 順番が逆なら入れ替え
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
        }
    }
}
    // 結果を表示
    printf("昇順に並べた結果：");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;

}

int code10() {


    // Your code here!  
    
    //足し算する数字の配列
    int number[128] = {1, 2, 3, 4, 5};
    //足し算結果を表示する変数
    int sum = 0, i; 
    
    
    for( i =0; i< 5; i++) {
        
    sum += number[i]; //足し算
        
    }
     printf("配列の合計値は%d\n", sum);
     return 0;

}

