#!/bin/bash

git log --pretty=oneline -5 | cut -f 1 -d ' '
