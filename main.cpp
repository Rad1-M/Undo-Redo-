#include <iostream>
#include "clsMyString.h"

using namespace std;

int main() {
    clsMyString text;

    cout << "=== تجربة Undo/Redo ===\n\n";

    // تغيير القيمة
    text.Value = "A";
    cout << "Set: " << text.Value << endl;

    text.Value = "B";
    cout << "Set: " << text.Value << endl;

    text.Value = "C";
    cout << "Set: " << text.Value << endl;

    // التراجع خطوة واحدة
    text.Undo();
    cout << "Undo: " << text.Value << endl;

    // التراجع خطوة ثانية
    text.Undo();
    cout << "Undo: " << text.Value << endl;

    // إعادة التغيير
    text.Redo();
    cout << "Redo: " << text.Value << endl;

    // إضافة تغييرات جديدة بعد Undo
    text.Value = "D";
    cout << "Set: " << text.Value << endl;

    // تجربة Undo و Redo مرة أخرى
    text.Undo();
    cout << "Undo: " << text.Value << endl;

    text.Redo();
    cout << "Redo: " << text.Value << endl;

    return 0;
}
