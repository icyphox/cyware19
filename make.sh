#!/usr/bin/env bash

gcc src/crackme02.c -o crackme02 -no-pie -fno-stack-protector
gcc src/crackme01.c -o crackme01 -no-pie -fno-stack-protector
echo "all done"
