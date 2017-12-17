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
for length in range(0, 25):
  sys.stdout.write('%04X:The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog:%04d\n' % (num, num))
  num=num+1
  length=length+1
sys.stdout.write('# -- End of file.\n');
sys.stdout.flush()
