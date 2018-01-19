#include <iostream>

using namespace std;

void swapNumber (int *x, int *y) {

        int temp;
        temp = *x;
        *x = *y;
        *y = *x;
    }

    void showValue (int x,int y){
    cout << "This is a ; " << x << endl;
    cout << "this is a ; " << y << endl;
    }
int main() {
    /* เขียนโปรแกรมรับค่ารัศมีวงกลมจากคีย์บอร์ด และหาพื้นที่ของวงกลมเป็นทศนิยม 4 ตำแหน่ง
    โดยกำหนดให้โปรแกรมหาพื้นที่ของวงกลม จนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และกำหนดให้แบ่งการทำงานเป็นโปรแกรมย่อยอย่างน้อย 1 ฟังก์ชัน
    */
    int a,b;

    cin >> a;
    cin >> b;
    showValue(a, b);
    swapNumber(&a,&b);
    showValue(a, b);

    int cmd;

    do {
       cin >> cmd;
       if(cmd = 1) {
        swapNumber(&a, &b);
        showValue(a, b);
       }
    ) while (cmd != 2);

    return 0;
}
