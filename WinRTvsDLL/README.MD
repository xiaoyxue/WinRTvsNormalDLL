## WinRT vs Normal DLL

### How to setup

1. Create a C++/WinRT ConsoleApplication from visual studio
2. Create an empty C++ project and change output type as DLL
3. Create RuntimeComponent(Desktop)(not UWP) project

### How to use DynamicLibrary
1. Link DynamicLibrary.lib
2. Put DynamicLibrary.dll into same folder as ConsoleApplication.exe
3. Follow the code

### How to use WinRT Component (RuntimeComponent)
1. Create a .idl file (ICalculator and Calculator)
2. Build .idl file to .winmd
3. Implement your runtime class to export
4. Link RuntimeComponent.lib
5. Add reference RuntimeComponent.winmd
6. Put RuntimeComponent.dll into same folder as ConsoleApplication.exe
7. #incude <winrt/RuntimeComponent>
8. Create instance (Calculate calculator)
