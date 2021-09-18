#!/bin/bash

cat /etc/passwd | grep -v '#' | awk 'NR>=2 {print;}' | cut -f 1 -d ':' | rev | sort -f -r | awk 'NR>='${FT_LINE1}' && NR<='${FT_LINE2}' {print;}' | tr '\n' ',' | sed 's/,/, /g' | sed -e '{N;s/, /./}' 
