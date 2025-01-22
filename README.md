<!DOCTYPE html>
<html lang="ar">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>التقاط الصورة وإرسالها</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            text-align: center;
            margin-top: 50px;
        }
        video, canvas, img {
            display: block;
            margin: 20px auto;
            border: 2px solid #ccc;
            border-radius: 10px;
        }
        button {
            padding: 10px 20px;
            font-size: 16px;
            cursor: pointer;
            border: none;
            background-color: #007BFF;
            color: white;
            border-radius: 5px;
        }
        button:hover {
            background-color: #0056b3;
        }
    </style>
</head>
<body>
    <h1>التقاط الصورة وإرسالها</h1>
    <video id="video" width="320" height="240" autoplay></video>
    <canvas id="canvas" width="320" height="240" style="display:none;"></canvas>
    <img id="photo" alt="الصورة الملتقطة">
    <button id="capture-btn">التقاط الصورة</button>
    <p id="status"></p>

    <script>
        const video = document.getElementById('video');
        const canvas = document.getElementById('canvas');
        const photo = document.getElementById('photo');
        const captureBtn = document.getElementById('capture-btn');
        const statusText = document.getElementById('status');

        // طلب إذن لاستخدام الكاميرا
        navigator.mediaDevices.getUserMedia({ video: true })
            .then((stream) => {
                video.srcObject = stream;
                video.play();
            })
            .catch((err) => {
                statusText.textContent = "خطأ في الوصول إلى الكاميرا: " + err.message;
            });

        // التقاط الصورة عند النقر على الزر
        captureBtn.addEventListener('click', () => {
            const context = canvas.getContext('2d');
            canvas.width = video.videoWidth;
            canvas.height = video.videoHeight;
            context.drawImage(video, 0, 0, canvas.width, canvas.height);

            // تحويل الصورة إلى صيغة base64
            const data = canvas.toDataURL('image/png');
            photo.setAttribute('src', data);

            // إرسال الصورة إلى الخادم
            sendImageToServer(data);
        });

        // إرسال الصورة إلى الخادم
        function sendImageToServer(imageData) {
            statusText.textContent = "جاري إرسال الصورة...";
            fetch('/upload', {
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json',
                },
                body: JSON.stringify({ image: imageData }),
            })
            .then(response => response.json())
            .then(data => {
                statusText.textContent = "تم إرسال الصورة بنجاح!";
                console.log(data);
            })
            .catch((err) => {
                statusText.textContent = "خطأ في إرسال الصورة: " + err.message;
            });
        }
    </script>
</body>
</html>
