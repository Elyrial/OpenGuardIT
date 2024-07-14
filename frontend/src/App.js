import './App.css';
import React from 'react';
import { logInfo } from './utils/logger';


function App() {
    const handleClick = () => {
        logInfo('Button clicked!');
    }

    return (
        <div>
            <h1>Hello, React!</h1>
            <p>This is my first React application.</p>
            <button onClick={handleClick}>Log Info</button>
        </div>
    );   
}

export default App;
