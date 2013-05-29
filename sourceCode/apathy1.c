struct sad_droid_trans {
	unsigned long addr; 		/*!< address of the break */
	char new_cont[CONT_MAXLEN]; 	/*!< new context */
	char bin_file[NAMELEN];		/*!< binary which process to probe */
};

