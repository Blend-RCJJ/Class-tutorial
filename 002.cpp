//文法を学ぼう
// classの定義

class CLASS_NAME {
   public:  //とりま脳死で打つこと
    //ここに関数や変数を書く
    int example_variable;
    void example_function(){
        //関数の中身
    };  //セミコロンいります
};      //セミコロンを忘れない

//これで型ができました。これを使ってインスタンスを作りましょう。

CLASS_NAME instance_name;

//インスタンス出来上がりです。

//練習問題1
// 001.cppにあったAnimalクラスからbutaインスタンスを生成してください

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

 Animal buta;
//ここに記述せよ

//練習問題2
//なんか変数と関数を一つずつ含むクラスを適当に作ってください

class Chipon{
    public:
    int x;
    
    void Kubota(){
        x = x + 2;
    };

    void Nikoru(){
        x = x = 2;
    };
    //以下に記述せよ；
};