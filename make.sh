#!/usr/bin/env bash

gcc src/hello.c -o hello -no-pie
gcc src/crackme02.c -o crackme02 -m32 -no-pie -fno-stack-protector
gcc src/crackme01.c -o crackme01 -m32 -no-pie -fno-stack-protector
gcc src/crackme03.c -o crackme03 -m32 -no-pie -fno-stack-protector > /dev/null 2>&1
echo "all done"
