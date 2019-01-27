# Mutex and Channel basics

### What is an atomic operation?
> *It is an operation that always runs to completion or does not run at all. It is not divisible meaning it cannot be stopped or modified in the middle. It is the fundamental building blocks for threads to work correctly.*

### What is a semaphore?
> *It is a protected integer variable that facilitate and restrict access to shared resources in a multi-processing code. It restricts the simultaneous users of a shared resource to a maximum number. A thread can request access by decreasing a semaphore value and say it has finished working by increasing the semaphore value. *

### What is a mutex?
> *It is a programming object created for giving multiple threads a share in turn for using the same resources.*

### What is the difference between a mutex and a binary semaphore?
> *A mutex only allows one thread to access the controlled resource by keeping the other threads waiting until it has finished working. On the other hand a semaphore is a signaling mechanism for allowing a number of threads to use the shared resources.*

### What is a critical section?
> *In concurrent programming where a section of the shared resources is protected to avoid erroneous behavior by concurrent access of the same resources is called critical section.*

### What is the difference between race conditions and data races?
 > *Race conditions are flaws due to timing or ordering of events that results in wrong outcomes whereas data races happens when multiple threads tries to write at the same memory location at the same time.*

### List some advantages of using message passing over lock-based synchronization primitives.
> *1.Easier to build massively parallel hardware.
   2.Explicit communication makes it simpler to understand and focuses on cost leading to improved structure.
   3.Synchronization is naturally associated with sending messages reducing the possibility of errors.
   4.Easier to use sender initiated communication which improves performance
   5.More tolerant to higher communication latencies.*

### List some advantages of using lock-based synchronization primitives over message passing.
> *1.Communication is faster compared to message passing.
   2.Ease of programming.
   3.Lower latencies.
   4.Easier to use hardware control caching.
   5.Tight coupling of program components.*
