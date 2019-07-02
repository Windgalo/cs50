// Helper functions for music

#include <cs50.h>
#include <string.h>
#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    /*
    
    */
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    /*
    parse string into note and octave
    */
    string note_letter = strtok(note, int)
    /*
    calculate freq of note in octave
    return freq as int value in hertz back to user
    */
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (s == "")
    {
        return true;
    }
    else
    {
        return false;
    }
}
