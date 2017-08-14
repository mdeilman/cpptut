@echo off

ctime -begin cpptut.ctm

set CFILE=invoice

REM set CommonCompilerFlags=-Od -MTd -nologo -fp:fast -fp:except- -Gm- -GR- -EHa- -Zo -Oi -W4 -wd4201 -wd4100 -wd4189 -wd4505 -wd4127 -wd4996 -wd4204 -FC -Z7
set CommonCompilerFlags=/c /Zi /nologo /W4 /Od /Ob0 /Oy- /Gm- /EHsc /RTC1 /MTd /GS
set LinkCompilerFlags=/Zi /nologo /W4 /Od /Ob0 /Oy- /Gm- /EHsc /RTC1 /MTd /GS
set CommonCompilerFlags=-DDEBUG=0 %CommonCompilerFlags%
set CommonLinkerFlags= -incremental:no -opt:ref
set IncludeFlags=/IC:\home\src\github\gtest\googletest\include /IC:\home\src\lib\class-library\include

REM TODO - can we just build both with one exe?

IF NOT EXIST ..\build mkdir ..\build

del *.pdb > NUL 2> NUL

cl %CommonCompilerFlags% %IncludeFlags% unit_%CFILE%.cpp /Fo..\build\unit_%CFILE%.obj

cl %LinkCompilerFlags%  ..\build\unit_%CFILE%.obj /Fe..\build\cl_unit_%CFILE%.exe /link %CommonLinkerFlags% C:\home\src\lib\gtest_main.lib C:\home\src\lib\gtest.lib

echo Running unit_%CFILE%

..\build\cl_unit_%CFILE%

set LastError=%ERRORLEVEL%
del lock.tmp

ctime -end cpptut.ctm %LastError%