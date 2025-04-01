#include <Windows.h>
#include <iostream>
#include <string>
#include <cstdlib>

const int MAX_STACK_SIZE = 100;

struct Stack
{
	int Data[MAX_STACK_SIZE]{};
	int top = -1;

	bool IsEmpty() const
	{
		return top == -1;
	}

	bool IsFull() const
	{
		return top == MAX_STACK_SIZE - 1;
	}

	void Push()
	{
		std::cout << "==================================================\n";
		std::cout << "> Enter the value you want to add to the stack: ";
		int value;
		std::cin >> value;
		std::cout << "==================================================\n";
		if (IsFull() == false)
		{
			Data[++top] = value;
			std::cout << "+ Element " << "'" << value << "'" << " added!\n";
			std::cout << "==================================================\n";
		}
		else
		{
			std::cout << "\n==================================================";
			std::cout << "\n            > Error! Stack overflow :(";
			std::cout << "\n==================================================\n";
		}
	}

	int Pop()
	{
		if (IsEmpty() == false)
		{
			int poppedValue = Data[top--];
			std::cout << "======================================================\n";
			std::cout << "- Element " << "'" << poppedValue << "'" << " removed!\n";
			std::cout << "======================================================\n";
			return poppedValue;
		}
		else
		{
			std::cout << "===================================================\n";
			std::cout << "             Error! Strack is empty :(             \n";
			std::cout << "===================================================\n";
		}

	}

	void ShowAllStack()
	{
		if (IsEmpty() == false)
		{
			std::cout << "===================================================\n";
			std::cout << "                   Stack elements:                 \n";
			std::cout << "===================================================\n\n";
			for (size_t i = 0; i <= top; i++)
			{
				std::cout << "Element #" << (top - i + 1) << ": " << Data[top - i] << std::endl;
			}
			std::cout << "\n===================================================\n";
		}
		else
		{
			std::cout << "===================================================\n";
			std::cout << "        Error! Stack contains no elements :(       \n";
			std::cout << "===================================================\n";
		}
	}

	void SizeStack()
	{
		std::cout << "===================================================\n";
		std::cout << " Number of elements in stack: " << top + 1 << "\n";
		std::cout << "===================================================\n";
	}

	void ClearStack()
	{
		if (IsEmpty())
		{
			std::cout << "============================================================\n";
			std::cout << "           Cannot clear! Stack is already empty :(          \n";
			std::cout << "============================================================\n";
		}
		else
		{
			char decision;
			do
			{
				std::cout << "============================================================\n";
				std::cout << "           Are you sure you want to clear the stack?        \n";
				std::cout << "============================================================\n";
				std::cout << "Yes/No (y/n): ";
				std::cin >> decision;
			} while (!(decision == 'y' || decision == 'n'));
			if (decision == 'y')
			{
				for (size_t i = 0; i < MAX_STACK_SIZE; i++) // Reset all array elements
				{
					Data[i] = 0;
				}
				top = -1;  // Reset top pointer
				std::cout << "============================================================\n";
				std::cout << "                 Stack cleared successfully!                \n";
				std::cout << "============================================================\n";
			}
			else
				return;
		}
	}

	void Shutdown()
	{
		std::cout << "========================================================\n";
		std::cout << "               Shutting down the program...             \n";
		std::cout << "========================================================\n";
		exit(0);
	}

	void ClearConsole()
	{
#ifdef _WIN32
		system("cls");
#else
		system("clear"); // For Linux/Mac (cross-platform support)
#endif
	}

	void WaitForEnter()
	{
		std::cout << "\nPress Enter to continue...";
		std::cin.clear(); // Clear potential errors
		std::cin.ignore(1000, '\n');
		std::cin.get();
	}

	void StudTask()
	{
		int minOptions = 1;
		int maxOptions = 3;
		int number, value;

		do
		{
			ClearConsole();

			std::cout << "========================================================\n";
			std::cout << "                    Individual Task                     \n";
			std::cout << "========================================================\n";
			std::cout << "1) Task description.                                    \n";
			std::cout << "2) Check if a string is a palindrome.                   \n";
			std::cout << "3) Return to main menu.                                 \n";
			std::cout << "========================================================\n\n";
			std::cout << "Enter option number: ";
			std::cin >> number;
			std::cout << "\n";

			ClearConsole();

			switch (number)
			{
			case 1:
				aboutStudTask();
				break;
			case 2:
				IsPalindrome();
				break;
			case 3:
				MenuStack();
				break;
			default:
				std::cout << "============================================================\n";
				std::cout << "               Invalid option! Please try again.            \n";
				std::cout << "============================================================\n";
				WaitForEnter();
			}
			WaitForEnter();
		} while (true);
	}

