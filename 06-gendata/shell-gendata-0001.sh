#!/bin/sh

# -- Example usage:
# -- ./shell-gendata-0001.sh 256 x x1 16

echo -e "#########################################"
echo -e "#"
echo -e "# -- SHELL-GENDATA-0001.SH"
echo -e "#"
echo -e "# -- Generated data:"
echo -e "# -- openssl rand $1 | od -A $2 -t $3 -w$4"
echo -e "#"
echo -e "#########################################"

openssl rand $1 | od -A $2 -t $3 -w$4

