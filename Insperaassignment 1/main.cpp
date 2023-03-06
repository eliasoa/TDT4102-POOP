#include "testing.h"





int main() {
   
    return 0;
}


/* Problem 1
int foo(){
    int total{0};
    if (total % 2 == 0)
    {
        int total = 1;
    }
    else
    {
        int total = 2;
    }
    return total;
}
int main() {
    cout << foo() << endl;
    return 0;
}
Den returnere 0, men skjønner ikke helt hvorfor
*/

/* Problem 3
int main() {
    char c1 = 'x';
    char c2 = 'y';
    swap(c1,c2);
    cout << (c2>c1) << endl;
    return 0;
}
0
*/

/* Problem 4
enum class Byer {Kristiansand, Bergen, Trondheim = 42, Kirkenes};
// Kristiansand = 0 Bergen = 1 Trondheim = 42 Kirkenes = 43

int main() {
    int a = static_cast<int>(Byer::Kristiansand);
    int b = static_cast<int>(Byer::Bergen);
    int c = a+b;
    c+= static_cast<int>(Byer::Trondheim);
    int d = c + static_cast<int>(Byer::Kirkenes);
    cout << d << endl;
    return 0;
}
d = 86
*/

/* Problem 5
int a = func(1);

bool func(bool b){
    if (b)
    {
        return func(!b);
    }
    return 10;
}
int main() {

    return 0;
}
FAILED: program.exe.p/main.cpp.obj 
"C:\mingw64\bin\clang++" "-Iprogram.exe.p" "-I." "-I.." "-I..\subprojects\animationwindow\include" "-I..\subprojects\sdl2_windows\include\SDL2" "-fcolor-diagnostics" "-D_FILE_OFFSET_BITS=64" "-Wall" "-Winvalid-pch" "-Wnon-virtual-dtor" "-Wextra" "-std=c++17" "-O0" "-g" "-Wconversion" "-fdiagnostics-color=always" "-Werror=return-type" "-fcolor-diagnostics" "-fansi-escape-codes" -MD -MQ program.exe.p/main.cpp.obj -MF "program.exe.p\main.cpp.obj.d" -o program.exe.p/main.cpp.obj "-c" ../main.cpp
../main.cpp:3:9: error: use of undeclared identifier 'func'
int a = func(1);
        ^
1 error generated.
*/