int selinux_string_to_sid(char *str, size_t size, u32 *sid)
{
    if (selinux_enabled) {
        return security_context_to_sid( str, size, sid );
    } else {
        *sid = 0;
        return 0;
    }
}
EXPORT_SYMBOL_GPL(selinux_string_to_sid);
