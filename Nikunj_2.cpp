#include <stdio.h>
#include <string.h>

int main() {
    char input[100];
    int i = 0;
    
    printf("Hello, I am your basic assistant. How can I assist you today?\n");
    
    while (1) {
        printf("> ");
        fgets(input, sizeof(input), stdin);
        
        // Convert the input to lowercase for easier comparison
        for (; i < strlen(input); i++) {
            input[i] = tolower(input[i]);
        }
        
        // Check for specific commands and provide responses
        if (strstr(input, "hello")) {
            printf("Hello! How can I help you?\n");
        } else if (strstr(input, "time")) {
            // You can implement a time function here
            printf("I'm sorry, I can't tell you the time right now.\n");
        } else if (strstr(input, "weather")) {
            // You can implement a weather function here
            printf("I'm sorry, I can't provide weather information at the moment.\n");
        } else if (strstr(input, "calculate")) {
            // You can implement a calculator function here
            printf("I'm not a calculator, but you can use a calculator app on your device.\n");
        } else if (strstr(input, "who are you")) {
            printf("I am a basic text-based assistant. My purpose is to assist you with simple tasks.\n");
        } else if (strstr(input, "tell me a joke")) {
            printf("Why did the computer catch a cold? It had too many windows open!\n");
        } else if (strstr(input, "how are you")) {
            printf("I'm just a program, so I don't have feelings, but I'm here to help!\n");
        } else if (strstr(input, "thanks") || strstr(input, "thank you")) {
            printf("You're welcome! If you have more questions, feel free to ask.\n");
        } else if (strstr(input, "search")) {
            printf("I'm not currently able to browse the web, but you can use a search engine for that.\n");
        } else if (strstr(input, "help")) {
            printf("You can ask me about the time, weather, calculations, jokes, and more. Just type your question or command!\n");
        } else if (strstr(input, "exit") || strstr(input, "quit")) {
            printf("Goodbye! Have a great day!\n");
            break;
        } else {
            printf("I'm not sure how to respond to that.\n");
        }
    }
    
    return 0;
}

