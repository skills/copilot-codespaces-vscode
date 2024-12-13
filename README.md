<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Мод Меню</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            background-color: #282c34;
            color: white;
            text-align: center;
            padding: 50px;
        }
        .menu {
            background-color: #444;
            padding: 20px;
            border-radius: 10px;
            box-shadow: 0 5px 15px rgba(0, 0, 0, 0.3);
        }
        .menu button {
            background-color: #555;
            border: none;
            color: white;
            padding: 10px 20px;
            margin: 10px;
            cursor: pointer;
            font-size: 16px;
            border-radius: 5px;
        }
        .menu button:hover {
            background-color: #777;
        }
    </style>
</head>
<body>

<div class="menu">
    <h1>Мод Меню</h1>
    <button onclick="doNothing()">Опция 1</button>
    <button onclick="doNothing()">Опция 2</button>
    <button onclick="doNothing()">Опция 3</button>
    <button onclick="doNothing()">Опция 4</button>
</div>

<script>
    function doNothing() {
        alert("Эта опция не выполняет никаких действий.");
    }
</script>

</body>
</html>
