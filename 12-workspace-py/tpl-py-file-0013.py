#!/usr/bin/env python

####################################
#
# --- TEXTPATGEN TEMPLATE ---
#
# Users can change the output by editing
# this file directly.
#
# The text is written to a timestamped file.
#
####################################

import time

fp=open(time.strftime('00_%s.txt'), 'w')
fp.write('####################################\n')
fp.write('#\n')
fp.write('# -- TEXTPATGEN GENERATED FILE --\n')
fp.write('#\n')
fp.write('# -- Created from a Python script.\n')
fp.write('#\n')
fp.write(time.strftime('# -- Epoch Time: %s\n'))
fp.write('#\n')
fp.write("####################################\n")
num=0
for length in range(0, 25):
  fp.write('%04X:The_Quick_Brown_Fox_Jumps_over_the_Lazy_Dog:%04d\n' % (num, num))
  num=num+1
  length=length+1
fp.write('# -- End of file.\n');
fp.close()
