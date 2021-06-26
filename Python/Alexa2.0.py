import speech_recognition as sr
import pyttsx3
import datetime
import pywhatkit
import wikipedia


listener = sr.Recognizer()
engine = pyttsx3.init()
voices = engine.getProperty('voices')
engine.setProperty('voice', voices[1].id)


def talk(text):
    engine.say(text)
    engine.runAndWait()


def take_command():
    try:
        with sr.Microphone() as source:
            print('listening...')
            voice = listener.listen(source)
            command = listener.recognize_google(voice)
            command = command.lower()
            if 'alexa' in command:
                command = command.replace('alexa', '')
                print(command)
    except:
        pass
    return command


def run_alexa():
    command = take_command()

    if 'time' in command:
        time = datetime.datetime.now().strftime('%I:%M %p')
        talk('Current time is ' + time)
    elif 'play' in command:
        song = command.replace('play', '')
        talk('playing the song')
        pywhatkit.playonyt(song)
    elif 'tell me about' in command:
        info = command.replace('tell me about', '')
        word = wikipedia.summary(info, 2)
        talk(word)
    elif 'date' in command:
        talk('Sorry bhi! i have a boyfriend')
    elif 'facebook' in command:
        pywhatkit.search('https://www.facebook.com/sumonta.mridul/')


talk('Hi Sumonta ! how can i help you?')
run_alexa()
