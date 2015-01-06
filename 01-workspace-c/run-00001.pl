#!/usr/bin/env perl
# -------------------------------------------------
#
# This program will execute:
#
# tpl-hexgen-0001.c 0 255 16
#
# -------------------------------------------------

use strict;
use warnings;

system("gcc tpl-hexgen-0001.c");
system("./a.out 0 255 16");
system("rm a.out");

