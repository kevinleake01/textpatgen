#!/usr/bin/env python

####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Users can change the output by editing
# this file directly.
#
####################################

import sys

sys.stdout.write('####################################\n')
sys.stdout.write('#\n')
sys.stdout.write('# -- TEXTPATGEN GENERATED FILE --\n')
sys.stdout.write('#\n')
sys.stdout.write('# -- Created from a Python script.\n')
sys.stdout.write('#\n')
sys.stdout.write("####################################\n")
num=0
for length in range(0, 16):
  for width in range(0, 15):
    sys.stdout.write('X-%04X ' % num)
    num=num+1
    width=width+1
    length=length+1
  sys.stdout.write('X-%04X\n' % num)
  num=num+1
sys.stdout.write('# -- End of file.\n');
sys.stdout.flush()