	void aboutStudTask()
	{
		std::cout << "==========================================================\n";
		std::cout << "                      Variant 1\n";
		std::cout << "==========================================================\n";
		std::cout << "> Develop a program to determine if a string is           \n";
		std::cout << "  a palindrome.                                           \n";
		std::cout << "> Use a stack.                                            \n";
		std::cout << "> A palindrome is a word/phrase that reads the same       \n";
		std::cout << "  backward as forward (ignoring spaces/punctuation).      \n";
		std::cout << "==========================================================\n";
	}

	bool IsIgnoredChar(char symbol) // Characters to ignore during check (spaces + punctuation)
	{
		const char ignored[] = { ' ', '.', ',', '!', '?', ':', ';', '"', '\'', '-',
								  '(', ')', '{', '}', '[', ']', '<', '>', '\0' };

		for (size_t i = 0; ignored[i] != '\0'; i++)
		{
			if (symbol == ignored[i]) // If character matches ignored list
				return true;
		}
		return false; // В інакшому випадку
	}

	char toLower(char c) // Convert uppercase to lowercase
	{
		if (c >= 'A' && c <= 'Z')
			return c + ('a' - 'A'); // Convert Latin letters

		if (c >= 'А' && c <= 'Я')
			return c + ('а' - 'А'); // Convert Cyrillic letters
	}

	void IsPalindrome()
	{
		std::cout << "==========================================================\n";
		std::cout << "            Check if a string is a palindrome             \n";
		std::cout << "==========================================================\n";

		char input[MAX_STACK_SIZE]; // Stores raw input (with symbols)
		char stack[MAX_STACK_SIZE]; // Stores cleaned characters (no symbols)
		int top = -1;               // Stack top index (initially empty)
		int clean_len = 0;          // Counter for valid characters (no ignored)

		std::cout << "Enter a string (up to " << MAX_STACK_SIZE - 1 << " characters):\n";
		std::cout << "String: ";

		std::cin.clear();
		std::cin.ignore(1000, '\n'); // Clear input buffer

		// Read characters one by one

		char c;

		// Read input characters until:
		// 1. std::cin.get(c) - successfully read a character (not EOF or error)
		// 2. c != '\n' - character is not newline (Enter not pressed)
		// 3. clean_len < MAX_STACK_SIZE - 1 - haven't exceeded array size (leave space for '\0')

		while (std::cin.get(c) && c != '\n' && clean_len < MAX_STACK_SIZE - 1)
		{
			if (!IsIgnoredChar(c)) // // Read characters one by one
			{
				input[clean_len] = toLower(c); // Add to input array
				stack[++top] = toLower(c);     // Push to stack
				clean_len++;                   // Increment valid character count
			}
		}
		input[clean_len] = '\0'; // Null-terminate string

		bool is_palindrome = true;
		int temp_top = top;        // Temporary index to preserve 'top'

		for (int i = 0; i < clean_len / 2; i++)
		{
			if (input[i] != stack[temp_top--]) // Compare start vs end (via stack)
			{
				is_palindrome = false;         // If any mismatch → not palindrome
			}
		}

		if (clean_len == 0)
		{
			std::cout << "============================================================\n";
			std::cout << "         You didn't enter any text! Please try again.       \n";
			std::cout << "============================================================\n";
		}
		else
		{
			std::cout << "\nCleaned string: " << input;
			std::cout << "\nResult: " << (is_palindrome ? "It's a palindrome  :)\n" : "Not a palindrome :(\n");
		}

	}

	void MenuStack()
	{
		int number, value;
		int minOptions = 1;
		int maxOptions = 7;

		do
		{
			ClearConsole();

			std::cout << "========================================================\n";
			std::cout << "               Stack Operations Menu (1-7):             \n";
			std::cout << "========================================================\n";
			std::cout << " 1. Push element to stack.                              \n";
			std::cout << " 2. Pop element from stack.                             \n";
			std::cout << " 3. Display all stack elements.                         \n";
			std::cout << " 4. Show stack size.                                    \n";
			std::cout << " 5. Clear stack.                                        \n";
			std::cout << " 6. Individual task (palindrome checker).               \n\n";

			std::cout << " 7. Exit program.                                       \n";
			std::cout << "========================================================\n\n";

			std::cout << "Enter option number: ";
			std::cin >> number;
			std::cout << "\n";

			ClearConsole();

			switch (number)
			{
			case 1:
				Push();
				break;
			case 2:
				Pop();
				break;
			case 3:
				ShowAllStack();
				break;
			case 4:
				SizeStack();
				break;
			case 5:
				ClearStack();
				break;
			case 6:
				StudTask();
				break;
			case 7:
				Shutdown();
				break;
			default:
				std::cout << "=================================================\n";
				std::cout << "         Invalid option! Please try again.       \n";
				std::cout << "=================================================\n";
				WaitForEnter();
			}

			WaitForEnter();

		} while (true);
	}
};

int main()
{
	Stack stack1;
	stack1.MenuStack();

	return 0;
}