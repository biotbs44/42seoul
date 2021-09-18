#!/bin/bash

let "LINE = $FT_LINE2 - $FT_LINE1 + 1"

cat /etc/passwd | grep -v '#' | awk 'NR>=2 {print;}' | cut -f 1 -d ':' | rev | sort -f -r | awk 'NR>='${FT_LINE1}' && NR<='${FT_LINE2}' {print;}' | sed "${LINE}s/\_/\_\_/" | tr '\n' ',' | sed 's/,/, /g' | sed 's/__,/./g' | sed 's/\.\ /./g'


