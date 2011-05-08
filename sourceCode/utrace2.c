struct utrace_attached_engine *
    utrace_attach(struct task_struct *target, int flags,
	      	  const struct utrace_engine_ops *ops, 
		  unsigned long data);
