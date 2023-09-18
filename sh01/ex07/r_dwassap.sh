#!/bin/sh
cat /etc/passwd | sed '/^#/d' \
| awk 'NR % 2 == 0 {print $0}' \
| awk -F ":" '{  print $1 }' \
| rev \
| sort -fnr \
| awk -v FT_LINE1="7" -v FT_LINE2="15"  'NR >= FT_LINE1 && NR <= FT_LINE2 { print $0 }' \
| tr '\n' ' '  \
| sed 's+ +, +g' \
| sed 's+, $+.+g' \
| tr -d '\n'
