

import pyttsx3


alexa = pyttsx3.init()

text = input("Enter the text :  ")

alexa.say(text)
alexa.runAndWait()


