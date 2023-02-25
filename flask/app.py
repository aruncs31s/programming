from flask import *
app = Flask(__name__)


@app.route('/')
def index():
    return '<h1> hi %s</h1>' % request.headers.get('User-Agent')


if __name__ == '__main__':
    app.run(debug=True)
