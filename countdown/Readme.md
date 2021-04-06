## Программа обратного отcчёта
В каждой новой строке выдаёт следующее значение на чиная с 10 и до 0

```c
# include <stdio.h>
  int main (void){
    printf("\nCountdown programmm, from 10 to 0\n\n");
    for (int i=11;i-->0;){
      printf("%d\n",i);
    }
  return (0);
  }
  ```
  Файл журнала
  
  ```log
  [    0.000000] Linux version 5.4.22 (root@vpn64_etalon) (gcc version 5.3.0 (CRUX-x86_64-multilib)) #1 SMP Tue Jun 30 22:08:21 ALMT 2020
[    0.000000] Command line: BOOT_IMAGE=/boot/bzImage ro quiet
[    0.000000] x86/fpu: x87 FPU will use FXSAVE
[    0.000000] BIOS-provided physical RAM map:
[    0.000000] BIOS-e820: [mem 0x0000000000000000-0x000000000009f3ff] usable
[    0.000000] BIOS-e820: [mem 0x000000000009f400-0x000000000009ffff] reserved
[    0.000000] BIOS-e820: [mem 0x00000000000f0000-0x00000000000fffff] reserved
[    0.000000] BIOS-e820: [mem 0x0000000000100000-0x000000003f6dffff] usable
[    0.000000] BIOS-e820: [mem 0x000000003f6e0000-0x000000003f6e2fff] ACPI NVS
[    0.000000] BIOS-e820: [mem 0x000000003f6e3000-0x000000003f6effff] ACPI data
[    0.000000] BIOS-e820: [mem 0x000000003f6f0000-0x000000003f6fffff] reserved
[    0.000000] BIOS-e820: [mem 0x00000000e0000000-0x00000000efffffff] reserved
[    0.000000] BIOS-e820: [mem 0x00000000fec00000-0x00000000ffffffff] reserved
[    0.000000] NX (Execute Disable) protection: active
[    0.000000] SMBIOS 2.2 present.
[    0.000000] DMI:  /LakePort, BIOS 6.00 PG 11/17/2009
[    0.000000] tsc: Fast TSC calibration using PIT
[    0.000000] tsc: Detected 1800.174 MHz processor
[    0.005377] e820: update [mem 0x00000000-0x00000fff] usable ==> reserved
[    0.005380] e820: remove [mem 0x000a0000-0x000fffff] usable
[    0.005386] last_pfn = 0x3f6e0 max_arch_pfn = 0x400000000
[    0.005393] MTRR default type: uncachable
[    0.005396] MTRR fixed ranges enabled:
[    0.005398]   00000-9FFFF write-back
[    0.005399]   A0000-BFFFF uncachable
[    0.005400]   C0000-C9FFF write-protect
[    0.005402]   CA000-EFFFF uncachable
[    0.005403]   F0000-FFFFF write-through
[    0.005404] MTRR variable ranges enabled:
[    0.005406]   0 base 000000000 mask FC0000000 write-back
[    0.005408]   1 base 03F800000 mask FFF800000 uncachable
[    0.005410]   2 base 03F700000 mask FFFF00000 uncachable
[    0.005411]   3 disabled
[    0.005412]   4 disabled
[    0.005413]   5 disabled
[    0.005414]   6 disabled
[    0.005415]   7 disabled
[    0.006495] x86/PAT: Configuration [0-7]: WB  WC  UC- UC  WB  WP  UC- WT
[    0.013560] found SMP MP-table at [mem 0x000f4b90-0x000f4b9f]
[    0.013590] check: Scanning 1 areas for low memory corruption
[    0.013600] BRK [0x03601000, 0x03601fff] PGTABLE
[    0.013604] BRK [0x03602000, 0x03602fff] PGTABLE
[    0.013605] BRK [0x03603000, 0x03603fff] PGTABLE
[    0.014199] BRK [0x03604000, 0x03604fff] PGTABLE
[    0.014349] ACPI: Early table checksum verification disabled
[    0.014354] ACPI: RSDP 0x00000000000F9140 000014 (v00 IntelR)
[    0.014358] ACPI: RSDT 0x000000003F6E3000 000030 (v01 IntelR AWRDACPI 42302E31 AWRD 00000000)
[    0.014366] ACPI: FACP 0x000000003F6E3080 000074 (v01 IntelR AWRDACPI 42302E31 AWRD 00000000)
[    0.014374] ACPI: DSDT 0x000000003F6E3100 00457A (v01 INTELR AWRDACPI 00001000 MSFT 03000000)
[    0.014379] ACPI: FACS 0x000000003F6E0000 000040
[    0.014383] ACPI: MCFG 0x000000003F6E7740 00003C (v01 IntelR AWRDACPI 42302E31 AWRD 00000000)
[    0.014388] ACPI: APIC 0x000000003F6E7680 000084 (v01 IntelR AWRDACPI 42302E31 AWRD 00000000)
[    0.014401] ACPI: Local APIC address 0xfee00000
[    0.014423] Zone ranges:
[    0.014425]   DMA      [mem 0x0000000000001000-0x0000000000ffffff]
[    0.014427]   DMA32    [mem 0x0000000001000000-0x000000003f6dffff]
[    0.014429]   Normal   empty
[    0.014431] Movable zone start for each node
[    0.014432] Early memory node ranges
[    0.014433]   node   0: [mem 0x0000000000001000-0x000000000009efff]
[    0.014435]   node   0: [mem 0x0000000000100000-0x000000003f6dffff]
[    0.014482] Zeroed struct page in unavailable ranges: 2434 pages
[    0.014484] Initmem setup node 0 [mem 0x0000000000001000-0x000000003f6dffff]
[    0.014486] On node 0 totalpages: 259710
[    0.014488]   DMA zone: 64 pages used for memmap
[    0.014489]   DMA zone: 21 pages reserved
[    0.014490]   DMA zone: 3998 pages, LIFO batch:0
[    0.014570]   DMA32 zone: 3996 pages used for memmap
[    0.014571]   DMA32 zone: 255712 pages, LIFO batch:63
[    0.025886] Reserving Intel graphics memory at [mem 0x3f800000-0x3fffffff]
[    0.026192] ACPI: PM-Timer IO Port: 0x408
[    0.026195] ACPI: Local APIC address 0xfee00000
[    0.026207] ACPI: LAPIC_NMI (acpi_id[0x00] high edge lint[0x1])
[    0.026208] ACPI: LAPIC_NMI (acpi_id[0x01] high edge lint[0x1])
[    0.026209] ACPI: LAPIC_NMI (acpi_id[0x02] high edge lint[0x1])
[    0.026211] ACPI: LAPIC_NMI (acpi_id[0x03] high edge lint[0x1])
[    0.026224] IOAPIC[0]: apic_id 4, version 32, address 0xfec00000, GSI 0-23
[    0.026227] ACPI: INT_SRC_OVR (bus 0 bus_irq 0 global_irq 2 dfl dfl)
[    0.026230] ACPI: INT_SRC_OVR (bus 0 bus_irq 9 global_irq 9 high level)
[    0.026232] ACPI: IRQ0 used by override.
[    0.026235] ACPI: IRQ9 used by override.
[    0.026238] Using ACPI (MADT) for SMP configuration information
[    0.026244] smpboot: Allowing 4 CPUs, 2 hotplug CPUs
[    0.026268] [mem 0x40000000-0xdfffffff] available for PCI devices
[    0.026269] Booting paravirtualized kernel on bare hardware
[    0.026279] clocksource: refined-jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1910969940391419 ns
[    0.256283] setup_percpu: NR_CPUS:96 nr_cpumask_bits:96 nr_cpu_ids:4 nr_node_ids:1
[    0.256933] percpu: Embedded 52 pages/cpu s172312 r8192 d32488 u524288
[    0.256943] pcpu-alloc: s172312 r8192 d32488 u524288 alloc=1*2097152
[    0.256945] pcpu-alloc: [0] 0 1 2 3
[    0.256979] Built 1 zonelists, mobility grouping on.  Total pages: 255629
[    0.256983] Kernel command line: BOOT_IMAGE=/boot/bzImage ro quiet
[    0.257584] Dentry cache hash table entries: 131072 (order: 8, 1048576 bytes, linear)
[    0.257756] Inode-cache hash table entries: 65536 (order: 7, 524288 bytes, linear)
[    0.257836] mem auto-init: stack:off, heap alloc:off, heap free:off
[    0.272190] Memory: 981016K/1038840K available (16390K kernel code, 1396K rwdata, 4408K rodata, 7064K init, 2128K bss, 57824K reserved, 0K cma-reserved)
[    0.272318] SLUB: HWalign=64, Order=0-3, MinObjects=0, CPUs=4, Nodes=1
[    0.272347] Kernel/User page tables isolation: enabled
[    0.272579] rcu: Hierarchical RCU implementation.
[    0.272581] rcu:     RCU restricting CPUs from NR_CPUS=96 to nr_cpu_ids=4.
[    0.272585] rcu: RCU calculated value of scheduler-enlistment delay is 100 jiffies.
[    0.272587] rcu: Adjusting geometry for rcu_fanout_leaf=16, nr_cpu_ids=4
[    0.273113] NR_IRQS: 6400, nr_irqs: 456, preallocated irqs: 16
[    0.273412] random: get_random_bytes called from start_kernel+0x30d/0x4e4 with crng_init=0
[    0.276273] Console: colour VGA+ 80x25
[    0.276280] printk: console [tty0] enabled
[    0.276294] ACPI: Core revision 20190816
[    0.276408] APIC: Switch to symmetric I/O mode setup
[    0.276807] ..TIMER: vector=0x30 apic1=0 pin1=2 apic2=-1 pin2=-1
[    0.281405] clocksource: tsc-early: mask: 0xffffffffffffffff max_cycles: 0x19f2cddc6c2, max_idle_ns: 440795226064 ns
[    0.281411] Calibrating delay loop (skipped), value calculated using timer frequency.. 3600.34 BogoMIPS (lpj=1800174)
[    0.281414] pid_max: default: 32768 minimum: 301
[    0.281453] LSM: Security Framework initializing
[    0.281472] SELinux:  Initializing.
[    0.281525] Mount-cache hash table entries: 2048 (order: 2, 16384 bytes, linear)
[    0.281538] Mountpoint-cache hash table entries: 2048 (order: 2, 16384 bytes, linear)
[    0.282032] mce: CPU0: Thermal monitoring enabled (TM1)
[    0.282036] process: using mwait in idle threads
[    0.282043] Last level iTLB entries: 4KB 128, 2MB 4, 4MB 4
[    0.282044] Last level dTLB entries: 4KB 256, 2MB 0, 4MB 32, 1GB 0
[    0.282047] Spectre V1 : Mitigation: usercopy/swapgs barriers and __user pointer sanitization
[    0.282049] Spectre V2 : Spectre mitigation: kernel not compiled with retpoline; no mitigation available!
[    0.282051] Speculative Store Bypass: Vulnerable
[    0.282089] MDS: Vulnerable: Clear CPU buffers attempted, no microcode
[    0.282326] Freeing SMP alternatives memory: 20K
[    0.385822] smpboot: CPU0: Intel(R) Core(TM)2 Duo CPU     E4300  @ 1.80GHz (family: 0x6, model: 0xf, stepping: 0xd)
[    0.386017] Performance Events: PEBS fmt0+, Core2 events, 4-deep LBR, Intel PMU driver.
[    0.386026] core: PEBS disabled due to CPU errata
[    0.386028] ... version:                2
[    0.386029] ... bit width:              40
[    0.386030] ... generic registers:      2
[    0.386031] ... value mask:             000000ffffffffff
[    0.386032] ... max period:             000000007fffffff
[    0.386033] ... fixed-purpose events:   3
[    0.386034] ... event mask:             0000000700000003
[    0.386103] rcu: Hierarchical SRCU implementation.
[    0.386260] smp: Bringing up secondary CPUs ...
[    0.386409] x86: Booting SMP configuration:
[    0.386409] .... node  #0, CPUs:      #1
[    0.387418] smp: Brought up 1 node, 2 CPUs
[    0.387420] smpboot: Max logical packages: 2
[    0.387422] smpboot: Total of 2 processors activated (7200.69 BogoMIPS)
[    0.388621] devtmpfs: initialized
[    0.389662] clocksource: jiffies: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 1911260446275000 ns
[    0.389669] futex hash table entries: 1024 (order: 4, 65536 bytes, linear)
[    0.389738] xor: measuring software checksum speed
[    0.390468] kworker/u8:0 (21) used greatest stack depth: 14120 bytes left
[    0.399412]    prefetch64-sse: 10260.000 MB/sec
[    0.409412]    generic_sse:  8676.000 MB/sec
[    0.409413] xor: using function: prefetch64-sse (10260.000 MB/sec)
[    0.409622] NET: Registered protocol family 16
[    0.409899] audit: initializing netlink subsys (disabled)
[    0.409909] audit: type=2000 audit(1604811946.133:1): state=initialized audit_enabled=0 res=1
[    0.409909] cpuidle: using governor menu
[    0.409909] ACPI: bus type PCI registered
[    0.410448] PCI: Using configuration type 1 for base access
[    0.437521] HugeTLB registered 2.00 MiB page size, pre-allocated 0 pages
[    0.439476] cryptd: max_cpu_qlen set to 1000
[    0.460428] raid6: sse2x4   gen()  5046 MB/s
[    0.477413] raid6: sse2x4   xor()  4187 MB/s
[    0.494421] raid6: sse2x2   gen()  3183 MB/s
[    0.511412] raid6: sse2x2   xor()  3691 MB/s
[    0.528417] raid6: sse2x1   gen()  2992 MB/s
[    0.545414] raid6: sse2x1   xor()  2900 MB/s
[    0.545416] raid6: using algorithm sse2x4 gen() 5046 MB/s
[    0.545417] raid6: .... xor() 4187 MB/s, rmw enabled
[    0.545419] raid6: using ssse3x2 recovery algorithm
[    0.545508] ACPI: Added _OSI(Module Device)
[    0.545510] ACPI: Added _OSI(Processor Device)
[    0.545511] ACPI: Added _OSI(3.0 _SCP Extensions)
[    0.545513] ACPI: Added _OSI(Processor Aggregator Device)
[    0.545515] ACPI: Added _OSI(Linux-Dell-Video)
[    0.545516] ACPI: Added _OSI(Linux-Lenovo-NV-HDMI-Audio)
[    0.545518] ACPI: Added _OSI(Linux-HPI-Hybrid-Graphics)
[    0.549651] ACPI: 1 ACPI AML tables successfully acquired and loaded
[    0.552967] ACPI: Interpreter enabled
[    0.552977] ACPI: (supports S0 S5)
[    0.552980] ACPI: Using IOAPIC for interrupt routing
[    0.553435] PCI: Using host bridge windows from ACPI; if necessary, use "pci=nocrs" and report a bug
[    0.553672] ACPI: Enabled 10 GPEs in block 00 to 1F
[    0.561201] ACPI: PCI Root Bridge [PCI0] (domain 0000 [bus 00-ff])
[    0.561208] acpi PNP0A08:00: _OSC: OS supports [ASPM ClockPM Segments MSI HPX-Type3]
[    0.561216] acpi PNP0A08:00: _OSC failed (AE_NOT_FOUND); disabling ASPM
[    0.561343] PCI host bridge to bus 0000:00
[    0.561347] pci_bus 0000:00: root bus resource [io  0x0000-0x0cf7 window]
[    0.561349] pci_bus 0000:00: root bus resource [io  0x0d00-0xffff window]
[    0.561352] pci_bus 0000:00: root bus resource [mem 0x000a0000-0x000bffff window]
[    0.561355] pci_bus 0000:00: root bus resource [mem 0x000c0000-0x000dffff window]
[    0.561357] pci_bus 0000:00: root bus resource [mem 0x3f700000-0xfebfffff window]
[    0.561360] pci_bus 0000:00: root bus resource [bus 00-ff]
[    0.561376] pci 0000:00:00.0: [8086:2770] type 00 class 0x060000
[    0.561540] pci 0000:00:02.0: [8086:2772] type 00 class 0x030000
[    0.561554] pci 0000:00:02.0: reg 0x10: [mem 0xfdf00000-0xfdf7ffff]
[    0.561560] pci 0000:00:02.0: reg 0x14: [io  0xff00-0xff07]
[    0.561566] pci 0000:00:02.0: reg 0x18: [mem 0xd0000000-0xdfffffff pref]
[    0.561572] pci 0000:00:02.0: reg 0x1c: [mem 0xfdf80000-0xfdfbffff]
[    0.561746] pci 0000:00:1c.0: [8086:27d0] type 01 class 0x060400
[    0.561829] pci 0000:00:1c.0: PME# supported from D0 D3hot D3cold
[    0.562013] pci 0000:00:1c.1: [8086:27d2] type 01 class 0x060400
[    0.562096] pci 0000:00:1c.1: PME# supported from D0 D3hot D3cold
[    0.562271] pci 0000:00:1c.2: [8086:27d4] type 01 class 0x060400
[    0.562354] pci 0000:00:1c.2: PME# supported from D0 D3hot D3cold
[    0.562539] pci 0000:00:1c.3: [8086:27d6] type 01 class 0x060400
[    0.562622] pci 0000:00:1c.3: PME# supported from D0 D3hot D3cold
[    0.562797] pci 0000:00:1c.4: [8086:27e0] type 01 class 0x060400
[    0.562880] pci 0000:00:1c.4: PME# supported from D0 D3hot D3cold
[    0.563055] pci 0000:00:1c.5: [8086:27e2] type 01 class 0x060400
[    0.563138] pci 0000:00:1c.5: PME# supported from D0 D3hot D3cold
[    0.563312] pci 0000:00:1d.0: [8086:27c8] type 00 class 0x0c0300
[    0.563359] pci 0000:00:1d.0: reg 0x20: [io  0xfe00-0xfe1f]
[    0.563558] pci 0000:00:1d.1: [8086:27c9] type 00 class 0x0c0300
[    0.563604] pci 0000:00:1d.1: reg 0x20: [io  0xfd00-0xfd1f]
[    0.563786] pci 0000:00:1d.2: [8086:27ca] type 00 class 0x0c0300
[    0.563832] pci 0000:00:1d.2: reg 0x20: [io  0xfc00-0xfc1f]
[    0.564012] pci 0000:00:1d.3: [8086:27cb] type 00 class 0x0c0300
[    0.564058] pci 0000:00:1d.3: reg 0x20: [io  0xfb00-0xfb1f]
[    0.564245] pci 0000:00:1d.7: [8086:27cc] type 00 class 0x0c0320
[    0.564268] pci 0000:00:1d.7: reg 0x10: [mem 0xfdfff000-0xfdfff3ff]
[    0.564352] pci 0000:00:1d.7: PME# supported from D0 D3hot D3cold
[    0.564525] pci 0000:00:1e.0: [8086:244e] type 01 class 0x060401
[    0.564750] pci 0000:00:1f.0: [8086:27b8] type 00 class 0x060100
[    0.564852] pci 0000:00:1f.0: Force enabled HPET at 0xfed00000
[    0.564859] pci 0000:00:1f.0: quirk: [io  0x0400-0x047f] claimed by ICH6 ACPI/GPIO/TCO
[    0.564864] pci 0000:00:1f.0: quirk: [io  0x0480-0x04bf] claimed by ICH6 GPIO
[    0.564870] pci 0000:00:1f.0: ICH7 LPC Generic IO decode 2 PIO at 0290 (mask 0007)
[    0.565051] pci 0000:00:1f.1: [8086:27df] type 00 class 0x01018a
[    0.565069] pci 0000:00:1f.1: reg 0x10: [io  0x0000-0x0007]
[    0.565079] pci 0000:00:1f.1: reg 0x14: [io  0x0000-0x0003]
[    0.565088] pci 0000:00:1f.1: reg 0x18: [io  0x0000-0x0007]
[    0.565098] pci 0000:00:1f.1: reg 0x1c: [io  0x0000-0x0003]
[    0.565107] pci 0000:00:1f.1: reg 0x20: [io  0xf800-0xf80f]
[    0.565127] pci 0000:00:1f.1: legacy IDE quirk: reg 0x10: [io  0x01f0-0x01f7]
[    0.565129] pci 0000:00:1f.1: legacy IDE quirk: reg 0x14: [io  0x03f6]
[    0.565131] pci 0000:00:1f.1: legacy IDE quirk: reg 0x18: [io  0x0170-0x0177]
[    0.565133] pci 0000:00:1f.1: legacy IDE quirk: reg 0x1c: [io  0x0376]
[    0.565290] pci 0000:00:1f.2: [8086:27c0] type 00 class 0x01018f
[    0.565309] pci 0000:00:1f.2: reg 0x10: [io  0xf700-0xf707]
[    0.565318] pci 0000:00:1f.2: reg 0x14: [io  0xf600-0xf603]
[    0.565326] pci 0000:00:1f.2: reg 0x18: [io  0xf500-0xf507]
[    0.565334] pci 0000:00:1f.2: reg 0x1c: [io  0xf400-0xf403]
[    0.565343] pci 0000:00:1f.2: reg 0x20: [io  0xf300-0xf30f]
[    0.565352] pci 0000:00:1f.2: reg 0x24: [mem 0xfdffc000-0xfdffc3ff]
[    0.565386] pci 0000:00:1f.2: PME# supported from D3hot
[    0.565557] pci 0000:00:1f.3: [8086:27da] type 00 class 0x0c0500
[    0.565615] pci 0000:00:1f.3: reg 0x20: [io  0x0500-0x051f]
[    0.565872] pci 0000:01:00.0: [8086:109a] type 00 class 0x020000
[    0.565905] pci 0000:01:00.0: reg 0x10: [mem 0xfd6e0000-0xfd6fffff]
[    0.565938] pci 0000:01:00.0: reg 0x18: [io  0x8f00-0x8f1f]
[    0.566091] pci 0000:01:00.0: PME# supported from D0 D3hot
[    0.566196] pci 0000:01:00.0: disabling ASPM on pre-1.1 PCIe device.  You can enable it with 'pcie_aspm=force'
[    0.566212] pci 0000:00:1c.0: PCI bridge to [bus 01]
[    0.566217] pci 0000:00:1c.0:   bridge window [io  0x8000-0x8fff]
[    0.566221] pci 0000:00:1c.0:   bridge window [mem 0xfd600000-0xfd6fffff]
[    0.566227] pci 0000:00:1c.0:   bridge window [mem 0xfd300000-0xfd3fffff 64bit pref]
[    0.566309] pci 0000:02:00.0: [8086:109a] type 00 class 0x020000
[    0.566343] pci 0000:02:00.0: reg 0x10: [mem 0xfd2e0000-0xfd2fffff]
[    0.566376] pci 0000:02:00.0: reg 0x18: [io  0x7f00-0x7f1f]
[    0.566533] pci 0000:02:00.0: PME# supported from D0 D3hot
[    0.566637] pci 0000:02:00.0: disabling ASPM on pre-1.1 PCIe device.  You can enable it with 'pcie_aspm=force'
[    0.566652] pci 0000:00:1c.1: PCI bridge to [bus 02]
[    0.566656] pci 0000:00:1c.1:   bridge window [io  0x7000-0x7fff]
[    0.566660] pci 0000:00:1c.1:   bridge window [mem 0xfd200000-0xfd2fffff]
[    0.566666] pci 0000:00:1c.1:   bridge window [mem 0xfd100000-0xfd1fffff 64bit pref]
[    0.566749] pci 0000:03:00.0: [8086:109a] type 00 class 0x020000
[    0.566782] pci 0000:03:00.0: reg 0x10: [mem 0xfdee0000-0xfdefffff]
[    0.566815] pci 0000:03:00.0: reg 0x18: [io  0xdf00-0xdf1f]
[    0.566967] pci 0000:03:00.0: PME# supported from D0 D3hot
[    0.567072] pci 0000:03:00.0: disabling ASPM on pre-1.1 PCIe device.  You can enable it with 'pcie_aspm=force'
[    0.567087] pci 0000:00:1c.2: PCI bridge to [bus 03]
[    0.567091] pci 0000:00:1c.2:   bridge window [io  0xd000-0xdfff]
[    0.567095] pci 0000:00:1c.2:   bridge window [mem 0xfde00000-0xfdefffff]
[    0.567101] pci 0000:00:1c.2:   bridge window [mem 0xfdd00000-0xfddfffff 64bit pref]
[    0.567183] pci 0000:04:00.0: [8086:109a] type 00 class 0x020000
[    0.567216] pci 0000:04:00.0: reg 0x10: [mem 0xfdce0000-0xfdcfffff]
[    0.567249] pci 0000:04:00.0: reg 0x18: [io  0xcf00-0xcf1f]
[    0.567403] pci 0000:04:00.0: PME# supported from D0 D3hot
[    0.567511] pci 0000:04:00.0: disabling ASPM on pre-1.1 PCIe device.  You can enable it with 'pcie_aspm=force'
[    0.567526] pci 0000:00:1c.3: PCI bridge to [bus 04]
[    0.567530] pci 0000:00:1c.3:   bridge window [io  0xc000-0xcfff]
[    0.567534] pci 0000:00:1c.3:   bridge window [mem 0xfdc00000-0xfdcfffff]
[    0.567540] pci 0000:00:1c.3:   bridge window [mem 0xfdb00000-0xfdbfffff 64bit pref]
[    0.567622] pci 0000:05:00.0: [8086:109a] type 00 class 0x020000
[    0.567655] pci 0000:05:00.0: reg 0x10: [mem 0xfdae0000-0xfdafffff]
[    0.567688] pci 0000:05:00.0: reg 0x18: [io  0xaf00-0xaf1f]
[    0.567842] pci 0000:05:00.0: PME# supported from D0 D3hot
[    0.567946] pci 0000:05:00.0: disabling ASPM on pre-1.1 PCIe device.  You can enable it with 'pcie_aspm=force'
[    0.567961] pci 0000:00:1c.4: PCI bridge to [bus 05]
[    0.567965] pci 0000:00:1c.4:   bridge window [io  0xa000-0xafff]
[    0.567969] pci 0000:00:1c.4:   bridge window [mem 0xfda00000-0xfdafffff]
[    0.567975] pci 0000:00:1c.4:   bridge window [mem 0xfd900000-0xfd9fffff 64bit pref]
[    0.568056] pci 0000:06:00.0: [8086:109a] type 00 class 0x020000
[    0.568089] pci 0000:06:00.0: reg 0x10: [mem 0xfd8e0000-0xfd8fffff]
[    0.568123] pci 0000:06:00.0: reg 0x18: [io  0x9f00-0x9f1f]
[    0.568275] pci 0000:06:00.0: PME# supported from D0 D3hot
[    0.568379] pci 0000:06:00.0: disabling ASPM on pre-1.1 PCIe device.  You can enable it with 'pcie_aspm=force'
[    0.568393] pci 0000:00:1c.5: PCI bridge to [bus 06]
[    0.568397] pci 0000:00:1c.5:   bridge window [io  0x9000-0x9fff]
[    0.568402] pci 0000:00:1c.5:   bridge window [mem 0xfd800000-0xfd8fffff]
[    0.568407] pci 0000:00:1c.5:   bridge window [mem 0xfd700000-0xfd7fffff 64bit pref]
[    0.568433] pci_bus 0000:07: extended config space not accessible
[    0.568505] pci 0000:00:1e.0: PCI bridge to [bus 07] (subtractive decode)
[    0.568509] pci 0000:00:1e.0:   bridge window [io  0xb000-0xbfff]
[    0.568513] pci 0000:00:1e.0:   bridge window [mem 0xfd500000-0xfd5fffff]
[    0.568519] pci 0000:00:1e.0:   bridge window [mem 0xfd400000-0xfd4fffff 64bit pref]
[    0.568522] pci 0000:00:1e.0:   bridge window [io  0x0000-0x0cf7 window] (subtractive decode)
[    0.568525] pci 0000:00:1e.0:   bridge window [io  0x0d00-0xffff window] (subtractive decode)
[    0.568527] pci 0000:00:1e.0:   bridge window [mem 0x000a0000-0x000bffff window] (subtractive decode)
[    0.568530] pci 0000:00:1e.0:   bridge window [mem 0x000c0000-0x000dffff window] (subtractive decode)
[    0.568532] pci 0000:00:1e.0:   bridge window [mem 0x3f700000-0xfebfffff window] (subtractive decode)
[    0.568569] pci_bus 0000:00: on NUMA node 0
[    0.569466] ACPI: PCI Interrupt Link [LNKA] (IRQs 3 4 *5 7 9 10 11 12 14 15)
[    0.569556] ACPI: PCI Interrupt Link [LNKB] (IRQs 3 4 5 7 9 10 *11 12 14 15)
[    0.569643] ACPI: PCI Interrupt Link [LNKC] (IRQs 3 4 5 7 9 *10 11 12 14 15)
[    0.569731] ACPI: PCI Interrupt Link [LNKD] (IRQs 3 4 5 7 9 10 11 12 14 *15)
[    0.569817] ACPI: PCI Interrupt Link [LNKE] (IRQs 3 4 5 *7 9 10 11 12 14 15)
[    0.569904] ACPI: PCI Interrupt Link [LNKF] (IRQs 3 4 5 7 9 10 11 12 14 15) *0, disabled.
[    0.569991] ACPI: PCI Interrupt Link [LNK0] (IRQs 3 4 5 7 9 10 11 12 14 15) *0, disabled.
[    0.570079] ACPI: PCI Interrupt Link [LNK1] (IRQs 3 4 5 7 *9 10 11 12 14 15)
[    0.570396] iommu: Default domain type: Translated
[    0.570484] pci 0000:00:02.0: vgaarb: setting as boot VGA device
[    0.570488] pci 0000:00:02.0: vgaarb: VGA device added: decodes=io+mem,owns=io+mem,locks=none
[    0.570501] pci 0000:00:02.0: vgaarb: bridge control possible
[    0.570503] vgaarb: loaded
[    0.570772] SCSI subsystem initialized
[    0.570860] libata version 3.00 loaded.
[    0.570860] ACPI: bus type USB registered
[    0.570860] usbcore: registered new interface driver usbfs
[    0.570860] usbcore: registered new interface driver hub
[    0.570860] usbcore: registered new device driver usb
[    0.570860] pps_core: LinuxPPS API ver. 1 registered
[    0.570860] pps_core: Software ver. 5.3.6 - Copyright 2005-2007 Rodolfo Giometti <giometti@linux.it>
[    0.570860] PTP clock support registered
[    0.570934] EDAC MC: Ver: 3.0.0
[    0.571549] PCI: Using ACPI for IRQ routing
[    0.571552] PCI: pci_cache_line_size set to 64 bytes
[    0.571641] e820: reserve RAM buffer [mem 0x0009f400-0x0009ffff]
[    0.571643] e820: reserve RAM buffer [mem 0x3f6e0000-0x3fffffff]
[    0.571854] NetLabel: Initializing
[    0.571855] NetLabel:  domain hash size = 128
[    0.571856] NetLabel:  protocols = UNLABELED CIPSOv4 CALIPSO
[    0.571882] NetLabel:  unlabeled traffic allowed by default
[    0.572443] clocksource: hpet: mask: 0xffffffff max_cycles: 0xffffffff, max_idle_ns: 133484882848 ns
[    0.572456] hpet: 3 channels of 0 reserved for per-cpu timers
[    0.572459] hpet0: at MMIO 0xfed00000, IRQs 2, 8, 0
[    0.572463] hpet0: 3 comparators, 64-bit 14.318180 MHz counter
[    0.574456] clocksource: Switched to clocksource tsc-early
[    0.597133] VFS: Disk quotas dquot_6.6.0
[    0.597165] VFS: Dquot-cache hash table entries: 512 (order 0, 4096 bytes)
[    0.597275] pnp: PnP ACPI init
[    0.597622] system 00:00: [io  0x04d0-0x04d1] has been reserved
[    0.597639] system 00:00: Plug and Play ACPI device, IDs PNP0c02 (active)
[    0.597699] pnp 00:01: Plug and Play ACPI device, IDs PNP0b00 (active)
[    0.598007] pnp 00:02: Plug and Play ACPI device, IDs PNP0501 (active)
[    0.598298] pnp 00:03: Plug and Play ACPI device, IDs PNP0501 (active)
[    0.598741] pnp 00:04: Plug and Play ACPI device, IDs PNP0400 (active)
[    0.598964] system 00:05: [io  0x0400-0x04bf] could not be reserved
[    0.598979] system 00:05: Plug and Play ACPI device, IDs PNP0c02 (active)
[    0.599324] system 00:06: [mem 0xe0000000-0xefffffff] has been reserved
[    0.599336] system 00:06: Plug and Play ACPI device, IDs PNP0c02 (active)
[    0.599494] system 00:07: [mem 0x000f0000-0x000fffff] could not be reserved
[    0.599498] system 00:07: [mem 0x3f6e0000-0x3f6fffff] could not be reserved
[    0.599501] system 00:07: [mem 0x00000000-0x0009ffff] could not be reserved
[    0.599504] system 00:07: [mem 0x00100000-0x3f6dffff] could not be reserved
[    0.599507] system 00:07: [mem 0xfec00000-0xfec00fff] could not be reserved
[    0.599510] system 00:07: [mem 0xfed13000-0xfed1dfff] has been reserved
[    0.599513] system 00:07: [mem 0xfed20000-0xfed8ffff] has been reserved
[    0.599516] system 00:07: [mem 0xfee00000-0xfee00fff] has been reserved
[    0.599519] system 00:07: [mem 0xffb00000-0xffb7ffff] has been reserved
[    0.599522] system 00:07: [mem 0xfff00000-0xffffffff] has been reserved
[    0.599525] system 00:07: [mem 0x000e0000-0x000effff] has been reserved
[    0.599535] system 00:07: Plug and Play ACPI device, IDs PNP0c01 (active)
[    0.599547] pnp: PnP ACPI: found 8 devices
[    0.603004] thermal_sys: Registered thermal governor 'step_wise'
[    0.603005] thermal_sys: Registered thermal governor 'user_space'
[    0.607563] clocksource: acpi_pm: mask: 0xffffff max_cycles: 0xffffff, max_idle_ns: 2085701024 ns
[    0.607610] pci 0000:00:1c.0: PCI bridge to [bus 01]
[    0.607615] pci 0000:00:1c.0:   bridge window [io  0x8000-0x8fff]
[    0.607622] pci 0000:00:1c.0:   bridge window [mem 0xfd600000-0xfd6fffff]
[    0.607626] pci 0000:00:1c.0:   bridge window [mem 0xfd300000-0xfd3fffff 64bit pref]
[    0.607632] pci 0000:00:1c.1: PCI bridge to [bus 02]
[    0.607635] pci 0000:00:1c.1:   bridge window [io  0x7000-0x7fff]
[    0.607640] pci 0000:00:1c.1:   bridge window [mem 0xfd200000-0xfd2fffff]
[    0.607644] pci 0000:00:1c.1:   bridge window [mem 0xfd100000-0xfd1fffff 64bit pref]
[    0.607651] pci 0000:00:1c.2: PCI bridge to [bus 03]
[    0.607654] pci 0000:00:1c.2:   bridge window [io  0xd000-0xdfff]
[    0.607659] pci 0000:00:1c.2:   bridge window [mem 0xfde00000-0xfdefffff]
[    0.607663] pci 0000:00:1c.2:   bridge window [mem 0xfdd00000-0xfddfffff 64bit pref]
[    0.607669] pci 0000:00:1c.3: PCI bridge to [bus 04]
[    0.607672] pci 0000:00:1c.3:   bridge window [io  0xc000-0xcfff]
[    0.607677] pci 0000:00:1c.3:   bridge window [mem 0xfdc00000-0xfdcfffff]
[    0.607681] pci 0000:00:1c.3:   bridge window [mem 0xfdb00000-0xfdbfffff 64bit pref]
[    0.607687] pci 0000:00:1c.4: PCI bridge to [bus 05]
[    0.607690] pci 0000:00:1c.4:   bridge window [io  0xa000-0xafff]
[    0.607695] pci 0000:00:1c.4:   bridge window [mem 0xfda00000-0xfdafffff]
[    0.607699] pci 0000:00:1c.4:   bridge window [mem 0xfd900000-0xfd9fffff 64bit pref]
[    0.607705] pci 0000:00:1c.5: PCI bridge to [bus 06]
[    0.607708] pci 0000:00:1c.5:   bridge window [io  0x9000-0x9fff]
[    0.607713] pci 0000:00:1c.5:   bridge window [mem 0xfd800000-0xfd8fffff]
[    0.607717] pci 0000:00:1c.5:   bridge window [mem 0xfd700000-0xfd7fffff 64bit pref]
[    0.607724] pci 0000:00:1e.0: PCI bridge to [bus 07]
[    0.607727] pci 0000:00:1e.0:   bridge window [io  0xb000-0xbfff]
[    0.607732] pci 0000:00:1e.0:   bridge window [mem 0xfd500000-0xfd5fffff]
[    0.607736] pci 0000:00:1e.0:   bridge window [mem 0xfd400000-0xfd4fffff 64bit pref]
[    0.607744] pci_bus 0000:00: resource 4 [io  0x0000-0x0cf7 window]
[    0.607747] pci_bus 0000:00: resource 5 [io  0x0d00-0xffff window]
[    0.607749] pci_bus 0000:00: resource 6 [mem 0x000a0000-0x000bffff window]
[    0.607751] pci_bus 0000:00: resource 7 [mem 0x000c0000-0x000dffff window]
[    0.607754] pci_bus 0000:00: resource 8 [mem 0x3f700000-0xfebfffff window]
[    0.607756] pci_bus 0000:01: resource 0 [io  0x8000-0x8fff]
[    0.607759] pci_bus 0000:01: resource 1 [mem 0xfd600000-0xfd6fffff]
[    0.607761] pci_bus 0000:01: resource 2 [mem 0xfd300000-0xfd3fffff 64bit pref]
[    0.607763] pci_bus 0000:02: resource 0 [io  0x7000-0x7fff]
[    0.607766] pci_bus 0000:02: resource 1 [mem 0xfd200000-0xfd2fffff]
[    0.607768] pci_bus 0000:02: resource 2 [mem 0xfd100000-0xfd1fffff 64bit pref]
[    0.607770] pci_bus 0000:03: resource 0 [io  0xd000-0xdfff]
[    0.607772] pci_bus 0000:03: resource 1 [mem 0xfde00000-0xfdefffff]
[    0.607775] pci_bus 0000:03: resource 2 [mem 0xfdd00000-0xfddfffff 64bit pref]
[    0.607777] pci_bus 0000:04: resource 0 [io  0xc000-0xcfff]
[    0.607780] pci_bus 0000:04: resource 1 [mem 0xfdc00000-0xfdcfffff]
[    0.607782] pci_bus 0000:04: resource 2 [mem 0xfdb00000-0xfdbfffff 64bit pref]
[    0.607784] pci_bus 0000:05: resource 0 [io  0xa000-0xafff]
[    0.607786] pci_bus 0000:05: resource 1 [mem 0xfda00000-0xfdafffff]
[    0.607789] pci_bus 0000:05: resource 2 [mem 0xfd900000-0xfd9fffff 64bit pref]
[    0.607791] pci_bus 0000:06: resource 0 [io  0x9000-0x9fff]
[    0.607793] pci_bus 0000:06: resource 1 [mem 0xfd800000-0xfd8fffff]
[    0.607795] pci_bus 0000:06: resource 2 [mem 0xfd700000-0xfd7fffff 64bit pref]
[    0.607798] pci_bus 0000:07: resource 0 [io  0xb000-0xbfff]
[    0.607800] pci_bus 0000:07: resource 1 [mem 0xfd500000-0xfd5fffff]
[    0.607802] pci_bus 0000:07: resource 2 [mem 0xfd400000-0xfd4fffff 64bit pref]
[    0.607804] pci_bus 0000:07: resource 4 [io  0x0000-0x0cf7 window]
[    0.607807] pci_bus 0000:07: resource 5 [io  0x0d00-0xffff window]
[    0.607809] pci_bus 0000:07: resource 6 [mem 0x000a0000-0x000bffff window]
[    0.607811] pci_bus 0000:07: resource 7 [mem 0x000c0000-0x000dffff window]
[    0.607814] pci_bus 0000:07: resource 8 [mem 0x3f700000-0xfebfffff window]
[    0.607945] NET: Registered protocol family 2
[    0.608216] tcp_listen_portaddr_hash hash table entries: 512 (order: 1, 8192 bytes, linear)
[    0.608226] TCP established hash table entries: 8192 (order: 4, 65536 bytes, linear)
[    0.608273] TCP bind hash table entries: 8192 (order: 5, 131072 bytes, linear)
[    0.608361] TCP: Hash tables configured (established 8192 bind 8192)
[    0.608455] UDP hash table entries: 512 (order: 2, 16384 bytes, linear)
[    0.608470] UDP-Lite hash table entries: 512 (order: 2, 16384 bytes, linear)
[    0.608544] NET: Registered protocol family 1
[    0.608567] pci 0000:00:02.0: Video device with shadowed ROM at [mem 0x000c0000-0x000dffff]
[    0.609762] PCI: CLS 64 bytes, default 64
[    0.760814] kvm: no hardware support
[    0.760853] has_svm: not amd or hygon
[    0.760854] kvm: no hardware support
[    0.761495] check: Scanning for low memory corruption every 60 seconds
[    0.792659] PCLMULQDQ-NI instructions are not detected.
[    0.798351] AVX or AES-NI instructions are not detected.
[    0.798353] CPU feature 'AVX registers' is not supported.
[    0.798355] CPU feature 'AVX registers' is not supported.
[    0.798356] CPU feature 'AVX registers' is not supported.
[    0.798357] CPU feature 'AVX registers' is not supported.
[    0.798358] AVX2 or AES-NI instructions are not detected.
[    0.798359] AVX2 instructions are not detected.
[    0.799122] workingset: timestamp_bits=46 max_order=18 bucket_order=0
[    0.803878] squashfs: version 4.0 (2009/01/31) Phillip Lougher
[    0.804012] ntfs: driver 2.1.32 [Flags: R/W].
[    0.811928] NET: Registered protocol family 38
[    0.811933] async_tx: api initialized (async)
[    0.811965] Block layer SCSI generic (bsg) driver version 0.4 loaded (major 250)
[    0.812023] io scheduler mq-deadline registered
[    0.812025] io scheduler kyber registered
[    0.813584] hv_vmbus: registering driver hv_pci
[    0.813609] hv_vmbus: registering driver hyperv_fb
[    0.813688] vga16fb: initializing
[    0.813691] vga16fb: mapped to 0x(____ptrval____)
[    0.908005] Console: switching to colour frame buffer device 80x30
[    0.912576] fb0: VGA16 VGA frame buffer device
[    0.912742] input: Power Button as /devices/LNXSYSTM:00/LNXSYBUS:00/PNP0C0C:00/input/input0
[    0.912794] ACPI: Power Button [PWRB]
[    0.912887] input: Power Button as /devices/LNXSYSTM:00/LNXPWRBN:00/input/input1
[    0.912959] ACPI: Power Button [PWRF]
[    0.913953] thermal LNXTHERM:00: registered as thermal_zone0
[    0.913956] ACPI: Thermal Zone [THRM] (23 C)
[    0.934672] Serial: 8250/16550 driver, 4 ports, IRQ sharing enabled
[    0.955240] 00:02: ttyS0 at I/O 0x3f8 (irq = 4, base_baud = 115200) is a 16550A
[    0.975912] 00:03: ttyS1 at I/O 0x2f8 (irq = 3, base_baud = 115200) is a 16550A
[    0.976623] Non-volatile memory driver v1.3
[    0.976813] intel_rng: FWH not detected
[    0.976845] Linux agpgart interface v0.103
[    0.977596] pci 0000:00:00.0: Intel 945G Chipset
[    0.977610] pci 0000:00:00.0: detected gtt size: 262144K total, 262144K mappable
[    0.978147] pci 0000:00:00.0: detected 8192K stolen memory
[    0.978663] checking generic (a0000 10000) vs hw (d0000000 10000000)
[    0.978665] fb0: switching to inteldrmfb from VGA16 VGA
[    0.992364] Console: switching to colour VGA+ 80x25
[    0.992906] i915 0000:00:02.0: vgaarb: deactivate vga console
[    0.994306] Console: switching to colour dummy device 80x25
[    0.994384] [drm] Supports vblank timestamp caching Rev 2 (21.10.2013).
[    0.994386] [drm] Driver supports precise vblank timestamp query.
[    0.994740] i915 0000:00:02.0: vgaarb: changed VGA decodes: olddecodes=io+mem,decodes=io+mem:owns=io+mem
[    1.025157] [drm] RC6 disabled, disabling runtime PM support
[    1.025218] [drm] Initialized overlay support.
[    1.025566] [drm] Initialized i915 1.6.0 20190822 for 0000:00:02.0 on minor 0
[    1.025983] [drm] Initialized vgem 1.0.0 20120112 for vgem on minor 1
[    1.026082] parport_pc 00:04: reported by Plug and Play ACPI
[    1.030245] brd: module loaded
[    1.034098] loop: module loaded
[    1.034204] ibmasm: IBM ASM Service Processor Driver version 1.0 loaded
[    1.034229] dummy-irq: no IRQ given.  Use irq=N
[    1.034412] Phantom Linux Driver, version n0.9.8, init OK
[    1.034555] Silicon Labs C2 port support v. 0.51.0 - (C) 2007 Rodolfo Giometti
[    1.240837] [drm] Cannot find any crtc or sizes
[    1.447842] [drm] Cannot find any crtc or sizes
[    1.780423] tsc: Refined TSC clocksource calibration: 1800.063 MHz
[    1.780431] clocksource: tsc: mask: 0xffffffffffffffff max_cycles: 0x19f265276e5, max_idle_ns: 440795239467 ns
[    1.780448] clocksource: Switched to clocksource tsc
[    3.017548] Guest personality initialized and is inactive
[    3.017638] VMCI host device registered (name=vmci, major=10, minor=62)
[    3.017639] Initialized host personality
[    3.017694] Loading iSCSI transport class v2.0-870.
[    3.018066] VMware PVSCSI driver - version 1.0.7.0-k
[    3.018106] hv_vmbus: registering driver hv_storvsc
[    3.019195] ata_piix 0000:00:1f.1: version 2.13
[    3.020431] scsi host0: ata_piix
[    3.020644] scsi host1: ata_piix
[    3.020724] ata1: PATA max UDMA/100 cmd 0x1f0 ctl 0x3f6 bmdma 0xf800 irq 14
[    3.020726] ata2: PATA max UDMA/100 cmd 0x170 ctl 0x376 bmdma 0xf808 irq 15
[    3.020861] ata_piix 0000:00:1f.2: MAP [ P0 P2 P1 P3 ]
[    3.021493] ata2: port disabled--ignoring
[    3.021900] scsi host2: ata_piix
[    3.022057] scsi host3: ata_piix
[    3.022128] ata3: SATA max UDMA/133 cmd 0xf700 ctl 0xf600 bmdma 0xf300 irq 19
[    3.022130] ata4: SATA max UDMA/133 cmd 0xf500 ctl 0xf400 bmdma 0xf308 irq 19
[    3.022246] Ethernet Channel Bonding Driver: v3.7.1 (April 27, 2011)
[    3.023449] tun: Universal TUN/TAP device driver, 1.6
[    3.023656] e100: Intel(R) PRO/100 Network Driver, 3.5.24-k2-NAPI
[    3.023657] e100: Copyright(c) 1999-2006 Intel Corporation
[    3.023688] e1000: Intel(R) PRO/1000 Network Driver - version 7.3.21-k8-NAPI
[    3.023689] e1000: Copyright (c) 1999-2006 Intel Corporation.
[    3.023719] e1000e: Intel(R) PRO/1000 Network Driver - 3.2.6-k
[    3.023720] e1000e: Copyright(c) 1999 - 2015 Intel Corporation.
[    3.023949] e1000e 0000:01:00.0: Interrupt Throttling Rate (ints/sec) set to dynamic conservative mode
[    3.115941] e1000e 0000:01:00.0 eth0: (PCI Express:2.5GT/s:Width x1) 00:90:fb:31:23:f0
[    3.115944] e1000e 0000:01:00.0 eth0: Intel(R) PRO/1000 Network Connection
[    3.116014] e1000e 0000:01:00.0 eth0: MAC: 2, PHY: 2, PBA No: 376120-000
[    3.116196] e1000e 0000:02:00.0: Interrupt Throttling Rate (ints/sec) set to dynamic conservative mode
[    3.174984] ata1.00: CFA: TS8GCF200I, 20110118, max UDMA/66
[    3.174987] ata1.00: 15924384 sectors, multi 0: LBA
[    3.174991] ata1.00: limited to UDMA/33 due to 40-wire cable
[    3.179739] scsi 0:0:0:0: Direct-Access     ATA      TS8GCF200I       0118 PQ: 0 ANSI: 5
[    3.180012] sd 0:0:0:0: Attached scsi generic sg0 type 0
[    3.180096] sd 0:0:0:0: [sda] 15924384 512-byte logical blocks: (8.15 GB/7.59 GiB)
[    3.180121] sd 0:0:0:0: [sda] Write Protect is off
[    3.180124] sd 0:0:0:0: [sda] Mode Sense: 00 3a 00 00
[    3.180153] sd 0:0:0:0: [sda] Write cache: disabled, read cache: enabled, doesn't support DPO or FUA
[    3.180937]  sda: sda1 sda2 sda3 sda4
[    3.181656] sd 0:0:0:0: [sda] Attached SCSI disk
[    3.207858] e1000e 0000:02:00.0 eth1: (PCI Express:2.5GT/s:Width x1) 00:90:fb:31:23:f1
[    3.207861] e1000e 0000:02:00.0 eth1: Intel(R) PRO/1000 Network Connection
[    3.207931] e1000e 0000:02:00.0 eth1: MAC: 2, PHY: 2, PBA No: 376120-000
[    3.208113] e1000e 0000:03:00.0: Interrupt Throttling Rate (ints/sec) set to dynamic conservative mode
[    3.299907] e1000e 0000:03:00.0 eth2: (PCI Express:2.5GT/s:Width x1) 00:90:fb:31:23:f2
[    3.299910] e1000e 0000:03:00.0 eth2: Intel(R) PRO/1000 Network Connection
[    3.299980] e1000e 0000:03:00.0 eth2: MAC: 2, PHY: 2, PBA No: 376120-001
[    3.300133] e1000e 0000:04:00.0: Interrupt Throttling Rate (ints/sec) set to dynamic conservative mode
[    3.391919] e1000e 0000:04:00.0 eth3: (PCI Express:2.5GT/s:Width x1) 00:90:fb:31:23:f3
[    3.391922] e1000e 0000:04:00.0 eth3: Intel(R) PRO/1000 Network Connection
[    3.391992] e1000e 0000:04:00.0 eth3: MAC: 2, PHY: 2, PBA No: 376120-001
[    3.392142] e1000e 0000:05:00.0: Interrupt Throttling Rate (ints/sec) set to dynamic conservative mode
[    3.483909] e1000e 0000:05:00.0 eth4: (PCI Express:2.5GT/s:Width x1) 00:90:fb:31:23:f4
[    3.483912] e1000e 0000:05:00.0 eth4: Intel(R) PRO/1000 Network Connection
[    3.483982] e1000e 0000:05:00.0 eth4: MAC: 2, PHY: 2, PBA No: FFFFFF-0FF
[    3.484132] e1000e 0000:06:00.0: Interrupt Throttling Rate (ints/sec) set to dynamic conservative mode
[    3.575908] e1000e 0000:06:00.0 eth5: (PCI Express:2.5GT/s:Width x1) 00:90:fb:31:23:f5
[    3.575911] e1000e 0000:06:00.0 eth5: Intel(R) PRO/1000 Network Connection
[    3.575981] e1000e 0000:06:00.0 eth5: MAC: 2, PHY: 2, PBA No: FFFFFF-0FF
[    3.576021] igb: Intel(R) Gigabit Ethernet Network Driver - version 5.6.0-k
[    3.576023] igb: Copyright (c) 2007-2014 Intel Corporation.
[    3.576067] Intel(R) 2.5G Ethernet Linux Driver - version 0.0.1-k
[    3.576069] Copyright(c) 2018 Intel Corporation.
[    3.576096] igbvf: Intel(R) Gigabit Virtual Function Network Driver - version 2.4.0-k
[    3.576097] igbvf: Copyright (c) 2009 - 2012 Intel Corporation.
[    3.576122] ixgbe: Intel(R) 10 Gigabit PCI Express Network Driver - version 5.1.0-k
[    3.576124] ixgbe: Copyright (c) 1999-2016 Intel Corporation.
[    3.576217] ixgbevf: Intel(R) 10 Gigabit PCI Express Virtual Function Network Driver - version 4.1.0-k
[    3.576219] ixgbevf: Copyright (c) 2009 - 2018 Intel Corporation.
[    3.576296] i40e: Intel(R) Ethernet Connection XL710 Network Driver - version 2.8.20-k
[    3.576298] i40e: Copyright (c) 2013 - 2019 Intel Corporation.
[    3.576369] ixgb: Intel(R) PRO/10GbE Network Driver - version 1.0.135-k2-NAPI
[    3.576370] ixgb: Copyright (c) 1999-2008 Intel Corporation.
[    3.576399] iavf: Intel(R) Ethernet Adaptive Virtual Function Network Driver - version 3.2.3-k
[    3.576401] Copyright (c) 2013 - 2018 Intel Corporation.
[    3.576499] Intel(R) Ethernet Switch Host Interface Driver - version 0.26.1-k
[    3.576500] Copyright(c) 2013 - 2019 Intel Corporation.
[    3.576575] ice: Intel(R) Ethernet Connection E800 Series Linux Driver - version 0.8.1-k
[    3.576576] ice: Copyright (c) 2018, Intel Corporation.
[    3.576645] PPP generic driver version 2.4.2
[    3.576721] PPP BSD Compression module registered
[    3.576723] PPP Deflate Compression module registered
[    3.576740] PPP MPPE Compression module registered
[    3.576742] NET: Registered protocol family 24
[    3.576753] PPTP driver version 0.8.5
[    3.576925] VMware vmxnet3 virtual NIC driver - version 1.4.17.0-k-NAPI
[    3.576957] hv_vmbus: registering driver hv_netvsc
[    3.577109] ehci_hcd: USB 2.0 'Enhanced' Host Controller (EHCI) Driver
[    3.577110] ehci-pci: EHCI PCI platform driver
[    3.577336] ehci-pci 0000:00:1d.7: EHCI Host Controller
[    3.577402] ehci-pci 0000:00:1d.7: new USB bus registered, assigned bus number 1
[    3.577432] ehci-pci 0000:00:1d.7: debug port 1
[    3.581331] ehci-pci 0000:00:1d.7: cache line size of 64 is not supported
[    3.581355] ehci-pci 0000:00:1d.7: irq 23, io mem 0xfdfff000
[    3.587419] ehci-pci 0000:00:1d.7: USB 2.0 started, EHCI 1.00
[    3.587477] usb usb1: New USB device found, idVendor=1d6b, idProduct=0002, bcdDevice= 5.04
[    3.587480] usb usb1: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.587482] usb usb1: Product: EHCI Host Controller
[    3.587485] usb usb1: Manufacturer: Linux 5.4.22 ehci_hcd
[    3.587487] usb usb1: SerialNumber: 0000:00:1d.7
[    3.587673] hub 1-0:1.0: USB hub found
[    3.587684] hub 1-0:1.0: 8 ports detected
[    3.588043] ehci-platform: EHCI generic platform driver
[    3.588075] ohci_hcd: USB 1.1 'Open' Host Controller (OHCI) Driver
[    3.588082] ohci-pci: OHCI PCI platform driver
[    3.588108] ohci-platform: OHCI generic platform driver
[    3.588124] uhci_hcd: USB Universal Host Controller Interface driver
[    3.588260] uhci_hcd 0000:00:1d.0: UHCI Host Controller
[    3.588330] uhci_hcd 0000:00:1d.0: new USB bus registered, assigned bus number 2
[    3.588357] uhci_hcd 0000:00:1d.0: irq 23, io base 0x0000fe00
[    3.588437] usb usb2: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 5.04
[    3.588439] usb usb2: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.588442] usb usb2: Product: UHCI Host Controller
[    3.588444] usb usb2: Manufacturer: Linux 5.4.22 uhci_hcd
[    3.588446] usb usb2: SerialNumber: 0000:00:1d.0
[    3.588610] hub 2-0:1.0: USB hub found
[    3.588620] hub 2-0:1.0: 2 ports detected
[    3.588916] uhci_hcd 0000:00:1d.1: UHCI Host Controller
[    3.588985] uhci_hcd 0000:00:1d.1: new USB bus registered, assigned bus number 3
[    3.589012] uhci_hcd 0000:00:1d.1: irq 19, io base 0x0000fd00
[    3.589080] usb usb3: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 5.04
[    3.589082] usb usb3: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.589085] usb usb3: Product: UHCI Host Controller
[    3.589087] usb usb3: Manufacturer: Linux 5.4.22 uhci_hcd
[    3.589089] usb usb3: SerialNumber: 0000:00:1d.1
[    3.589244] hub 3-0:1.0: USB hub found
[    3.589254] hub 3-0:1.0: 2 ports detected
[    3.589561] uhci_hcd 0000:00:1d.2: UHCI Host Controller
[    3.589626] uhci_hcd 0000:00:1d.2: new USB bus registered, assigned bus number 4
[    3.589666] uhci_hcd 0000:00:1d.2: irq 18, io base 0x0000fc00
[    3.589764] usb usb4: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 5.04
[    3.589767] usb usb4: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.589770] usb usb4: Product: UHCI Host Controller
[    3.589772] usb usb4: Manufacturer: Linux 5.4.22 uhci_hcd
[    3.589774] usb usb4: SerialNumber: 0000:00:1d.2
[    3.589942] hub 4-0:1.0: USB hub found
[    3.589955] hub 4-0:1.0: 2 ports detected
[    3.590271] uhci_hcd 0000:00:1d.3: UHCI Host Controller
[    3.590334] uhci_hcd 0000:00:1d.3: new USB bus registered, assigned bus number 5
[    3.590362] uhci_hcd 0000:00:1d.3: irq 16, io base 0x0000fb00
[    3.590471] usb usb5: New USB device found, idVendor=1d6b, idProduct=0001, bcdDevice= 5.04
[    3.590474] usb usb5: New USB device strings: Mfr=3, Product=2, SerialNumber=1
[    3.590476] usb usb5: Product: UHCI Host Controller
[    3.590478] usb usb5: Manufacturer: Linux 5.4.22 uhci_hcd
[    3.590480] usb usb5: SerialNumber: 0000:00:1d.3
[    3.590639] hub 5-0:1.0: USB hub found
[    3.590652] hub 5-0:1.0: 2 ports detected
[    3.590981] usbcore: registered new interface driver cdc_acm
[    3.590982] cdc_acm: USB Abstract Control Model driver for USB modems and ISDN adapters
[    3.591006] usbcore: registered new interface driver usblp
[    3.591023] usbcore: registered new interface driver cdc_wdm
[    3.591039] usbcore: registered new interface driver usbtmc
[    3.591084] usbcore: registered new interface driver usb-storage
[    3.591100] usbcore: registered new interface driver ums-datafab
[    3.591119] usbcore: registered new interface driver ums_eneub6250
[    3.591134] usbcore: registered new interface driver ums-freecom
[    3.591150] usbcore: registered new interface driver ums-isd200
[    3.591170] usbcore: registered new interface driver ums-realtek
[    3.591190] usbcore: registered new interface driver ums-usbat
[    3.591239] usbcore: registered new interface driver usbserial_generic
[    3.591252] usbserial: USB Serial support registered for generic
[    3.591272] usbcore: registered new interface driver usblcd
[    3.591300] usbcore: registered new interface driver usbtest
[    3.591319] usbcore: registered new interface driver usbsevseg
[    3.591381] i8042: PNP: No PS/2 controller found.
[    3.591382] i8042: Probing ports directly.
[    3.844771] serio: i8042 KBD port at 0x60,0x64 irq 1
[    3.844800] hv_vmbus: registering driver hyperv_keyboard
[    3.844927] mousedev: PS/2 mouse device common for all mice
[    3.845122] rtc_cmos 00:01: RTC can wake from S4
[    3.845445] rtc_cmos 00:01: registered as rtc0
[    3.845480] rtc_cmos 00:01: alarms up to one month, 242 bytes nvram, hpet irqs
[    3.845713] i801_smbus 0000:00:1f.3: SMBus using PCI interrupt
[    3.862095] device-mapper: ioctl: 4.41.0-ioctl (2019-09-16) initialised: dm-devel@redhat.com
[    3.862278] device-mapper: multipath round-robin: version 1.2.0 loaded
[    3.862280] device-mapper: multipath queue-length: version 0.2.0 loaded
[    3.862282] device-mapper: multipath service-time: version 0.3.0 loaded
[    3.862305] device-mapper: dm-log-userspace: version 1.3.0 loaded
[    3.862307] device-mapper: raid: Loading target version 1.14.0
[    3.862315] intel_pstate: CPU model not supported
[    3.862386] usbcore: registered new interface driver ushc
[    3.863985] hidraw: raw HID events driver (C) Jiri Kosina
[    3.864132] hv_vmbus: registering driver hid_hyperv
[    3.864380] usbcore: registered new interface driver usbhid
[    3.864381] usbhid: USB HID core driver
[    3.864634] NET: Registered protocol family 40
[    3.864863] hv_utils: Registering HyperV Utility Driver
[    3.864864] hv_vmbus: registering driver hv_utils
[    3.864865] hv_vmbus: registering driver hv_balloon
[    3.864949] NET: Registered protocol family 26
[    3.864956] GACT probability on
[    3.864959] Mirror/redirect action on
[    3.864973] Simple TC action Loaded
[    3.865196] netem: version 1.3
[    3.865211] u32 classifier
[    3.865212]     Performance counters on
[    3.865213]     input device check on
[    3.865214]     Actions configured
[    3.865674] xt_time: kernel timezone is -0000
[    3.865858] IPVS: Registered protocols (TCP, UDP, SCTP, AH, ESP)
[    3.865871] IPVS: Connection hash table configured (size=4096, memory=64Kbytes)
[    3.865955] IPVS: ipvs loaded.
[    3.865957] IPVS: [rr] scheduler registered.
[    3.865958] IPVS: [wrr] scheduler registered.
[    3.865960] IPVS: [lc] scheduler registered.
[    3.865961] IPVS: [wlc] scheduler registered.
[    3.865962] IPVS: [fo] scheduler registered.
[    3.865963] IPVS: [ovf] scheduler registered.
[    3.865968] IPVS: [lblc] scheduler registered.
[    3.865972] IPVS: [lblcr] scheduler registered.
[    3.865973] IPVS: [dh] scheduler registered.
[    3.865974] IPVS: [sh] scheduler registered.
[    3.865976] IPVS: [mh] scheduler registered.
[    3.865977] IPVS: [sed] scheduler registered.
[    3.865978] IPVS: [nq] scheduler registered.
[    3.865982] IPVS: ftp: loaded support on port[0] = 21
[    3.865983] IPVS: [sip] pe registered.
[    3.866078] ipip: IPv4 and MPLS over IPv4 tunneling driver
[    3.866305] gre: GRE over IPv4 demultiplexor driver
[    3.866307] ip_gre: GRE over IPv4 tunneling driver
[    3.866901] IPv4 over IPsec tunneling driver
[    3.867202] ipt_CLUSTERIP: ClusterIP Version 0.9 loaded successfully
[    3.867238] Initializing XFRM netlink socket
[    3.867572] NET: Registered protocol family 10
[    3.868700] Segment Routing with IPv6
[    3.868885] sit: IPv6, IPv4 and MPLS over IPv4 tunneling driver
[    3.869146] NET: Registered protocol family 17
[    3.869155] NET: Registered protocol family 15
[    3.869179] Bridge firewalling registered
[    3.869217] l2tp_core: L2TP core driver, V2.0
[    3.869221] l2tp_ppp: PPPoL2TP kernel driver, V2.0
[    3.869222] l2tp_ip: L2TP IP encapsulation support (L2TPv3)
[    3.869229] l2tp_netlink: L2TP netlink interface
[    3.869241] l2tp_eth: L2TP ethernet pseudowire support (L2TPv3)
[    3.869255] l2tp_debugfs: L2TP debugfs support
[    3.869256] l2tp_ip6: L2TP IP encapsulation support for IPv6 (L2TPv3)
[    3.869264] NET4: DECnet for Linux: V.2.5.68s (C) 1995-2003 Linux DECnet Project Team
[    3.869309] DECnet: Routing cache hash table of 1024 buckets, 16Kbytes
[    3.869320] NET: Registered protocol family 12
[    3.869331] 8021q: 802.1Q VLAN Support v1.8
[    3.869773] microcode: sig=0x6fd, pf=0x1, revision=0xa1
[    3.869863] microcode: Microcode Update Driver: v2.2.
[    3.869868] IPI shorthand broadcast: enabled
[    3.869882] sched_clock: Marking stable (3866347548, 3066011)->(3871890988, -2477429)
[    3.869986] registered taskstats version 1
[    3.870592] printk: console [netcon0] enabled
[    3.870594] netconsole: network logging started
[    3.870747] Warning: unable to open an initial console.
[    3.874546] Freeing unused kernel image memory: 7064K
[    3.878436] Write protecting the kernel read-only data: 24576k
[    3.879838] Freeing unused kernel image memory: 2012K
[    3.881033] Freeing unused kernel image memory: 1736K
[    3.881103] Run /init as init process
[    3.894241] gost_generic: loading out-of-tree module taints kernel.
[    3.894526] GOST 28147-89 Cipher and GOST 34.311 hash and GOST IPSEC algorithm initialize
[    3.899795] GOST 28147-89 AVX Cipher IPSEC algorithm initialize
[    4.102425] usb 2-1: new full-speed USB device number 2 using uhci_hcd
[    4.278495] usb 2-1: New USB device found, idVendor=2341, idProduct=8036, bcdDevice= 1.00
[    4.278498] usb 2-1: New USB device strings: Mfr=1, Product=2, SerialNumber=0
[    4.278501] usb 2-1: Product: Arduino Leonardo
[    4.278503] usb 2-1: Manufacturer: Arduino LLC
[    4.281587] cdc_acm 2-1:1.0: ttyACM0: USB ACM device
[    4.286220] input: Arduino LLC Arduino Leonardo Mouse as /devices/pci0000:00/0000:00:1d.0/usb2/2-1/2-1:1.2/0003:2341:8036.0001/input/input3
[    4.286381] input: Arduino LLC Arduino Leonardo Keyboard as /devices/pci0000:00/0000:00:1d.0/usb2/2-1/2-1:1.2/0003:2341:8036.0001/input/input4
[    4.337523] hid-generic 0003:2341:8036.0001: input,hidraw0: USB HID v1.01 Mouse [Arduino LLC Arduino Leonardo] on usb-0000:00:1d.0-1/input2
[    6.908502] INFO: /dev/ttyACM0 just got plugged
[    7.456092] blkid (2414) used greatest stack depth: 14072 bytes left
[    7.499964] blkid (2421) used greatest stack depth: 14056 bytes left
[   11.617741] cryptsetup (2418) used greatest stack depth: 13800 bytes left
[   11.835977] random: fast init done
[   12.182048] EXT4-fs (dm-0): 6 orphan inodes deleted
[   12.182051] EXT4-fs (dm-0): recovery complete
[   12.214998] EXT4-fs (dm-0): mounted filesystem with ordered data mode. Opts: (null)
[   12.215281] mount (2455) used greatest stack depth: 13400 bytes left
[   16.261428] random: crng init done
[   16.846355] EXT4-fs (dm-1): recovery complete
[   16.848906] EXT4-fs (dm-1): mounted filesystem with ordered data mode. Opts: (null)
[   17.546949] LCDinfo.cgi (2498) used greatest stack depth: 12728 bytes left
[   17.659518] udevd[2508]: starting version 3.1.5
[   18.007017] e1000e 0000:01:00.0 enp1s0: renamed from eth0
[   18.013088] e1000e 0000:04:00.0 enp4s0: renamed from eth3
[   18.019655] e1000e 0000:05:00.0 enp5s0: renamed from eth4
[   18.022811] e1000e 0000:02:00.0 enp2s0: renamed from eth1
[   18.026992] e1000e 0000:03:00.0 enp3s0: renamed from eth2
[   18.031170] e1000e 0000:06:00.0 enp6s0: renamed from eth5
[   18.198424] Adding 1048572k swap on /dev/sda2.  Priority:-2 extents:1 across:1048572k
[   18.443586] EXT4-fs (sda1): mounted filesystem with ordered data mode. Opts: (null)
[   18.443598] ext4 filesystem being mounted at /boot supports timestamps until 2038 (0x7fffffff)
[   18.446466] EXT4-fs (dm-0): re-mounted. Opts: (null)
[   24.448843] EXT4-fs (dm-1): mounted filesystem with ordered data mode. Opts: (null)
[   25.136299] ip (4036) used greatest stack depth: 12336 bytes left
[   35.749007] 8021q: adding VLAN 0 to HW filter on device enp1s0
[   35.749279] ip (4684) used greatest stack depth: 12080 bytes left
[   38.125009] 8021q: adding VLAN 0 to HW filter on device enp5s0
[   40.501000] 8021q: adding VLAN 0 to HW filter on device enp6s0
[   64.380373] e1000e: enp1s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: None
[   64.380552] IPv6: ADDRCONF(NETDEV_CHANGE): enp1s0: link becomes ready
[3369869.825697] 8021q: adding VLAN 0 to HW filter on device enp2s0
[3369892.321326] 8021q: adding VLAN 0 to HW filter on device enp3s0
[3390419.308989] e1000e: enp3s0 NIC Link is Down
[3390439.592952] e1000e: enp2s0 NIC Link is Down
[3390440.634120] 8021q: adding VLAN 0 to HW filter on device enp2s0
[9326008.059330] e1000e: enp6s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: None
[9326008.059485] IPv6: ADDRCONF(NETDEV_CHANGE): enp6s0: link becomes ready
[9330617.421502] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: None
[9330617.421664] IPv6: ADDRCONF(NETDEV_CHANGE): enp2s0: link becomes ready
[9330635.443689] e1000e: enp2s0 NIC Link is Down
[9330745.431526] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: None
[9330751.414693] e1000e: enp2s0 NIC Link is Down
[9330779.184506] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: None
[9330783.532684] e1000e: enp2s0 NIC Link is Down
[9330877.021521] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: None
[9330883.992689] e1000e: enp2s0 NIC Link is Down
[9343139.871140] e1000e: enp6s0 NIC Link is Down
[12539096.753834] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: Rx/Tx
[12539149.968011] e1000e: enp2s0 NIC Link is Down
[12539153.005847] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: Rx/Tx
[12539220.051392] e1000e: enp2s0 NIC Link is Down
[12539221.115471] 8021q: adding VLAN 0 to HW filter on device enp2s0
[12539223.893857] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: Rx/Tx
[12539223.894043] IPv6: ADDRCONF(NETDEV_CHANGE): enp2s0: link becomes ready
[12539249.132017] e1000e: enp2s0 NIC Link is Down
[12539252.008841] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: Rx/Tx
[12539766.052035] e1000e: enp2s0 NIC Link is Down
[12539768.814859] e1000e: enp2s0 NIC Link is Up 1000 Mbps Full Duplex, Flow Control: Rx/Tx
[12546535.139284] e1000e: enp2s0 NIC Link is Down

  ```
