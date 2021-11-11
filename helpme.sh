#!/bin/bash
#Man Help
#Kris Small, ksmall7@student.gsu.edu
echo Please enter a command you want to know about from the following list: sed, sort, ls, awk, grep, rm, mkdir, cp, mv, or tar.
read fname
case $fname in
	Sed|sed|SED) sed -rn '/(SED\(1\))/,/(SED\(1\))/p' mandatabase.txt ;;		#Reads user input and if it matches a case, prints the man
	Sort|sort|SORT) sed -rn '/(SORT\(1\))/,/(SORT\(1\))/p' mandatabase.txt ;;	#files's first page for that command
	Ls|ls|LS) sed -rn '/(LS\(1\))/,/(LS\(1\))/p' mandatabase.txt ;;			
	Awk|awk|AWK) sed -rn '/(GAWK\(1\))/,/(GAWK\(1\))/p' mandatabase.txt ;;		
	Grep|grep|GREP) sed -rn '/(GREP\(1\))/,/(GREP\(1\))/p' mandatabase.txt ;;
	Rm|rm|RM) sed -rn '/(RM\(1\))/,/(RM\(1\))/p' mandatabase.txt ;;
	Mkdir|mkdir|MKDIR) sed -rn '/(MKDIR\(1\))/,/(MKDIR\(1\))/p' mandatabase.txt ;;
	Cp|cp|CP) sed -rn '/(CP\(1\))/,/(CP\(1\))/p' mandatabase.txt ;;
	Mv|mv|MV) sed -rn '/(MV\(1\))/,/(MV\(1\))/p' mandatabase.txt ;;
	Tar|tar|TAR) sed -rn '/(TAR\(1\))/,/(TAR\(1\))/p' mandatabase.txt ;;
	*) echo Sorry, I cannot help you. ;;						#Catches other user inputs
esac
echo thank you
