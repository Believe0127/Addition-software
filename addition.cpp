#include <iostream>

using namespace std;

void calculate(){
    int value1;
    int value2;

    cin >> value1;
    cout << "+\n";
    cin >> value2;
    cout << "計算結果: " << value1 + value2 << endl;
}

int main(){
    cout << "2つの数値を入力してください：\n";

    calculate();
    return 0;

}