struct sad_droid_trans trans;
struct path binf_path;
if (kern_path(trans.bin_file, LOOKUP_FOLLOW, &binf_path)) 
{
    printk(KERN_INFO "sad_droid: can't find file %s\n", 
            trans.bin_file);
    ret = -EINVAL;
    goto out_clean;
}
