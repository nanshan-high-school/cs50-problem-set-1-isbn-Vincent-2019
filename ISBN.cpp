#include <iostream>
using namespace std;
int main() {
    int ISBN,fist,second,third,fourth,fifth,sixth,seventh,eighth,ninth,tenth;
    cout << "請輸入ISBN碼10碼";
    cin >> ISBN;
    long long isbn = ISBN;
    fist = ISBN / 1000000000 % 10;
    second = ISBN / 100000000 % 10;
    third = ISBN / 10000000 % 10;
    fourth = ISBN / 1000000 % 10;
    fifth = ISBN / 100000 % 10;
    sixth = ISBN / 10000 % 10;
    seventh = ISBN / 1000 % 10; 
    eighth = ISBN / 100 % 10;
    ninth = ISBN / 10 % 10;
    tenth = ISBN / 1 % 10;
    int finals = (fist*1 + second*2 + third*3 + fourth*4 + fifth*5 + sixth*6 + seventh*7 + eighth*8 + ninth*9)%11;
    if (tenth == finals) {
        cout << "驗證碼通過";
    }else {
        cout << "驗證碼錯誤";
     }
}
