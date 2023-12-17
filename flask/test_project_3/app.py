from flask import Flask, redirect
from flask.ext.bootstrap import Bootstrap

from flask
app = Flask(__name__)

bootstrap = Bootstrap(app)

# @app.route('/')
# def index():
#     return '<h1> hi %s</h1>' % request.headers.get('User-Agent')
#
#
# if __name__ == '__main__':
#     app.run(debug=True)
