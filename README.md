# 🚀 ArrayStack Implementation in C++
[![LICENSE](https://img.shields.io/badge/LICENSE-important?style=flat-square&color=FF6600)](./LICENSE.txt)
[![Windows](https://img.shields.io/badge/Windows-0078D6?style=flat-square&logo=windows&logoColor=white)]()
[![Linux](https://img.shields.io/badge/Linux-FCC624?style=flat-square&logo=linux&logoColor=black)]()
[![macOS](https://img.shields.io/badge/macOS-000000?style=flat-square&logo=apple&logoColor=white)]()

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
```cpp
struct Stack 
{
    int Data[MAX_STACK_SIZE]{};  // 🧠 Smart initialization
    int top = -1;                // 📍 Stack pointer
    
    void Push(int value);        // ⬆️ O(1) insertion
    int Pop();                   // ⬇️ O(1) removal
};
```
# 🚀 Quick Start

 + Simple! Dobble click the `StackWithArray.exe` file. 😀

   [![start](https://i.imgur.com/LfA3E0z.png)](https://github.com/1wintab/StackWithArray/raw/refs/heads/master/StackWithArray.exe)

## 🟢 Stack Operations:

1) 📥 Push element  
2) 📤 Pop element  
3) 👀 View stack  
4) 📏 Check size  
5) 🧹 Clear stack  
6) 🔄 Palindrome check  
7) 🚪 Exit

## 📂 Project Structure

<pre>
📦&nbsp;StackWithArray
├──&nbsp;📜&nbsp;main.cpp&nbsp;&nbsp;&nbsp;&nbsp;#&nbsp;Core&nbsp;logic
├──&nbsp;📄&nbsp;README.md&nbsp;&nbsp;&nbsp;#&nbsp;Documentation
└──&nbsp;📄&nbsp;LICENSE&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;#&nbsp;MIT&nbsp;License
</pre>


## 🌟 Why This Stands Out
 * 🧼 Clean code with consistent formatting
 * 📝 Well-documented operations
 * 🔄 Palindrome check shows practical application
 * 🎨 User-friendly console interface

## 📜 License
This project is licensed under the Apache License 2.0 - see the [LICENSE](LICENSE.txt) file for details.
