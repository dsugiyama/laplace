import sys
import commands
import re

niter = int(sys.argv[1])
cmd = " ".join(sys.argv[3:])

iter_cmd = "for i in `seq %d`; do %s; done" % (niter, cmd)
ssh_cmd = "ssh mic0 -- '. .profile; cd tmp; %s'" % iter_cmd

output = commands.getoutput(ssh_cmd)
results = re.finditer(r"Per\. = (.*) GFlops", output)

print max([float(m.group(1)) for m in results])
