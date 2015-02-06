import sys
import commands
import re

niter = int(sys.argv[1])
mic = sys.argv[2]
cmd = " ".join(sys.argv[4:])

iter_cmd = "for i in `seq %d`; do %s; done" % (niter, cmd)
ssh_cmd = "ssh %s -- '. .profile; cd tmp; %s'" % (mic, iter_cmd)

output = commands.getoutput(ssh_cmd)
results = re.finditer(r"Per\. = (.*) GFlops", output)

print max([float(m.group(1)) for m in results])
