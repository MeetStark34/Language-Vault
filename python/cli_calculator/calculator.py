# calculator.py

def add(x, y):
    return x + y

def subtract(x, y):
    return x - y

def multiply(x, y):
    return x * y

def divide(x, y):
    if y == 0:
        return "❌ Cannot divide by zero!"
    return x / y

def main():
    print("\n🧮 Welcome to CLI Calculator\n")

    while True:
        print("Select Operation:")
        print("1️⃣  Add")
        print("2️⃣  Subtract")
        print("3️⃣  Multiply")
        print("4️⃣  Divide")
        print("5️⃣  Exit\n")

        choice = input("Enter choice (1–5): ").strip()

        if choice == "5":
            print("\n👋 Goodbye!\n")
            break

        if choice not in ["1", "2", "3", "4"]:
            print("❗ Invalid choice. Try again.\n")
            continue

        try:
            num1 = float(input("Enter first number: "))
            num2 = float(input("Enter second number: "))
        except ValueError:
            print("❗ Invalid number. Please enter numeric values.\n")
            continue

        if choice == "1":
            result = add(num1, num2)
        elif choice == "2":
            result = subtract(num1, num2)
        elif choice == "3":
            result = multiply(num1, num2)
        elif choice == "4":
            result = divide(num1, num2)

        print(f"✅ Result: {result}\n")

if __name__ == "__main__":
    main()
