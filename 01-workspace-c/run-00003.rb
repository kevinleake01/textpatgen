#!/usr/bin/env ruby
# -------------------------------------------------
#
# This program will execute:
#
# tpl-octgen-0001.c 0 255 8
#
# -------------------------------------------------

system("gcc tpl-octgen-0001.c");
system("./a.out 0 255 8");
system("rm a.out");

