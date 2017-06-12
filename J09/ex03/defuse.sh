#!/bin/sh
touch -A -000001 -f bomb.txt
stat -f %m bomb.txt
