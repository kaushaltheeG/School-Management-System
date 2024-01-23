#ifndef _utils_h
#define _utils_h

void print(const char *msg, ...);
void clearterminal();
void clearTerminalLines(int numLines);
void inlineInput(const char *fieldName, const char *format, char *fieldValue);

#endif