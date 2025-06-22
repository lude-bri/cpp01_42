<!-------cpp01_Image-------->
<a name="readme-top"></a>

<p align="center"> <img src="https://capsule-render.vercel.app/api?type=venom&height=200&color=0ABAB5&text=cpp01&fontAlign=50&fontAlignY=61&animation=fadeIn&fontColor=fcf3f2&fontSize=100" /> </p> 

<!-------About-------->
## About

This module explores fundamental memory concepts in C++, such as memory allocation (stack vs heap), pointers to members, references, and control flow via switch statements. It also delves into memory hierarchy and layout, offering insight into how C++ interacts with low-level computer architecture.


# 1. Memory System and Memory Allocation

Before diving into the concepts of Stack and Heap, it’s important to first understand the broader idea of a memory system.

In general, a memory system refers to the mechanism by which information is stored, accessed, and managed. In biology, it involves processes like sensory input, short-term (or working) memory, and long-term memory, each with different purposes, such as episodic, semantic, or procedural memory. In computing, however, the memory system consists of structured storage areas that hold data and instructions for the CPU to process.

From a technical standpoint, computer memory is organized as a linear array of bytes, where each byte has a unique address and can be accessed by the CPU in a constant amount of time, in theory. In practice, modern memory systems are built as a hierarchy of storage layers, each with different capacities, costs, and access speeds. This structure ensures a balance between speed and resource efficiency.

# 2. Memory Hierarchy

One of the key factors behind the rapid evolution of computing is the advancement in memory and storage technologies.

The concept of **memory hierarchy** is central to **optimizing performance and cost-efficiency**. Rather than relying on a single type of memory, systems are designed with multiple layers of memory, each with distinct characteristics in terms of speed, size, and cost per byte.

In computer systems, memory is organized in layers based on access speed, cost, and proximity to the CPU. These layers range from ultra-fast CPU registers to large-capacity but slower external storage. Let’s explore each one in detail:

## 2.1. Types of Memory Hierarchy

### 1. External Memory ( or Secondary Stage )
Also known as secondary memory, this is the slowest type of memory but offers massive storage capacity. It is non-volatile, meaning data is preserved even when the computer is powered off.

Examples:

* Hard Disk Drives (HDDs)
* Solid State Drives (SSDs)
* USB flash drives
* Optical disks (CD/DVD)

**Purpose**: Long-term storage of files, operating systems, and applications.
> 💾 Slower access but crucial for data persistence

### 2. Internal Memory ( or Primary Stage )
This refers to memory that is directly accessible by the CPU for running programs. It’s faster than external memory but more limited in size and typically volatile.

It includes:
* Main Memory (RAM)
* Cache Memory
* Registers
**Purpose**: Holds data and instructions currently being used or processed by the CPU.

### 3. CPU Register
Registers are the fastest and smallest memory units in a computer, located inside the CPU itself. They hold data temporarily during execution of instructions.

Examples:

* Program Counter (PC)
* Instruction Register (IR)
* Accumulators
* General-purpose registers
**Purpose**: Immediate data access for arithmetic/logical operations.

> ⚡ Access time: 1 CPU cycle or less

### 4. Cache Memory
Cache is a small, very fast memory located either inside the CPU or close to it. It stores copies of frequently used data from main memory to reduce access time.

Levels of cache:

* L1 (Level 1): Smallest and fastest, located inside the CPU core.
* L2 (Level 2): Larger but slightly slower, may be shared among cores.
* L3 (Level 3): Even larger and slower, shared across the entire CPU.
**Purpose**: Bridge the speed gap between CPU and RAM, reducing latency.

### 5. Main Memory
Main memory, or Random Access Memory (RAM), is the central workspace where programs run. It is volatile and temporarily holds data and code while the system is powered on.

There are two main types:

#### 5.1. Static RAM (SRAM)
* Faster and more expensive
* Used primarily in cache memory
* Doesn’t need to be refreshed

#### 5.2. Dynamic RAM (DRAM)

* Slower and cheaper
* Used for main system memory (RAM)
* Requires constant refreshing to maintain data

### 6. Auxiliaire Memory
This term is sometimes used interchangeably with external memory, but it can also refer more broadly to any non-primary storage that supports the system.

Examples:

* External backup drives
* Cloud storage
* Tape drives
**Purpose**: Long-term storage, backups, and offloading less-used data.



One of the core concepts in memory system is memory allocation. A way of using this system.

**Memory allocation** in C++ defines how and where objects live in a program. The two primary regions used in runtime memory management are: **Stack** and **Heap**

## 1.1. Stack vs Heap

The stack provides automatic and very fast memory management, but it is limited in size and cannot handle large, complex data structures. The heap, while offering greater flexibility and larger memory allocation, requires garbage collection, which introduces some performance overhead

**Stack**:
* Automatically managed
* Fast allocation/deallocation
* Scope-bound
* Small and limited
* Function calls, local variables

**Heap**:
* Dynamically managed via new / delete
* Slower but flexible
* Must be explicitly freed
* Use cases: dynamic arrays, object lifetimes beyond scope

  
## 3. Memory Layout and Memory Management
When we write a program in a text file and execute it, the Operating System (OS) creates a process to run that program. A process is essentially an instance of a running program, and the OS is responsible for allocating and managing memory for it.

The memory layout refers to how memory is structured and organized within a single process in main memory (RAM). Each process is given its own isolated memory space, which is divided into distinct segments. These segments serve different purposes and are managed separately by the OS and the runtime environment.

```pgsql
+---------------------------+
|        Stack             | ← grows downward
+---------------------------+
|        Heap              | ← grows upward
+---------------------------+
|   Uninitialized Data     | (.bss)
+---------------------------+
|   Initialized Data       | (.data)
+---------------------------+
|        Text              | (Code Segment)
+---------------------------+
```
### 1. Text Segment
* Contains the actual compiled machine code (instructions).
* Read-only and executable to prevent accidental modification.
* Shared between processes using the same program.

### 2. Data Segment
* Stores global and static variables that are explicitly initialized.
* For example: `int x = 42`;
  
### 3. BSS Segment (Uninitialized Data)
* BStores global and static variables that are declared but not initialized.
* For example: `static int y`;
* Initialized to zero at runtime.
  
### 4. Heap
* Used for dynamic memory allocation (new, malloc).
* Grows upwards in memory as more memory is requested.
* Managed manually by the programmer; failure to free memory leads to memory leaks.
  
### 5. Stack
* Used for local variables, function parameters, and return addresses.
* Grows downward (opposite to the heap).
* Managed automatically — memory is freed when a function call ends.
  
> 🧠 Proper understanding of memory layout is essential for avoiding issues like segmentation faults, memory leaks, buffer overflows, and undefined behavior.

## 3.1. Memory Management Strategies 

C++ gives you low-level control over memory, but with that comes responsibility. There are three main approaches:

**1. Static Allocation**
* Fixed memory assigned at compile time
* **Example**: `global/static variables`

**2. Stack Allocation**
* Memory allocated when a function is called, automatically freed
* Fast and safe
* **Example**: local variables
  
**3. Dynamic Allocation**
* Memory manually allocated at runtime (`new` / `malloc`)
* Must be manually freed (`delete` / `free`)
* Allows flexible use of memory, but error-prone

