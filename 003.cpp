//実際に使おう

//練習問題
//以下の関数と変数を全てwhowhoクラスにまとめてpandaインスタンスを生成してください

//問題文
int pandaFeeling = 0;

void pandaHappy() {
    pandaFeeling = pandaFeeling + 1;
    printf("panda is happy");
}

void pandaSad() {
    pandaFeeling = pandaFeeling - 1;
    printf("panda is sad");
}

void pandaRestart() {
    pandaFeeling = 0;
    printf("panda is 人生restarted");
}

//回答は以下に記述せよ

class panda {
   public:
    int pandaFeeling = 0;

    void happy() {
        pandaFeeling += 1;
        printf("panda is happy");
    };

    void sad() {
        pandaFeeling -= 1;
        printf("panda is sad");
    };

    void restart() {
        pandaFeeling = 0;
        printf("panda is 人生restarted");
    };
};

panda Kubota;

int main(void) {
    Kubota.happy();
    Kubota.sad();
    Kubota.restart();
}