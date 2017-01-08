cl /c /Zi /nologo /W4 /WX /Od /Ob0 /Oy- /Gm- /EHsc /RTC1 /MTd /GS /IC:\home\src\gtest\googletest\include unit_%1.cpp /Fo..\build\unit_%1.obj
cl /Zi /nologo /W4 /WX /Od /Ob0 /Oy- /Gm- /EHsc /RTC1 /MTd /GS ..\build\unit_%1.obj /Fe..\build\unit_%1.exe /link C:\home\src\cllib\gtest_main.lib C:\home\src\cllib\gtest.lib
