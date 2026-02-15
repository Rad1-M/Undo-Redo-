# clsMyString - مشروع تعليمي: محاكاة Undo/Redo في C++

💡 هذا مشروع تعليمي بسيط لتوضيح فكرة **Undo و Redo** باستخدام **المكدسات (stack)**.  
💡 This is a simple educational project to demonstrate the **Undo/Redo** concept using **stacks**.

---

## فكرة المشروع / Project Idea

- عند تغيير القيمة، يخزن البرنامج النسخة القديمة في `_Undo`.  
- When the value changes, the program saves the old version in `_Undo`.  

- عند التراجع (Undo)، تُسترجع القيمة السابقة وتنتقل الحالية إلى `_Redo`.  
- On Undo, the previous value is restored and the current one moves to `_Redo`.  

- عند إعادة التغيير (Redo)، تُسترجع القيمة من `_Redo` وتنتقل الحالية إلى `_Undo`.  
- On Redo, the value is restored from `_Redo` and the current one moves to `_Undo`.  

---

## الخصائص الأساسية / Main Features

- `Set(string value)`: تغيير القيمة وحفظ النسخة القديمة.  
- `Set(string value)`: Change the value and save the old version.

- `Get()`: الحصول على القيمة الحالية.  
- `Get()`: Get the current value.

- `Undo()`: التراجع خطوة واحدة.  
- `Undo()`: Undo one step.

- `Redo()`: إعادة التغيير الذي تم التراجع عنه.  
- `Redo()`: Redo the undone change.

- خاصية `Value`: تسهل استخدام الكلاس كما لو كانت خاصية عادية.  
- Property `Value`: Allows using the class like a normal property.

---

## مثال استخدام / Example Usage

```cpp
clsMyString s;
s.Value = "A";  // _Undo: [], _Value = "A"
s.Value = "B";  // _Undo: ["A"], _Value = "B"
s.Undo();       // _Value = "A", _Redo: ["B"]
s.Redo();       // _Value = "B", _Undo: ["A"]
