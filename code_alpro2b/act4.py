from flask import Flask, request, render_template, url_for
from werkzeug.security import generate_password_hash, check_password_hash

app = Flask(__name__)

users = {}

@app.route('/', methods=['GET', 'POST'])
def login():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        if username in users and check_password_hash(users.get(username), password):
            return f'Welcome {username}!'
        else:
            return 'Invalid username or password. Click <a href="' + url_for('login') + '">here</a> to back.'
    
    else:
        return render_template('login.html')

@app.route('/register', methods=['GET', 'POST'])
def register():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        if username in users:
            return 'Username already taken. Click <a href="' + url_for('register') + '">here</a> to back.'
        else:
            users[username] = generate_password_hash(password)
            return 'Registration successful. Click <a href="' + url_for('login') + '">here</a> to login.'
    else:
        return render_template('register.html')

if __name__=='__main__':
    app.run(debug=True)
        