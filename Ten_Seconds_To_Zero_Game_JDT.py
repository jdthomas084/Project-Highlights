# Ten Seconds To Zero!
# By Joshua Douglas Thomas
#
# GR Student at Wilmington University
# Creation Date: October 17, 2026
# Libraries Used: PyGame, PyGame Widgets, PyGame Helpers, etc.

# joshuad_thomas@comcast.net

import pygame
import sys
import pygwidgets
import pyghelpers

# 2 - Define constants
WINDOW_WIDTH = 640
WINDOW_HEIGHT = 240
FRAMES_PER_SECOND = 30
WHITE = (255, 255, 255)
TIMER_LENGTH = 10  # seconds
lastSecondShown = -1

# 3 - Initialize the world
pygame.init()
window = pygame.display.set_mode((WINDOW_WIDTH, WINDOW_HEIGHT))
clock = pygame.time.Clock()

# 5 - Initialize variables
headerMessage = pygwidgets.DisplayText(
    window, (0, 50),
    f'Click START To Begin A {TIMER_LENGTH}-Second Countdown:',
    fontSize=36, justified='center', width=WINDOW_WIDTH
)

startButton = pygwidgets.TextButton(window, (180, 100), 'START')
clickMeButton = pygwidgets.TextButton(window, (320, 100), 'CLICK ME')

timerMessage = pygwidgets.DisplayText(
    window, (0, 160), '',
    fontSize=36, justified='center', width=WINDOW_WIDTH
)
timerMessage.hide()

oTimer = pyghelpers.Timer(TIMER_LENGTH)

# 6 - Loop forever
running = True
while running:

    # 7 - Check for and handle events
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

        if startButton.handleEvent(event):
            oTimer.start()
            startButton.disable()
            clickMeButton.enable()
            timerMessage.show()
            lastSecondShown = -1
            print('Starting timer')

        if clickMeButton.handleEvent(event):
            clickMeButton.disable()
            remaining = TIMER_LENGTH - oTimer.getTime()
            print(f"Approximately {remaining:.3f} Seconds remaining!")

    # 8 - Per-frame actions
    timerDone = oTimer.update()

    if oTimer.running:
        elapsed = int(oTimer.getTime())
        secondsLeft = TIMER_LENGTH - elapsed

        if secondsLeft != lastSecondShown:
            lastSecondShown = secondsLeft
            timerMessage.setValue(f'Time left: {secondsLeft} seconds')

    else:
        if timerDone:
            startButton.enable()
            clickMeButton.enable()
            timerMessage.hide()
            print('Timer ended')

    # 9 - Clear the screen
    window.fill(WHITE)

    # 10 - Draw all screen elements
    headerMessage.draw()
    startButton.draw()
    clickMeButton.draw()
    timerMessage.draw()

    # 11 - Update the screen
    pygame.display.update()

    # 12 - Slow things down a bit
    clock.tick(FRAMES_PER_SECOND)

pygame.quit()
sys.exit()
