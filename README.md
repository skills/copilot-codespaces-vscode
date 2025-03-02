// App.js
import React, { useState } from 'react';
import { View, TouchableOpacity, Text, Vibration } from 'react-native';
import axios from 'axios';

const App = () => {
  const [isRunning, setIsRunning] = useState(false);

  const toggleBot = async () => {
    try {
      const response = await axios.post('https://ai-trade-server.com/toggle', {
        userId: 'USER123',
        action: isRunning ? 'stop' : 'start'
      });
      if (response.data.success) {
        Vibration.vibrate(100); // وائبریشن فیڈ بیک
        setIsRunning(!isRunning);
      }
    } catch (error) {
      console.error('ٹریڈنگ میں خرابی:', error);
    }
  };

  return (
    <View style={{ flex: 1 }}>
      <TouchableOpacity
        style={{
          position: 'absolute',
          right: 20,
          bottom: 20,
          width: 60,
          height: 60,
          borderRadius: 30,
          backgroundColor: isRunning ? '#00FF00' : '#FF0000',
          justifyContent: 'center',
          alignItems: 'center'
        }}
        onPress={toggleBot}
      >
        <Text style={{ color: 'white', fontWeight: 'bold' }}>
          {isRunning ? 'روکیں' : 'شروع کریں'}
        </Text>
      </TouchableOpacity>
    </View>
  );
};

export default App;
