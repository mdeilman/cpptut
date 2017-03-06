@ECHO OFF
for %%f IN (*.cpp) do (
    ECHO Compiling with cl: %%f
    ptime cl -Od -nologo -fp:fast -fp:except- -Gm- -GR- -EHa- -Zo -Oi -W4 -wd4996 -wd4204 -Z7 -EHsc %%f -Fe..\build\%%~nf
    )
@ECHO OFF
