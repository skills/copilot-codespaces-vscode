<!DOCTYPE html>
<html lang="nl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Premieberekeningstool</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 20px;
            background-color: #f7f7f7;
            color: #333;
        }
        .container {
            background: #fff;
            padding: 20px;
            border-radius: 8px;
            box-shadow: 0 0 10px rgba(0,0,0,0.1);
            max-width: 600px;
            margin: auto;
        }
        h1 {
            color: #2a7bd6;
            text-align: center;
        }
        label {
            display: block;
            margin: 10px 0 5px;
        }
        input, select {
            width: 100%;
            padding: 8px;
            margin-bottom: 15px;
            border: 1px solid #ccc;
            border-radius: 4px;
        }
        button {
            background: #2a7bd6;
            color: #fff;
            padding: 10px;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            font-size: 16px;
            width: 100%;
        }
        button:hover {
            background: #205c9f;
        }
        .result {
            margin-top: 20px;
            font-size: 18px;
            font-weight: bold;
            color: #2a7bd6;
            text-align: center;
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Premieberekeningstool</h1>
        <form id="premiumForm">
            <label for="insuranceType">Kies een verzekeringstype:</label>
            <select id="insuranceType" required>
                <option value="auto">Autoverzekering</option>
                <option value="inboedel">Inboedelverzekering</option>
                <option value="aansprakelijkheid">Aansprakelijkheidsverzekering</option>
            </select>

            <label for="age">Leeftijd bestuurder / verzekeringnemer:</label>
            <input type="number" id="age" min="18" max="99" required>

            <label for="value">Waarde van het object (bijvoorbeeld auto of inboedel, in euro's):</label>
            <input type="number" id="value" min="100" step="100" required>

            <button type="button" onclick="calculatePremium()">Bereken je premie</button>
        </form>

        <div class="result" id="result"></div>
    </div>

    <script>
        function calculatePremium() {
            const insuranceType = document.getElementById('insuranceType').value;
            const age = parseInt(document.getElementById('age').value);
            const value = parseInt(document.getElementById('value').value);

            let basePremium = 0;

            if (insuranceType === 'auto') {
                basePremium = value * 0.02; // 2% van de waarde
                if (age < 25) basePremium += 150; // Jonger dan 25 betaalt extra risico
            } else if (insuranceType === 'inboedel') {
                basePremium = value * 0.01; // 1% van de waarde
            } else if (insuranceType === 'aansprakelijkheid') {
                basePremium = 75; // Standaard premie
                if (age < 25) basePremium += 25; // Extra risico toeslag
            }

            document.getElementById('result').innerHTML = `Jouw geschatte premie is: € ${basePremium.toFixed(2)} per jaar.`;
        }
    </script>
</body>
</html>
