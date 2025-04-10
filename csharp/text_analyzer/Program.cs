using System;

namespace TextAnalyzer
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("\n📝 Welcome to Text Analyzer (C#)\n");

            Console.WriteLine("Please enter your text below:\n");
            string input = Console.ReadLine();

            int wordCount = CountWords(input);
            int charCount = input.Length;
            int sentenceCount = CountSentences(input);

            Console.WriteLine("\n📊 Text Analysis Results:");
            Console.WriteLine($"- Total Characters: {charCount}");
            Console.WriteLine($"- Total Words     : {wordCount}");
            Console.WriteLine($"- Total Sentences : {sentenceCount}");

            Console.WriteLine("\n✅ Done. Press any key to exit...");
            Console.ReadKey();
        }

        static int CountWords(string text)
        {
            if (string.IsNullOrWhiteSpace(text)) return 0;
            string[] words = text.Split(' ', StringSplitOptions.RemoveEmptyEntries);
            return words.Length;
        }

        static int CountSentences(string text)
        {
            if (string.IsNullOrWhiteSpace(text)) return 0;
            char[] sentenceEndings = { '.', '!', '?' };
            int count = 0;

            foreach (char c in text)
            {
                if (Array.Exists(sentenceEndings, e => e == c))
                    count++;
            }

            return count;
        }
    }
}