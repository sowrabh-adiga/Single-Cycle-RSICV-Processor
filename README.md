# Single-Cycle-RSICV-Processor
Basic Single cycle RISC-V processor implementation

I started with built basic blocks like ALU, control logic. mem block, registers and implemented all imporatant types of instructions one by one.

Simulation is done with opensource tool , Verilator, with CocoTB python library for test benches. The waveforms were viewed and confirmed with GTKwave opensource tool.

utype instructions implementation is work in progress. `store` folder has recent complete verified implementation.

Special thanks to [0BAB1](https://github.com/0BAB1) for the detailed instructions for RISCV processor implementation. The work on this repo is heavily inspired by [Holy Core single_cycle_edition](https://github.com/0BAB1/HOLY_CORE_COURSE/blob/master/0_single_cycle_edition/single_cycle_edition.md#83--implementing-xori), it helped me navigate the testbenches well.
