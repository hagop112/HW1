#include <stdio.h>
#include <string.h>

int a(char *s1, char *s2) {
    return strstr(s1, s2) || strstr(s2, s1);  // Check if either string is a substring of the other
}

int main() {
    char s1[100], s2[100];  // Declare two strings

    scanf("%s %s", s1, s2);  // Read two strings from user input
    
    printf(a(s1, s2) ? "Substring" : "Not Substring");// Print "Substring" if one string is a substring of the other, otherwise print "Not Substring"

    return 0;  
}
