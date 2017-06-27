# Object-Locator-App
Object-Locator-App is built using Cordova. 
The app uses phone's bluetooth adapter to send signal to the object-locator device mounted on any object (like a key). The signal sent, alerts the bluetooth module on the lost item and a buzzer or beeper attached to it begins to beep.
With some manipulations in the code, the app may also be used to create some other bluetooth serial communication related projects.
The App does not support android-android bluetooth communication.

To build the app in various platforms like ios and android:
For ios: use "$cordova platform add ios" and then execute "$cordova build ios --save".
For android: use "$ cordova platform add android" and then execute "$ cordvoa build android --save".
Your ios app will be saved in the platforms -> builds -> ios folder in the directory of your project. Similarly, the android app will be save in platforms -> builds -> android folder within the directory.
