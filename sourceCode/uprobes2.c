struct uprobe_consumer {
	int (*handler)(struct uprobe_consumer *self, struct pt_regs *regs);
	bool (*filter)(struct uprobe_consumer *self, struct task_struct *task);

	struct uprobe_consumer *next;
};

