struct rs_break {
	struct list_head list;

	struct uprobe_consumer uc;		// uprobe_consumer, describing this bpt
	char new_cont[CONT_MAXLEN]; 	// new SELinux context of the process

    struct inode *inode; //file inode on which to insert probes
    loff_t o; //vm address on which to probe
};

