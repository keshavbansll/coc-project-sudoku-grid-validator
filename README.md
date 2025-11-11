# Sudoku Grid Validator in C

**Author:** Keshav Bansal  
**Branch:** B.Tech CSE  
**Section:** D  
**Roll No:** CS-217

---

## Project Overview

This project is a **Sudoku Grid Validator** written entirely in the **C programming language**, using only basic programming concepts like **2D arrays**, **nested loops**, **functions**, and **conditional statements**.

The goal of this program is to take a **completed Sudoku grid** and determine whether it represents a **valid Sudoku solution** or not.

---

## What is Sudoku?

Sudoku is a classic **9x9 logic-based puzzle**.  
The puzzle grid is divided into:

- **9 rows**
- **9 columns**
- **9 subgrids (3×3 boxes)**

A valid Sudoku solution must satisfy **three key rules**:

1. **Every row** must contain all numbers **1–9** exactly once.
2. **Every column** must contain all numbers **1–9** exactly once.
3. **Every 3×3 subgrid (box)** must contain all numbers **1–9** exactly once.

If **any** of these three rules is violated, the Sudoku solution is **INVALID**.

---

## How to Run the Program

1. Compile the code - **gcc main.c -o sudoku**
2. Run the program - **./sudoku.exe**

## Observe the code

- Expected Output - **VALID**
- Try modifying a number in the sudoku grid to test **INVALID** cases as well.
