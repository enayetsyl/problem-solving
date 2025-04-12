import pyautogui
import time

# Take input for the number of rows
rows = int(input("Enter the number of rows for the pyramid: "))

print("Switch to your text editor within 5 seconds...")
time.sleep(5)  # Give user time to switch to Notepad or any text editor

# Draw the left-aligned pyramid
for i in range(1, rows + 1):
    line = '#' * i
    pyautogui.typewrite(line + '\n')
    time.sleep(0.1)  # Optional: slight delay for visibility
