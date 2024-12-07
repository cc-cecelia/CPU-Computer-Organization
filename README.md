# MIPS 5-Stage Pipeline CPU

This project implements a MIPS 5-stage pipeline CPU, supporting nearly 40 instructions. The pipeline includes support for forwarding, interrupts, and exceptions, enabling efficient instruction execution and robust error handling.

## Features

- **MIPS 5-Stage Pipeline**: The CPU uses a 5-stage pipeline, including Fetch, Decode, Execute, Memory, and Write-back stages.
- **Support for Nearly 40 Instructions**: The CPU supports a wide range of MIPS instructions, providing versatility for different applications.
- **Forwarding**: The pipeline supports forwarding to handle data hazards efficiently, minimizing the need for stalls.
- **Interrupts and Exceptions**: The CPU includes robust support for handling interrupts and exceptions, ensuring proper error handling and system responsiveness.
  
## Requirements

- **ISE Design Suite 14.7**: The project is designed to be opened and synthesized using Xilinx ISE Design Suite 14.7. Ensure that you have the correct version installed to open and run the project.
