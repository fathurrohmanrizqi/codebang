#Rizqi Fathurrohman 51422475
from flask import Flask, request
from werkzeug.utils import secure_filename
from flask import send_from_directory
import os

app = Flask(__name__)
app.config['UPLOAD FOLDER'] = os.path.join(os.path.dirname(__file__), 'uploads')

if not os.path.exists(app.config['UPLOAD FOLDER']):
    os.makedirs(app.config['UPLOAD FOLDER'])

@app.route('/upload', methods=['POST'])
def upload_file():
    file = request.files['file']
    filename = secure_filename(file.filename)
    file.save(os.path.join(app.config['UPLOAD FOLDER'], filename))
    return 'File Uploaded Successfully'

@app.route('/uploads/<filename>', methods=["GET"])
def download_file(filename):
    return send_from_directory(app.config['UPLOAD FOLDER'], filename)

if __name__ == '__main__':
    app.run(debug=True) 