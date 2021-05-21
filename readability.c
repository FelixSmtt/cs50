#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int get_words(string text);
int get_letters(string text);
int get_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    
    float words = get_words(text);
    float letters = get_letters(text) * (100 / words);
    float sentences = get_sentences(text) * (100 / words);
    
    int index = round(0.0588 * letters - 0.296 * sentences - 15.8);
    
    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

int get_words(string text)
{
    int words = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            words++;
        }
    }
    words++;
    return words;
}

int get_letters(string text)
{
    int letters = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            letters++;
        }
        
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            letters++;
        }
    }
    return letters;
}

int get_sentences(string text)
{
    int sentences = 0;
    
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}