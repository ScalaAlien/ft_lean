#!/bin/bash
tmp=$pwd
cd /workspaces/c
make FILE=${1:-main.c}
cd $tmp