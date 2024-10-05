from test import app, db  # Adjust the import according to your app structure

with app.app_context():
    db.create_all()  # or whatever operation you're trying to perform
