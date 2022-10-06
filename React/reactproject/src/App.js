import logo from './logo.svg';
import './App.css';
 import "../node_modules/bootstrap/dist/css/bootstrap.css"
 //import moduleName from './Components/Pages/Home '; 
import Home from './Components/Pages/Home';
import About from './Components/Pages/About';
import Contact from './Components/Pages/Contact';
import Navbar from './Components/Layout/Navbar';

function App() {
  return (
    <div className="App">
       
      <Home/>
      <About/>
      <Contact/>
      <Navbar/>
    </div>
  );
}

export default App;
