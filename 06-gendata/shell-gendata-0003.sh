#!/bin/sh

# -- Example usage:
# -- ./shell-gendata-0003.sh 256 1 16

echo -e "#########################################"
echo -e "#"
echo -e "# -- SHELL-GENDATA-0003.SH"
echo -e "#"
echo -e "# -- Generated data:"
echo -e "# -- openssl rand $1 | xxd -i -g $2 -c $3"
echo -e "#"
echo -e "#########################################"

openssl rand $1 | xxd -i -g $2 -c $3

