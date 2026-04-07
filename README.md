# ⚙️ RTOS Priority Inversion Problem (FreeRTOS Concept)

## 📌 Overview

This project demonstrates the **Priority Inversion Problem** in Real-Time Operating Systems (RTOS) using a task-based simulation.

It showcases how a **low-priority task can block a high-priority task** when accessing shared resources, and how scheduling affects system behavior.

---

## 🧠 What is Priority Inversion?

Priority inversion occurs when:

* A **high-priority task** is waiting for a resource
* A **low-priority task** holds that resource
* A **medium-priority task** preempts the low-priority task

👉 This delays the high-priority task unexpectedly.

---

## ⚙️ Features

* Simulation of multiple RTOS tasks
* Demonstrates priority inversion scenario
* Task scheduling behavior analysis
* Modular task-based implementation

---

## 📂 Project Structure

* `main.c` → Entry point of the program
* `producer_task.c` → Simulates producer task
* `consumer_task.c` → Simulates consumer task
* `medium_task.c` → Medium priority interfering task
* `monitor_task.c` → Observes system behavior
* `FreeRTOSConfig.h` → RTOS configuration settings
* `Makefile` → Build configuration

---

## 🧩 System Behavior

The system includes:

* 🟢 High Priority Task
* 🟡 Medium Priority Task
* 🔴 Low Priority Task

### Scenario:

1. Low-priority task acquires a shared resource
2. High-priority task requests the same resource → gets blocked
3. Medium-priority task starts running
4. High-priority task is delayed → **Priority Inversion occurs**

---

## 🚀 How to Run

### 1️⃣ Compile the Project

```bash
make
```

### 2️⃣ Run the Program

```bash
./output
```

*(Executable name may vary based on Makefile)*

---

## 📊 Output

* Console logs showing task execution
* Visualization of blocking behavior
* Demonstration of scheduling issues

---

## 🎯 Applications

* Real-Time Embedded Systems
* OS Scheduling Analysis
* Automotive Systems (critical timing)
* Aerospace & Industrial Control Systems

---

## 💡 Key Learning

* Task prioritization in RTOS
* Scheduling anomalies
* Importance of synchronization mechanisms
* Need for **Priority Inheritance Protocol**

---

## 🔮 Future Improvements

* Implement Priority Inheritance solution
* Add FreeRTOS kernel integration
* Visual timeline (Gantt chart)
* Hardware implementation (ESP32 / ARM)

---

## 👩‍💻 Author

Varshini Endrakanti
B.Tech ECE

---

## ⭐ Note

This project focuses on concept demonstration and may not include full RTOS kernel integration.
