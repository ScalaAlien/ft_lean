#!/bin/bash
rm -f ~/.bash_aliases
echo "alias ll='ls -l'" >>~/.bash_aliases
echo "alias del='rm -i'" >>~/.bash_aliases
echo "alias run='./run.sh'" >>~/.bash_aliases
echo "alias mk='touch'" >>~/.bash_aliases
source ~/.bashrc