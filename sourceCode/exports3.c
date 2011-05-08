int selinux_kern_setprocattr(struct task_struct* p,
        char *name, void *value, size_t size)
{
    if (selinux_enabled) {
        return security_kern_setprocattr(p, name, value, size );
    } else {
        value = NULL;
        return 0;
    }
}
EXPORT_SYMBOL_GPL(selinux_kern_setprocattr);
