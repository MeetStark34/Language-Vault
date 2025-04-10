# 📊 Sorting Visualizer (C++)

A simple terminal-based visualizer for Bubble Sort written in C++.  
Part of the **Language Vault** multi-language portfolio.

---

## 🚀 Features

- Takes user input for sorting
- Visually shows the bubble sort steps
- Highlights the pair being compared
- Delays between steps for clarity
- Uses only standard libraries

---

## 📂 Location

```
language-vault/
└── cpp/
    └── sorting_visualizer/
        ├── main.cpp
        └── README.md
```

---

## ▶️ How to Run

1. Make sure you have a C++ compiler like g++ installed.

2. Compile and run:

```bash
cd cpp/sorting_visualizer
g++ main.cpp -o sorter
./sorter
```

---

## 📝 Example

```
📊 Welcome to Sorting Visualizer (C++)

Enter number of elements to sort: 5
Enter 5 numbers separated by spaces:
9 4 6 2 1

  9   [ 4]  [ 6]   2   1  
  4    6   [ 6]  [ 2]   1  
  4    2    6   [ 6]  [ 1]  
...

✅ Sorting complete!

  1    2    4    6    9  
```

---

## 🧠 Author Notes

This program is great for learning:

- Bubble Sort algorithm
- Terminal formatting
- `vector`, `sleep`, `setw`, `highlighting`

No graphics or third-party libraries needed!
