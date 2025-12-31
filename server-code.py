import socket
import pyautogui
import time

pyautogui.FAILSAFE = False
sock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
sock.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
sock.bind(("0.0.0.0", 8888))

print("Receiver Ready")

last_zoom_time = 0
ZOOM_INTERVAL = 0.05 

while True:
    data, addr = sock.recvfrom(1024)
    gesture = data.decode().strip()
    now = time.time()

    if gesture == "UP":
        pyautogui.press('up')
    elif gesture == "DOWN":
        pyautogui.press('down')
    elif gesture == "LEFT":
        pyautogui.press('right')
    elif gesture == "RIGHT":
        pyautogui.press('left')
    elif gesture == "FRONT":
        if now - last_zoom_time > ZOOM_INTERVAL:
            pyautogui.hotkey('ctrl', '=')
            last_zoom_time = now
    elif gesture == "BACK":
        if now - last_zoom_time > ZOOM_INTERVAL:
            pyautogui.hotkey('ctrl', '-')
            last_zoom_time = now
    elif gesture == "slidestart":
        pyautogui.hotkey('shift', 'f5')
    elif gesture == "slideend":
        pyautogui.press('esc')
