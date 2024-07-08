// Practice13.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_NUMBER 100
#define MIN_NUMBER 1

int main(void)
{
    int num;
    int ans;
    int ans_count; 
    srand(time(NULL));
    ans_count = 0;
    num =( rand() % MAX_NUMBER) + MIN_NUMBER;
    printf("%d～%dまでの数当てゲームを行います。\n", MIN_NUMBER, MAX_NUMBER);
    do {
        printf("正解だと思う数字を入力してください。");
        while (scanf("%d", &ans) != 1) {
            while (getchar() != '\n');
            printf("無効な入力です。%d～%dまでの整数を入力してください\n ", MIN_NUMBER, MAX_NUMBER);
        }
        ans_count ++;
        if (num == ans)
            printf("Bingo!\nおめでとうございます!\nあなたは %d回目で正解することができました", ans_count);
        else if (( num > ans ) && ( ans >= MIN_NUMBER ))
            puts("Small");
        else if (( num < ans ) && ( ans <= MAX_NUMBER ))
            puts("Big");
        else {
            printf("*エラー*\n%d～%dまでの数字を入力してください。(回答数のカウントに加算しません)\n", MIN_NUMBER, MAX_NUMBER);
            ans_count --;
        }
    } while (num != ans);
    return 0;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
