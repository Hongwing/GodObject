## *[C++ Area]*
---

### English Statement
* **Try to create A function which can print the info of class.** 
* **This function is born with the class in the same time.**
* **This function should be called like this:**
```
/** 
* print info of ClassName 
*/

// Just A static function of Class, it called without implementing

/*Like this*/
ClassName::Description();  

```

### 中文简介
* **定义一个函数，这个函数可以输出类的信息**
* **不用声明类的实例对象，直接调用即可. 这意味着该方法是静态成员方法**
* **函数调用方式如下：**
```
/** 
* print info of ClassName 
*/

// Just A static function of Class, it called without implementing

/*Like this[不用实例化]*/
ClassName::Description();  

```



# GodObject

> The idea `GodObject` is from the `NSObject` of `Objective-C`.

> 灵感来自于`Objective-C`的NSObject.

`godobject.h`**文件中声明了一个模板类GodObject**，只要将你所创建的类继承自该类，这样你的类就会拥有一个方法`Description()`，该方法会输出类名信息。

### 你所需要做的：
* 添加`godobject.h`到你的库(最好放在和`stdio.h`相同的系统库)
* 代码中添加该头文件
* 继承`GodObject <class T>`-T是你的ClassName
* 调用方法：`ClassName::Description();`

示例
```
#include <iostream>
#include <godobject.h>

using namespace std;

class Person: public GodObject<Person> {};

int main(void) {

    Person::Description();

    return 0;
}

Console Result：
> Class Description: { ClassName }
```


---
##### *GodObject可以有多种调用方法，请选择语义明确的，比如示例*
##### *Please call the function like example, this would be nice about program*