//他の関数からの呼び出し方
// instance_name.function_name();で呼び出します。
//変数はinstance_name.variable_nameで呼び出します。

//例
int main() {
    scanf("%d", &neko.feeling);
    if (neko.feeling == 1) {
        neko.happy();
    } else if (neko.feeling == 2) {
        neko.becomeKubota();
    } else {
        neko.binaryAgape();
    }

    printf("%d", neko.feeling);
}

//練習問題
//以下のArduino標準関数の内、裏がclassにまとめられているものだけを抜き出してね

delay();
pinMode();
Wire.available();
digitalWrite();
Serial.begin();

//練習問題
//1.Animalクラスから追加でkumakenGOというインスタンスを作ってくだせぇ
//2.main関数の指定箇所にscanfで入力を受け取り、kumakenGOインスタンス内のfeeling変数に代入するプログラムを書いてください
//3.最後にkumakenGOインスタンスのfeeling変数をprintfで出力してください。

#include <stdio.h>

class Animal {
   public:
    int x;
    int feeling = 0;

    void migi() {
        x = x + 1;
    };

    void hidari() {
        x = x - 1;
    };
};

Animal neko;
//指定箇所 1.

int main(void) {
    neko.migi();
    neko.migi();
    neko.hidari();
    printf("%d", neko.x);

    //↓指定箇所 2 .3.

}