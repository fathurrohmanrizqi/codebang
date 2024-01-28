from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')
def hello_world():
    return 'Hello World!'

@app.route('/nama')
def nama():
    return 'Nama: Rizqi Fathurrohman'

@app.route('/npm')
def npm():
    return 'NPM: 51422475'

@app.route('/kelas')
def kelas():
    return 'Kelas: 1IA24'

@app.route('/mahasiswa')
def getmahasiswa():
    return render_template('mahasiswa.html')

if __name__== '__main__':
    app.run(debug=True)
