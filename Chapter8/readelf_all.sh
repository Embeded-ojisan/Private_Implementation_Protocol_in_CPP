#!/bin/bash
# https://www.server-memo.net/shellscript/read-file.html
# find ../PIP-Message/build -name "*.o" | (read v ;readelf -a "$v" >> "$v.txt")

find ../PIP-Message/build -name "*.o" | while read line
do
  readelf -a "$line" >> "$line.txt"
done