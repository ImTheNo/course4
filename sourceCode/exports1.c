int security_sid_to_context(u32 sid, char **scontext, u32 *scontext_len);
int security_context_to_sid(const char *scontext, u32 scontext_len, u32 *sid);
