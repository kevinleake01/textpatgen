#!/usr/bin/env perl
# -------------------------------------------------
#
# This program will execute:
#
# tpl-hexgen-0001.cpp 0 255 16
#
# -------------------------------------------------

use strict;
use warnings;

system("g++ tpl-hexgen-0001.cpp");
system("./a.out 0 255 16");
system("rm a.out");

