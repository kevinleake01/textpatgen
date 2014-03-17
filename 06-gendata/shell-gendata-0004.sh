#!/bin/sh

# -- Example usage:
# -- ./shell-gendata-0004.sh 256 64

echo -e "#########################################"
echo -e "#"
echo -e "# -- SHELL-GENDATA-0004.SH"
echo -e "#"
echo -e "# -- Generated data:"
echo -e "# -- openssl rand $1 | base64 -w $2"
echo -e "#"
echo -e "#########################################"

openssl rand $1 | base64 -w $2

