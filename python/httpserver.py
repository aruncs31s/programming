import http
import os 

print("This is a Simple Interactive Http Server Script")

port=input("Port: ")

os.system("python -m http.server " + port )

