import os

from flask_sqlalchemy import SQLAlchemy
from sqlalchemy import create_engine

from flask import Flask, render_template

engine = create_engine("sqlite:///test.db")

basedir = os.path.abspath(os.path.dirname(__file__))
app = Flask(__name__)
app.config["SQLALCHEMY_DATABASE_URI"] = "sqlite:///" + os.path.join(
    basedir, "database.db"
)
app.config["SQLALCHEMY_TRACK_MODIFICATIONS"] = False

db = SQLAlchemy(app)


class Profile(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(20), unique=True, nullable=False)
    age = db.Column(db.Integer, nullable=False)

    # How the one object in the database look like
    def __repr__(self):
        return f"Profile {self.name} Age: {self.age}"
