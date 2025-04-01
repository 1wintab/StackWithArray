# 🚀 ArrayStack Implementation in C++

[![License](https://img.shields.io/badge/License-MIT-blue.svg?style=flat)](LICENSE)
[![C++17](https://img.shields.io/badge/C++-17-00599C?logo=cplusplus)](https://en.cppreference.com/)
[![Platform](https://img.shields.io/badge/Windows-Linux-macOS-888888)]()

✨ **A clean, efficient array-based stack implementation** with interactive CLI  

## 🎯 Key Features
| Feature          | Description                          |
|------------------|--------------------------------------|
| 🏗️ **Array Stack** | Fixed-size (100 elements) implementation |
| ⚡ **O(1) Operations** | Constant-time Push/Pop |
| 🛡️ **Error Handling** | Full stack warnings and empty stack checks |
| 📊 **Visualization** | Clear stack content display |
| 🌐 **Cross-Platform** | Works on Windows/Linux/macOS |
| 🔍 **Bonus** | Includes palindrome checker demo |

## 🛠️ Tech Stack

struct Stack {
    int Data[MAX_STACK_SIZE]{};  // 🧠 Smart initialization
    int top = -1;                // 📍 Stack pointer
    
    void Push(int value);        // ⬆️ O(1) insertion
    int Pop();                   // ⬇️ O(1) removal
};

🚀 Quick Start

# Compile
g++ main.cpp -o stack_app -Wall -Wextra

# Run
./stack_app

🟢 Stack Operations:

1) 📥 Push element  
2) 📤 Pop element  
3) 👀 View stack  
4) 📏 Check size  
5) 🧹 Clear stack  
6) 🔄 Palindrome check  
7) 🚪 Exit

📂 Project Structure

📦 ArrayStack
├── 📜 main.cpp         # Core logic
├── 📄 README.md        # You're here!
└── 📄 LICENSE          # MIT License

🌟 Why This Stands Out
 * 🧼 Clean code with consistent formatting
 * 📝 Well-documented operations
 * 🔄 Palindrome check shows practical application
 * 🎨 User-friendly console interface

📜 License
MIT © 2023 - See LICENSE for details.
