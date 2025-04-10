import java.util.Scanner;

public class PasswordChecker {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.println("\n🔐 Welcome to Password Strength Checker (Java)\n");

        System.out.print("Enter your password: ");
        String password = scanner.nextLine();

        System.out.println("\n📋 Checking password rules:\n");

        boolean length = password.length() >= 8;
        boolean upper = password.matches(".*[A-Z].*");
        boolean lower = password.matches(".*[a-z].*");
        boolean digit = password.matches(".*\\d.*");
        boolean symbol = password.matches(".*[!@#$%^&*()_+=|<>?{}\\[\\]~-].*");

        System.out.println("• Minimum 8 characters      : " + (length ? "✅ Passed" : "❌ Failed"));
        System.out.println("• At least one uppercase    : " + (upper ? "✅ Passed" : "❌ Failed"));
        System.out.println("• At least one lowercase    : " + (lower ? "✅ Passed" : "❌ Failed"));
        System.out.println("• At least one number       : " + (digit ? "✅ Passed" : "❌ Failed"));
        System.out.println("• At least one symbol       : " + (symbol ? "✅ Passed" : "❌ Failed"));

        if (length && upper && lower && digit && symbol) {
            System.out.println("\n🎉 Strong password!");
        } else {
            System.out.println("\n⚠️  Password does not meet all criteria.");
        }

        scanner.close();
    }
}