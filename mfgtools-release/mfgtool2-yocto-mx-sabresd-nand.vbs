Set wshShell = CreateObject("WScript.shell")
wshShell.run "mfgtool2.exe -c ""linux"" -l ""NAND Flash"" -s ""board=sabreauto"" -s ""sxuboot=sabreauto"" -s ""sxdtb=sabreauto"" -s ""nand=nand"" -s ""nanddtb=gpmi-weim"" -s ""part_uboot=0"" -s ""part_kernel=1"" -s ""part_dtb=2"" -s ""part_rootfs=3""   "
Set wshShell = Nothing
