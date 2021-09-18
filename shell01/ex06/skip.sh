#!/bin/bash

ls -l | cat -b | awk '$1%2 == 1 {$1=""; print $0}' | sed 's/^ //' 


