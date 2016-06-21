#!/bin/sh
clear
echo "+---------------------------------------------------+"
echo "|             Cleaning up SRC directory             |"
echo "|                                                   |"
echo "| Version 0.1                               by De   |"
echo "+---------------------------------------------------+"
find . -name "*.exe" -print -exec rm {} \;
find . -name "*.o" -print -exec rm {} \;
find . -name "*.obj" -print -exec rm {} \;
find . -name "*.exe" -print -exec rm {} \;
find . -name "*.ncb" -print -exec rm {} \;
find . -name "*.ilk" -print -exec rm {} \;
find . -name "*.idb" -print -exec rm {} \;
find . -name "*.nch" -print -exec rm {} \;
find . -name "*.suo" -print -exec rm {} \;
find . -name "*.ddb" -print -exec rm {} \;
find . -name "*.pdb" -print -exec rm {} \;
find . -name "*.tlog" -print -exec rm {} \;
find . -name "*.ipch" -print -exec rm {} \;
find . -name "*.sdf" -print -exec rm {} \;
find . -name "*.map" -print -exec rm {} \;
find . -name "*.gcda" -print -exec rm {} \;
find . -name "*.gcno" -print -exec rm {} \;
find . -name "*.gcd" -print -exec rm {} \;
find . -name "*.xml" -print -exec rm {} \;
find . -name "*.html" -print -exec rm {} \;
find . -name "*.VC.db" -print -exec rm {} \;
find . -name "*.ctm" -print -exec rm {} \;
##
##  ----- Leaving banner
##
echo "+---------------------------------------------------+"
echo "|                  R  E  A  D  Y   !                |"
echo "+---------------------------------------------------+"
