from flask import Flask
app = Flask(__name__)


@app.route('/')
def hello_world():
    return "Hello World"


@app.route('/<path>')
def wrong_path(path):
    return "<h2> hello <b>%s</b></h2>" % path


if __name__ == '__main__':
    app.run(host='localhost', port='8080', debug=True)
