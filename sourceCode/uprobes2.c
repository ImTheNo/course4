#include <linux/uprobes.h>
#include <linux/ptrace.h>
	void handler(struct uprobe *u, struct pt_regs *regs);
