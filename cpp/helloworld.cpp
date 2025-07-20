#include <iostream>
using namespace std;
int main()
{
    cout << "Hello, world!" << endl;
    //这里如果不去使用using namespace std,建议直接使用std::cout
    //同时可以写成:
    cout << "Hello, Jason!"<< endl;
    //同时可以写成:
    cout << "Hello, hdu!";
    cout << "\n";
    //这里如果没有特殊情况,建议使用\n提高整体代码性能
    return 0;
}
