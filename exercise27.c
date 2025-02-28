#include <stdio.h>
#include <string.h>

int a(char *s1, char *s2) {
    int c[256] = {0}, i;
    for (i = 0; s1[i] && s2[i]; i++) c[s1[i]]++, c[s2[i]]--;  // Count character frequencies
    return s1[i] || s2[i] ? 0 : !memchr(c, 1, 256);  // If lengths differ or counts don't match, not an anagram
}

int main() {
    char s1[100], s2[100];  // Declare two strings

    scanf("%s %s", s1, s2);  // Read two strings from user input

    printf(a(s1, s2) ? "Anagram" : "Not Anagram"); // Print output "Anagram" if strings are anagrams, otherwise print "Not Anagram"

    return 0;  
}
