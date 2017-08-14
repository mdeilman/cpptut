echo Compiling with VS Commandline Compiler
echo Compiling unit_%1.cpp
cl /c /Zi /nologo /W4 /Od /Ob0 /Oy- /Gm- /EHsc /RTC1 /MTd /GS /IC:\home\src\github\gtest\googletest\include /IC:\home\src\lib\class-library\include unit_%1.cpp /Fo..\build\unit_%1.obj
echo Linking unit_%1.obj
cl /Zi /nologo /W4 /Od /Ob0 /Oy- /Gm- /EHsc /RTC1 /MTd /GS ..\build\unit_%1.obj /Fe..\build\cl_unit_%1.exe /link C:\home\src\lib\gtest_main.lib C:\home\src\lib\gtest.lib
echo Running unit_%1
..\build\cl_unit_%1
