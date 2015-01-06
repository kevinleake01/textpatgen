#!/usr/bin/env ruby
# -------------------------------------------------
#
# This program will execute:
#
# tpl-octgen-0001.cpp 0 255 8
#
# -------------------------------------------------

system("g++ tpl-octgen-0001.cpp");
system("./a.out 0 255 8");
system("rm a.out");

