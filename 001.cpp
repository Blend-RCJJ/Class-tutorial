// 001
//クラスとはいろいろな機能をまとめられるやつです。関数は使える前提で

#include <stdio.h>

int neko_x = 0;

void nekoMigi() {
    neko_x = neko_x + 1;
}

void nekoHidari() {
    neko_x = neko_x - 1;
}

int main(void) {
    nekoMigi();
    nekoMigi();
    nekoHidari();
    printf("%d", neko_x);
}

//こんなのがあったとします。これを実行すると何が起こるかはわかりますか？
//実行すると、1が出力されます。なぜなら、nekoMigi()を2回呼び出して、nekoHidari()を1回呼び出したからです。

//これをクラスを使って書き換えてみましょう。
#include <stdio.h>

class Animal {
   public:
    int x;

    void migi() {
        x = x + 1;
    };

    void hidari() {
        x = x - 1;
    };
};

Animal neko;

int main(void) {
    neko.migi();
    neko.migi();
    neko.hidari();
    printf("%d", neko.x);
}

//これは、Animalクラスを定義して、その中にmigi()とhidari()という関数を定義しています。
//そして、Animalクラスのインスタンスをnekoという名前で作っています。クラスはケーキの作り方みたいなもので、それさえあれば無限にケーキの実態（インスタンス）を生成できます。

//練習問題
//Animalクラスの中にxを0にするreset（）という関数を作ってください

class Animal {
   public:
    int x;

    void migi() {
        x = x + 1;
    };

    void hidari() {
        x = x - 1;
    };

    void reset() {
        x = 0;
    };

    //ここにreset()を記述せよ
};